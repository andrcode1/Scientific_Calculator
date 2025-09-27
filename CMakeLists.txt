cmake_minimum_required(VERSION 3.16)

project(Scientific_Calculator VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_AUTOUIC_SEARCH_PATHS
    "${CMAKE_CURRENT_SOURCE_DIR}/forms"
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        src/main.cpp
        src/mainwindow.cpp
        src/CalculateExpression.cpp
    include/mainwindow.hpp
    include/CalculateExpression.hpp
        forms/mainwindow.ui
)

if(QT_VERSION_MAJOR GREATER_EQUAL 6)
    qt_add_executable(Scientific_Calculator
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        images.qrc
    )
else()
    add_executable(Scientific_Calculator
        ${PROJECT_SOURCES}
        images.qrc
    )
endif()

target_link_libraries(Scientific_Calculator PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_include_directories(Scientific_Calculator PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

include(GNUInstallDirs)
install(TARGETS Scientific_Calculator
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Scientific_Calculator)
endif()
