#!/bin/bash

if [ ! -d "build" ]; then
  mkdir build
fi

cd build
cmake -DCMAKE_SKIP_INSTALL_ALL_DEPENDENCY=TRUE ..
cd ..
