libcpp_lib= library(
    meson.project_name(),
    files('libcpp.cpp'),
    include_directories: include_dir
)

libcpp_dep= declare_dependency(    
    link_with: libcpp_lib,
    include_directories: include_dir
) 