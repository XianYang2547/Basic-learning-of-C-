cmake_minimum_required(VERSION 3.28)
project(xy_c_pro)

set(CMAKE_CXX_STANDARD 17)

# 寻找并包含 OpenCV 库sa
set(OpenCV_DIR /usr/local/include/opencv4/opencv2)
find_package(OpenCV REQUIRED)


add_executable(xy_c_pro main.cpp
)
target_link_libraries(xy_c_pro ${OpenCV_LIBS})

#生成执行文件 g++ main.cpp -o main `pkg-config --cflags --libs opencv4`
