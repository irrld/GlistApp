cmake_minimum_required (VERSION 3.10.2)

if(POLICY CMP0079)
    cmake_policy(SET CMP0079 NEW)
endif()

########## PROJECT NAME ##########
set(APP_NAME GlistApp)

########## USED PLUGINS LIST ##########
set(PLUGINS)

##################################################
# DO NOT CHANGE BELOW
##################################################

########## PATHS AND VARIABLES ##########
project (${APP_NAME})


set(TOP_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../../../../..")
set(MAIN_DIR ${TOP_DIR}/GlistEngine)
set(ENGINE_DIR ${MAIN_DIR}/engine)

# gipAndroid eklentisini ekliyoruz
list(APPEND PLUGINS gipAndroid)

# Engine CMake'ini dahil ediyoruz
include(${ENGINE_DIR}/CMakeLists.txt)

if(NOT DEFINED GLIST_APP_REL_PATH)
    set(GLIST_APP_REL_PATH src/GlistApp)
endif()

include_directories(${GLIST_APP_REL_PATH}/src)
add_subdirectory(${GLIST_APP_REL_PATH} ${CMAKE_CURRENT_BINARY_DIR}/GlistApp)

if(TARGET GlistApp)
    target_link_libraries(GlistApp PRIVATE atomic)
endif()