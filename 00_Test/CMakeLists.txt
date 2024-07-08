cmake_minimum_required(VERSION 3.20)
project(App)

# 制定使用的C++标准和CUDA架构
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CUDA_ARCHITECTURES 60 61 62 70 72 75 86 89 90)
set(CMAKE_BUILD_TYPE Debug)# 指定构建类型为 Debug

# OpenCV
find_package(OpenCV REQUIRED)
# CUDA
find_package(CUDA REQUIRED)
# TensorRT
set(TensorRT_INCLUDE_DIRS /usr/include/x86_64-linux-gnu)
set(TensorRT_LIBRARIES /usr/lib/x86_64-linux-gnu)

list(APPEND INCLUDE_DIRS
        ${CUDA_INCLUDE_DIRS}
        ${OpenCV_INCLUDE_DIRS}
        ${TensorRT_INCLUDE_DIRS}
        include
)

list(APPEND ALL_LIBS
        ${CUDA_LIBRARIES}
        ${CUDA_LIB_DIR}
        ${OpenCV_LIBRARIES}
        ${TensorRT_LIBRARIES}
)
include_directories(${INCLUDE_DIRS})

# 可执行文件的输出路径,不放在build中，放在cmakelists同级目录
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR})
# 制定要哪些文件
file(GLOB SOURCES ${PROJECT_SOURCE_DIR} "*.cpp" "*.hpp")
message("${SOURCES}")
add_executable(${PROJECT_NAME} ${SOURCES}
                include/common.hpp
                include/yolo.hpp)

target_link_directories(${PROJECT_NAME} PUBLIC ${ALL_LIBS})
target_link_libraries(${PROJECT_NAME} PRIVATE nvinfer nvinfer_plugin cudart ${OpenCV_LIBS})

#生成执行文件 g++ main.cpp -o main `pkg-config --cflags --libs opencv4`
