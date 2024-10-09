#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    new_matrix = []
    for row in matrix:
        new_row = []
        for value in row:
            if isinstance(value, (int, float)):
                new_row.append(value ** 2)
            else:
                new_row.append(value)
        new_matrix.append(new_row)
    return new_matrix
