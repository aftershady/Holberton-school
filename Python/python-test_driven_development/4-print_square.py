#!/usr/bin/python3
"""
    this module print a square of #

    variables:
    size - size of square in m2

"""


def print_square(size):
    """ print square of size m2 """
    if not isinstance(size, int):
        raise TypeError("size must be an integer")

    if size < 0:
        raise ValueError("size must be >= 0")

    for i in range(size):
        for j in range(size):
            print("#", end="")
        print()
