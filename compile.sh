swig -python -c++ -o example_wrap.cpp example.i
g++  -I/usr/include/python3.5m -c example.c -o example.o -fPIC  -std=c++11
g++  -I/usr/include/python3.5m -c example_wrap.cpp  -o example_wrap.o -fPIC  -std=c++11
g++ example.o example_wrap.o -o _example.so -shared -Wl,-soname,_example.so
echo done