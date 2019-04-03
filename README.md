# an example from http://www.swig.org/tutorial.html, make python extension via swig
## compile

```
swig -python example.i
gcc -c -fPIC example.c example_wrap.c -I/usr/include/python3.5m
ld -shared example.o example_wrap.o -o _example.so 
```