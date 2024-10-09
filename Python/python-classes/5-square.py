#!/usr/bin/python3
"""this module contain a square class"""


class Square:
    """Square class"""

    def __init__(self, size=0):
        """
        __init__ mehtod:

        __size:
        define size of a square in m2
        """
        self.size = size

    @property
    def size(self):
        """ set size property """
        return self.__size

    @size.setter
    def size(self, value):
        """ set user value to size """
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        if value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    def area(self):
        """ calcul of size ** 2"""
        return self.__size * self.__size

    def my_print(self):
        """ print area of #

        __size : __size * __size define area of square
        """
        if self.size == 0:
            print()
        else:
            for i in range(self.__size):
                print("#" * self.__size)
