# an example from http://www.swig.org/tutorial.html, make python extension via swig
## compile
for c:
```
swig -python example.i
gcc -c -fPIC example.c example_wrap.c -I/usr/include/python3.5m
ld -shared example.o example_wrap.o -o _example.so 
```
for c++, use ```compile.sh``` to compoile .so library and then use ```python3 test.py``` test the module.

reference documents:
https://mit-crpg.github.io/OpenMOC/devguide/swig.html
http://web.mit.edu/svn/src/swig-1.3.25/Doc/Manual/SWIGPlus.html
http://www.swig.org/Doc1.3/SWIG.html#SWIG
http://www.swig.org/Doc1.3/SWIGPlus.html#SWIGPlus_nested_classes
https://gist.github.com/mattbierbaum/1193397
swig for numpy : https://docs.scipy.org/doc/numpy/reference/swig.interface-file.html