include(modules/DownloadProject/DownloadProject.cmake)

get_filename_component(OUT_OF_SOURCE ../ ABSOLUTE)
set(DEPS_PREFIX PREFIX ${OUT_OF_SOURCE}/.cmake/deps)

####################################################
#             vgui
####################################################
download_project(PROJ vgui
    GIT_REPOSITORY https://github.com/vgui/vgui.git
    ${DEPS_PREFIX}
    UPDATE_DISCONNECTED 1

    )

add_subdirectory(
    ${vgui_SOURCE_DIR}
    ${vgui_BINARY_DIR}    
    )

include_directories(${vgui_SOURCE_DIR}/include)
include_directories(${glad_SOURCE_DIR}/include)
