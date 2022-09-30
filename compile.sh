#!/bin/bash

mkdir -p dist
cd 2.4.38

./configure --prefix=$(pwd)/../dist --with-included-apr --enable-so --enable-cgi --with-mpm=prefork

make -j4
if [ $? -ne 0 ]; then
    echo "Failed to build apache"
    exit 1
fi
make install

git submodule update --init --recursive
cd perfIsolation-Apache-mod_fcgid
APXS=$(pwd)/../dist/bin/apxs ./configure.apxs
make
if [ $? -ne 0 ]; then
    echo "Failed to build apache"
    exit 1
fi
make install

cd php-7.4.23
./buildconf --force
./configure --with-apxs2=$(pwd)/../dist/bin/apxs --prefix=$(pwd)/../dist/php
make -j4 
if [ $? -ne 0 ]; then
    echo "Failed to build apache"
    exit 1
fi
make install
