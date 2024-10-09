#!/usr/bin/python3
"""
this module contain a function that check if an object is a subclass
"""


def inherits_from(obj, a_class):
    """_summary_

    Args:
        obj (type): object given, could be from different types
        a_class (class): class given to compare

    Returns:
        if the type of the object is not a class
        return if object is a subclass
    """
    if type(obj) is not a_class:
        return issubclass(type(obj), a_class)
