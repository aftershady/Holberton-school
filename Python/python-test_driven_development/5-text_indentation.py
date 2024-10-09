#!/usr/bin/python3
"""
    this module apply indentation to a string

    variable:
    text - string with no indentation
    ponc_tuple - tuple for detection of pontuation
    current_line - build of line before print
"""


def text_indentation(text):
    """ add indentation to text """
    if not isinstance(text, str):
        raise TypeError("text must be a string")

    ponc_tuple = ('.', '?', ':')
    current_line = ""

    for char in text:
        current_line += char
        if char in ponc_tuple:
            print(current_line.strip())
            print()
            print()
            current_line = ""

    if current_line:
        print(current_line.strip(), end="")
