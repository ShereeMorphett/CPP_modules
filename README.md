Currently in progress

requirments:

``` sh
sudo apt update && sudo apt-get install python3 python3-pip ninja-build

sh sudo pip3 install --upgrade meson

CC=cc CC_LD=lld CXX=c++ CXX_LD=lld meson setup builddir
```

#ninja is a backend for build systems 
#meson is a build system it is the front end stuff works with ninja.

meson setup builddir

in the root directory
