#!/usr/bin/python3
"""
this module contain a class with an exception raised
"""


class BaseGeometry:
    """class BaseGeometry

    Raises:
        Exception: if not implemented
    """
    def area(self):
        raise Exception('area() is not implemented')
