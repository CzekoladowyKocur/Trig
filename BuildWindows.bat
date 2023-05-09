if not exist build (mkdir build)

cd build
cmake -DCMAKE_SKIP_INSTALL_ALL_DEPENDENCY=TRUE ..
cd ..