# -*- coding: utf-8 -*-
# @Time    : 2024/6/18 下午7:16
# @Author  : XianYang🚀
# @Email   : xy_mts@163.com
# @File    : z1.py
# ------❤❤❤------ #
import os

import tensorrt as trt
import torch

device=torch.device('cuda:0')
# onnx文件路径设置
onnx_path = r"yolov8n.onnx"
# 引擎文件保存路径设置
engine_path = r"yolov8n.engine"
# 创建logger：日志记录器
logger = trt.Logger(trt.Logger.WARNING)

# 创建构建器builder
builder = trt.Builder(logger)
# 预创建网络
network = builder.create_network(1 << int(trt.NetworkDefinitionCreationFlag.EXPLICIT_BATCH))
# 加载onnx解析器
parser = trt.OnnxParser(network, logger)
success = parser.parse_from_file(onnx_path)
for idx in range(parser.num_errors):
    print(parser.get_error(idx))
if not success:
    print("failed----------------")
    pass  # Error handling code here

# builder配置
config = builder.create_builder_config()
config.set_flag(trt.BuilderFlag.FP16)
# 分配显存作为工作区间，一般建议为显存一半的大小
config.max_workspace_size = torch.cuda.get_device_properties(device).total_memory

serialized_engine = builder.build_serialized_network(network, config)
# 序列化生成engine文件
# 检查引擎文件是否已存在
if os.path.exists(engine_path):
    overwrite = input("The engine file already exists. Do you want to overwrite it? (y/n): ")
    if overwrite.lower() != 'y':
        print("Operation aborted.")
        exit()

# 保存引擎文件
with open(engine_path, "wb") as f:
    f.write(serialized_engine)
    print("Engine file saved successfully!")