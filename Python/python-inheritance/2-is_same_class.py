#!/usr/bin/python3
"""
this module check if an object has the same type of a class
"""


def is_same_class(obj, a_class):
    """function is_same_class

    Args:
        obj (type): object of a different type
        a_class (): class of object

    Returns:
        bool: True or False
    """
    return type(obj) is a_class
