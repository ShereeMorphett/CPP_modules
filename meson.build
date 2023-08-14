project(
    'libft_cpp', #name
    'cpp', #language
    meson_version: '>=1.0.0',
    default_options : [ 'b_ndebug=if-release', 'buildtype=debug', 'cpp_std=c++14']
)

subdir('include')

# include_dir now in scope

subdir('src')
#src target set

subdir('tests')
#test target set

subdir('apps')