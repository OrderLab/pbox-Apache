#!/bin/bash

mkdir -p {dist}
cd 2.4.38

./configure --prefix=$(pwd)/../dist --with-included-apr --enable-so --enable-cgi --with-mpm=prefork

make -j4
if [ $? -ne 0 ]; then
	  echo "Failed to build mysql"
	    exit 1
fi

make install
