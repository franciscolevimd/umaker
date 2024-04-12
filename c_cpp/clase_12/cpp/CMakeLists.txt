cmake_minimum_required(VERSION 3.0.0)
project(estructurascpp2 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(estructurascpp2 main.cpp ${SRC_FILES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

target_include_directories(estructurascpp2 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
include(CPack)
