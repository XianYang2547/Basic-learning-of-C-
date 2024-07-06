cmake_minimum_required(VERSION 3.20)
project(App)

find_package(OpenCV REQUIRED)
message("OpenCV version: ${OpenCV_VERSION}")

# 制定使用的C++标准
set(CMAKE_CXX_STANDARD 11)
# 可执行文件的输出路径,不放在build中，放在cmakelists同级目录
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR})
# 制定要哪些文件
file(GLOB SOURCES ${PROJECT_SOURCE_DIR} "*.cpp" "*.hpp")
message("${SOURCES}")
add_executable(App ${SOURCES})

target_link_libraries(App ${OpenCV_LIBS})

#生成执行文件 g++ main.cpp -o main `pkg-config --cflags --libs opencv4`
