#!/usr/bin/python3
"""this module contain a square class"""


class Square:
    """Square class"""
    def __init__(self, size=0, position=(0, 0)):
        """
        __init__ method:
        __size:
        define size of a square in m2
        __position:
        tuple with values y x
        define position of the square
        """
        self.size = size
        self.position = position

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

    @property
    def position(self):
        """ set position property """
        return self.__position

    @position.setter
    def position(self, value):
        """ add position of the square
        x position = line return
        y position = spaces
        """
        if not isinstance(value, tuple) or len(value) != 2 or \
           not all(isinstance(num, int) and num >= 0 for num in value):
            raise TypeError("position must be a tuple of 2 positive integers")
        else:
            self.__position = value

    def area(self):
        """ calcul of size ** 2"""
        return self.__size * self.__size

    def my_print(self):
        """ print area of # with a defined position
        position[0] : value left, print spaces
        position[1] : value up, print line return
        __size : __size * __size define area of square
        """
        if self.__size == 0:
            print()
        else:
            for _ in range(self.__position[1]):
                print()
            for i in range(self.__size):
                print(" " * self.__position[0] + "#" * self.__size)
