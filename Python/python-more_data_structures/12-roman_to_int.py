#!/usr/bin/python3
def roman_to_int(roman_string):
    if not isinstance(roman_string, str) or roman_string is None:
        return 0

    roman_values = {
        'I': 1, 'V': 5, 'X': 10, 'L': 50,
        'C': 100, 'D': 500, 'M': 1000
    }

    result = 0
    prev_value = 0

    for char in reversed(roman_string):
        # handle if string is not roman numbers
        if char not in roman_values:
            return 0
        # check if previous > actual for IV cases
        if roman_values[char] >= prev_value:
            result += roman_values[char]
        else:
            result -= roman_values[char]
        prev_value = roman_values[char]

    return result
