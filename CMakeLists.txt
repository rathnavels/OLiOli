cmake_minimum_required(VERSION 3.0.0)

project(OLiOli VERSION 1.0.0)

#find_package(SDL2 REQUIRED)

SET(FFMPEG_LIBRARY_PATH ${CMAKE_CURRENT_LIST_DIR}/libs/ffmpeg)
SET(SDL2_LIBRARY_PATH ${CMAKE_CURRENT_LIST_DIR}/libs/sdl2)
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_LIST_DIR}/include/ffmpeg)
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_LIST_DIR}/include/sdl2)

set(SOURCE_FILES src/main.cpp)

add_executable(OLiOli src/main.cpp)
#target_link_libraries(${PROJECT_NAME} SDL2::SDL2 SDL2::SDL2main 
target_link_libraries(${PROJECT_NAME} 
						${SDL2_LIBRARY_PATH}/SDL2.lib
						${SDL2_LIBRARY_PATH}/SDL2main.lib
						${FFMPEG_LIBRARY_PATH}/avcodec.lib
						${FFMPEG_LIBRARY_PATH}/avdevice.lib
						${FFMPEG_LIBRARY_PATH}/avfilter.lib
						${FFMPEG_LIBRARY_PATH}/avformat.lib
						${FFMPEG_LIBRARY_PATH}/avutil.lib
						${FFMPEG_LIBRARY_PATH}/postproc.lib
						${FFMPEG_LIBRARY_PATH}/swresample.lib
						${FFMPEG_LIBRARY_PATH}/swscale.lib)

set_target_properties(${PROJECT_NAME} 
						PROPERTIES 
						RUNTIME_OUTPUT_DIRECTORY_DEBUG 
						${CMAKE_CURRENT_LIST_DIR}/bin)









