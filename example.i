%module example
%include "std_vector.i"
%include "std_string.i"

%{
#define SWIG_FILE_WITH_INIT
#include "example.h"
%}

// numpy array need init, https://mit-crpg.github.io/OpenMOC/devguide/swig.html
//https://docs.scipy.org/doc/numpy/reference/swig.interface-file.html
%include "numpy.i"
%init %{
  import_array();
%}
// typemap: IN_ARRAY2, IN_ARRAY3, DIM1, DIM2, DIM3, input array only
/* Typemap for the sum_list(double* input_array, int length) C/C++ routine */
%apply (double* IN_ARRAY1, int DIM1) {(const double* input_array, int length)};
%apply (double* IN_ARRAY2, int DIM1, int DIM2 ){(const double* array_2d, int dim1, int dim2)}
/* Typemap for the get_rand_array(double* output_array, int length) C/C++ routine */
%apply (double* ARGOUT_ARRAY1, int DIM1) {(double* output_array, int length)};

// Instantiate templates used by example
namespace std {
   %template(IntVector) vector<int>;
   %template(DoubleVector) vector<double>;
}
 
%include "example.h"
