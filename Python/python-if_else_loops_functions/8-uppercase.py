#!/usr/bin/python3
def uppercase(str):
    new_str = ""
    for char in str:
        if ord('a') <= ord(char) <= ord('z'):
            new_str += chr(ord(char) - 32)
        else:
            new_str += char
    print("{}".format(new_str))
