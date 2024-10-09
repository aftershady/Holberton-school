#!/usr/bin/python3
"""
this module have only one function that return dir
with a given object
"""


def lookup(obj):
    """function lookup

    Args:
        obj (type): generic variable for dir usage

    Returns:
        dir : list all available attributes of this object
    """
    return dir(obj)
