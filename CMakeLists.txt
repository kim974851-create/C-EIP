cmake_minimum_required(VERSION 3.30)
project(C_EIP C)

set(CMAKE_C_STANDARD 11)

file(GLOB IO_SOURCES        "IO_Functions_Operation/*.c")
file(GLOB DATATYPE_SOURCES  "자료형과 변수/*.c")
file(GLOB CONTROL_SOURCES   "Control_Flow_Statement/*.c")

foreach(SOURCE ${IO_SOURCES} ${DATATYPE_SOURCES} ${CONTROL_SOURCES})
    get_filename_component(TARGET_NAME ${SOURCE} NAME_WE)
    add_executable(${TARGET_NAME} ${SOURCE})
endforeach()