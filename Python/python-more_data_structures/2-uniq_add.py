#!/usr/bin/python3
# return sum of numbers but don't work if char in list
def uniq_add(my_list=[]):
    unique_numbers = set()
    for element in my_list:
        if isinstance(element, (int)):
            unique_numbers.add(element)
    return sum(unique_numbers)
