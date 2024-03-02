cmake_minimum_required(VERSION 3.24)

include(../cmake/raylib.cmake)

project(Aufgabe2 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(${PROJECT_NAME} Aufgabe2.cpp
        ../Aufgabe3-Wuerfelspiel/Aufgabe3.cpp
        ../Aufgabe4-Pflanzenklassen/Aufgabe4.cpp
        ../Aufgabe5-CustomDynamicArray/Aufgabe5.cpp
        ../Aufgabe6-Auto/Aufgabe6.cpp
        ../Aufgabe7-RaylibSpriteKlasse/Aufgabe7.cpp
        ../Aufgabe8-LevelKlasse/Aufgabe8.cpp
        Sprite.cpp
        Sprite.h
        ../Aufgabe3-Wuerfelspiel/Functions.cpp
        ../Aufgabe3-Wuerfelspiel/Functions.h)

# Add config.h.in file
configure_file(Aufgabe2_config.h.in config.h)
target_include_directories(${PROJECT_NAME} PUBLIC
        "${PROJECT_BINARY_DIR}"
)

# Link to Raylib
# Static linking may be interesting, especially under Windows with MinGW,
# so that the MinGW DLLs do not have to be supplied.
# (Unfortunately, there is no easy way to link the C++ standard libraries
# statically and other libraries dynamically.)
if(UNIX)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libgcc -static-libstdc++")
    target_link_libraries(${PROJECT_NAME} raylib)
else()
    target_link_libraries(${PROJECT_NAME} raylib -static)
endif()

# Copy assets to assets path
add_custom_target(copy_assets2
        COMMAND ${CMAKE_COMMAND} -P "${CMAKE_CURRENT_LIST_DIR}/../cmake/copy-assets.cmake"
)
add_dependencies(${PROJECT_NAME} copy_assets2)

if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework IOKit")
    target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
endif ()

# CPack instructions
# call e.g. cpack -G ZIP -C Debug to create a binary distribution
install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION "${PROJECT_NAME}_Bundle")
install(DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/assets" DESTINATION "${PROJECT_NAME}_Bundle")