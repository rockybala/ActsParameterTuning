add_library(ParameterTuning src/TunableParameters.cpp)

message("ParameterTuning current source dir = ${CMAKE_CURRENT_SOURCE_DIR}")

target_include_directories( ParameterTuning PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)