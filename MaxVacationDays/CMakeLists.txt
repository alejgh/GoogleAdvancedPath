add_executable(MaxVacationDays src/main.cpp src/VacationDays.cpp)
add_executable(MaxVacationDaysTest test/VacationDaysTest.cpp src/VacationDays.cpp)

target_include_directories(MaxVacationDays PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(MaxVacationDaysTest PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)