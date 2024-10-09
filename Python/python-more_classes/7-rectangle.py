#!/usr/bin/python3
""" this module contain a rectangle class """


class Rectangle:
    """Rectangle class"""
    number_of_instances = 0
    print_symbol = "#"

    def __init__(self, width=0, height=0):
        """ __init__ method :

        __width: define the width of a rectangle
        __height: defin height of a rectangle
        """
        self.height = height
        self.width = width
        Rectangle.number_of_instances += 1

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
                rectangle += str(self.print_symbol)
            if i != self.__height - 1:
                rectangle += "\n"
        return rectangle

    def __repr__(self):
        """Return the string representation of the Rectangle."""
        return f"Rectangle({self.__width}, {self.__height})"

    def __del__(self):
        """ detect and return a message if deletion of element """
        Rectangle.number_of_instances -= 1
        print("Bye rectangle...")
