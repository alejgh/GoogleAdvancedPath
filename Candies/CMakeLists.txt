add_executable(Candies src/main.cpp src/Candies.cpp)
add_executable(CandiesTest test/CandiesTest.cpp src/Candies.cpp)

target_include_directories(Candies PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(CandiesTest PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)