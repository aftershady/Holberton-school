#!/usr/bin/python3
import sys

if __name__ == "__main__":
    arguments = sys.argv[1:]
    total_sum = 0
    for i in arguments:
        number = int(i)
        total_sum += number
    print(total_sum)
