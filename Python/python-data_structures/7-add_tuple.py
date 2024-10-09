#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    # Extend tuples to at least 2 elements, filling with 0s if necessary
    NEW_A = tuple_a + (0, 0)
    NEW_B = tuple_b + (0, 0)
    NEW_TUPLE = (NEW_A[0] + NEW_B[0], NEW_A[1] + NEW_B[1])

    return NEW_TUPLE
