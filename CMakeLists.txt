cmake_minimum_required(VERSION 3.16)

project(Scientific_Calculator VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_AUTOUIC_SEARCH_PATHS
    "${CMAKE_CURRENT_SOURCE_DIR}/Forms"
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(QT_DIR D:/Qt/6.8.2/mingw_64)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        Source_Files/main.cpp
        Source_Files/mainwindow.cpp
        Source_Files/CalculateExpression.cpp
        Header_Files/mainwindow.h
        Header_Files/CalculateExpression.h
        Forms/mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Scientific_Calculator
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        images.qrc
    )
else()
    if(ANDROID)
        add_library(Scientific_Calculator SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(Scientific_Calculator
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Scientific_Calculator PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_include_directories(Scientific_Calculator PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Header_Files)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Scientific_Calculator)
endif()
set_target_properties(Scientific_Calculator PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Scientific_Calculator
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Scientific_Calculator)
endif()
