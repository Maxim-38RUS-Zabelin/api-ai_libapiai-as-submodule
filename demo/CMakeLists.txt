project(demo)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)

message(${CMAKE_CURRENT_SOURCE_DIR}/../lib/libapiai/apiai/include)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../lib/libapiai/apiai/include)
set(HEADER_FILES ${CMAKE_CURRENT_SOURCE_DIR}/../lib/libapiai/apiai/include/*.h)

add_executable(${PROJECT_NAME} ${SRC_LIST})
target_link_libraries(${PROJECT_NAME} apiai)
