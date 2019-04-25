#ifndef EXAMPLE_H
 #define EXAMPLE_H
#include <vector>
#include <string>

//test c functions
int fact(int n);
int my_mod(int x, int y);
char *get_time();


//test c++ std library
// std::vector for python::list
double average(std::vector<int> v);
std::vector<double> half(const std::vector<double>& v);
void halve_in_place(std::vector<double>& v);
void print_str(const std::string& name);
std::string get_str();

//test numpy array.
/* Define function prototype to take in a NumPy array */
double sum_array(const double* input_array, int length);

void print_2d_array(const double* array_2d, int dim1, int dim2);

void get_rand_array(double* output_array, int length);

#endif