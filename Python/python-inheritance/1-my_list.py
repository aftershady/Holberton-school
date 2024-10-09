#!/usr/bin/python3
"""
this module contain a class who append elements in list
"""


class MyList(list):
    """class Mylist

    Args:
        list (_type_): list given to sort
    """
    def print_sorted(self):
        """
        sort a list
        """
        sorted_list = sorted(self)
        print(sorted_list)
