add_library(
        uds_lib STATIC
        ReadDataByIdentifier.cpp
        Service.cpp
        Uds.cpp
        WriteDataByIdentifier.cpp
        Did.cpp Did.h)

target_include_directories(
        uds_lib PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)
