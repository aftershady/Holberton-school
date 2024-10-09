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

    def area(self):
        """ return the area of the rectangle """
        return self.__width * self.__height

    def perimeter(self):
        """ return the perimeter of the rectangle

        if one value = 0, return 0
        """
        if self.__width == 0 or self.__height == 0:
            return 0
        return 2*(self.__width + self.__height)

    def __str__(self):
        """ store the rectangle to be printed in a string

        if one value = 0, return 0

        return the rectangle string
        """
        if self.__width == 0 or self.__height == 0:
            return ""
        rectangle = ""
        for i in range(self.__height):
            for j in range(self.__width):
                rectangle += "#"
            if i != self.__height - 1:
                rectangle += "\n"
        return rectangle

    def __repr__(self):
        """return the representation vue of the
        rectangle file.name class and hex position
        """
        module = self.__class__.__module__
        name = self.__class__.__name__
        return f"<{module}.{name} object at {hex(id(self))}>"