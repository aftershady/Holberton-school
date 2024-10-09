#!/usr/bin/python3
def safe_print_division(a, b):
    result = 0
    if b < a:
        try:
            result = a/b
            print("Inside result: {}".format(result))
        except ZeroDivisionError:
            print("Inside result: None")
            return None
        finally:
            return result
    else:
        print("Inside result: None")
        return None
