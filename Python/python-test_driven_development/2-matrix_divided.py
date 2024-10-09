#!/usr/bin/python3
"""
This is a module that divide a matrix

This module provides a simple function that divide a matrix
"""


def matrix_divided(matrix, div):
    """ divide a matrix """
    if not isinstance(matrix, list) or not matrix:
        raise TypeError("matrix must be a matrix (list of lists) " +
                        "of integers/floats")

    if not all(isinstance(row, list) for row in matrix):
        raise TypeError("matrix must be a matrix (list of lists) " +
                        "of integers/floats")

    if not all((isinstance(ele, int) or isinstance(ele, float))
               for row in matrix for ele in row):
        raise TypeError("matrix must be a matrix (list of lists) " +
                        "of integers/floats")

    if not all(len(row) == len(matrix[0]) for row in matrix):
        raise TypeError("Each row of the matrix must have the same size")

    if not isinstance(div, (int, float)):
        raise TypeError("div must be a number")

    if div == 0:
        raise ZeroDivisionError("division by zero")

        result = []
    for row in matrix:
        new_row = []
        for ele in row:
            new_row.append(round(ele / div, 2))
        result.append(new_row)

    return result
