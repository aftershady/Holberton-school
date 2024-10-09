#!/usr/bin/python3
def max_integer(my_list=[]):
    # verification if my_list is not empty
    if len(my_list) == 0:
        return (0)
    # find the max value
    nb_max = 0
    for num in my_list:
        if num > nb_max:
            nb_max = num

    return nb_max
