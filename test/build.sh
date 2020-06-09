#!/bin/bash

g++ -c -o build/preprocessing.o ../_src/preprocessing.cpp -I../_inc/project
g++ -c -o build/Math.o ../_src/Math.cpp -I../_inc/project
ar ru build/libpreprocessing.a build/preprocessing.o build/Math.o
g++ Naive_Bayes_test.cpp -I../_inc/project build/libpreprocessing.a  -Waliasing -std=c++11 -DWITHOUT_NUMPY -I/usr/include/python2.7 -I/usr/include/x86_64-linux-gnu/python2.7  -fno-strict-aliasing -Wdate-time -D_FORTIFY_SOURCE=2 -g -fdebug-prefix-map=/build/python2.7-UKCoZ3/python2.7-2.7.17=. -fstack-protector-strong -Wformat  -Werror=format-security  -DNDEBUG -g -fwrapv -O2 -Wall -L/usr/lib/python2.7 -L /usr/lib/python2.7/config-x86_64-linux-gnu -L/usr/lib -lpython2.7 -lpthread -ldl  -lutil -lm  -Xlinker -export-dynamic -Wl,-O1 -Wl,-Bsymbolic-functions -fPIC -g3 -o build/Naive_Bayes_test
echo "Build completed successfully"