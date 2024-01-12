# Learning Programming project for Yoshiki Obinata
## How to build
### C/C++ Project
``` shell
mkdir my_project && cd my_project
ln -sf ../common_build.cmake ./CMakeLists.txt
mkdir build
cd build
cmake ..
make -j$(nproc)
```

