add_executable(Permutation src/main.cpp src/Palindrome.cpp)
add_executable(PermutationTest test/PalindromeTest.cpp src/Palindrome.cpp)

target_include_directories(Permutation PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(PermutationTest PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)