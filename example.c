/* File : example.c */
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
#include <time.h>
#include <iostream>

#include "example.h"

 double My_variable = 3.0;
 
 int fact(int n) {
     if (n <= 1) return 1;
     else return n*fact(n-1);
 }
 
 int my_mod(int x, int y) {
     return (x%y);
 }
 	
 char *get_time()
 {
     time_t ltime;
     time(&ltime);
     return ctime(&ltime);
 }


double average(std::vector<int> v) {
    return std::accumulate(v.begin(),v.end(),0.0)/v.size();
}

std::vector<double> half(const std::vector<double>& v) {
    std::vector<double> w(v);
    for (unsigned int i=0; i<w.size(); i++)
        w[i] /= 2.0;
    return w;
}

void halve_in_place(std::vector<double>& v) {
    std::transform(v.begin(),v.end(),v.begin(),
                   std::bind2nd(std::divides<double>(),2.0));
}

void print_str(const std::string& name)
{
    std::cout<<name<<std::endl;
}

std::string get_str()
{
    return "hello swig string";
}

double sum_array(const double* input_array, int length) {

  /* Initialize sum */
  double sum = 0.;

  /* Compute sum of array elements */
  for (int i=0; i < length; i++)
    sum += input_array[i];

  return sum;
}

void print_2d_array(const double* array_2d, int dim1, int dim2)
{
    for(int ii = 0; ii < dim1; ++ii)
    {
        for(int jj = 0; jj < dim2; ++jj)
        {
            int idx = ii * dim2 + jj;
            std::cout<<array_2d[idx]<<" ";
        }
        std::cout<<std::endl;
    }
}
/* Define function implementation */
void get_rand_array(double* output_array, int length, int dumy) {

  /* Populate input NumPy array with random numbers */
  for (int i=0; i < length; i++)
    output_array[i] = ((double) rand()) / RAND_MAX;

  std::cout<<"dumy"<<dumy<<std::endl;
}

Person::Person(const std::string& name)
{
    m_name = name;
}