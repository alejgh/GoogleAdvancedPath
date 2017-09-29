add_executable(Decompression src/main.cpp src/Decompression.cpp)
add_executable(DecompressionTest test/DecompressionTest.cpp src/Decompression.cpp)
target_include_directories(Decompression PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(DecompressionTest PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
