set(TARGET_NAME material-networking)
setup_hifi_library()
link_hifi_libraries(shared shaders networking graphics ktx image gl)
include_hifi_library_headers(gpu)
include_hifi_library_headers(hfm)