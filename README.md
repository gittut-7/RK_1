[![Build Status](https://www.travis-ci.com/gittut-7/RK_1.svg?branch=master)](https://www.travis-ci.com/gittut-7/RK_1)
## Build
- cmake -H. -B_build -DCMAKE_INSTALL_PREFIX=_install -DBUILD_TESTS=ON
- cmake —build _build —target install

## Test
- cmake —build _build —target test — ARGS=--verbose