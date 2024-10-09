#!/usr/bin/python3
""" this module contain a rectangle class """


class Rectangle:
    """Rectangle class"""

    def __init__(self, width=0, height=0):
        """ __init__ method :

        __width: define the width of a rectangle
        __height: defin height of a rectangle
        """
        self.height = height
        self.width = width

    @property
    def height(self):
        """define property height """
        return self.__height

    @height.setter
    def height(self, value):
        """store value in __height

        TypeError: if the value does not have the right type
        ValueError if the value is < than 0
        """
        if not isinstance(value, int):
            raise TypeError('height must be an integer')
        elif value < 0:
            raise ValueError('height must be >= 0')
        self.__height = value

    @property
    def width(self):
        """define property width """
        return self.__width

    @width.setter
    def width(self, value):
        """store value in width

        TypeError: if the value does not have the right type
        ValueError if the value is < than 0
        """
        if not isinstance(value, int):
            raise TypeError('width must be an integer')
        elif value < 0:
            raise ValueError('width must be >= 0')
        self.__width = value
