#!/usr/bin/python3
"""
this module check if an object is an instance of a class
"""


def is_kind_of_class(obj, a_class):
    """
    Args:
        obj (type): object of a different type
        a_class (): class of object

    Returns:
        bool: True or False
    """
    return isinstance(obj, a_class)
