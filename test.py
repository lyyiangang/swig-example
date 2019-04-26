import example
import numpy as np
dir(example)
print(example.fact(5))
print(example.half([2, 3, 4]))
print(example.average([2, 3, 4]))
example.print_str("hell")
print(example.get_str())
print(example.sum_array(np.array([2, 3, 4])))
example.print_2d_array(np.array([[2, 3, 4], [5, 6, 7]]))
print('rand arr:{}'.format(example.get_rand_array(10, 23)))
p = example.Person("ly")
print('test done')