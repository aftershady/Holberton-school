#!/usr/bin/python3
"""this module contain a square class"""


class Square:
    """Square class"""

    def __init__(self, size=0):
        """
        __init__ mehtod:

        __size:
        verification of type and value should not be < to 0
        define size of a square in m2
        """
        if not isinstance(size, int):
            raise TypeError('size must be an integer')
        elif size < 0:
            raise ValueError('size must be >= 0')
        else:
            self.__size = size

    def area(self):
        """ calculation of size ** 2"""
        return self.__size * self.__size
