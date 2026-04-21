# -*- coding: utf-8 -*-


def promedio(numbers):
    return float(((numbers[0] * 3.5) + (numbers[1] * 7.5)) / 11)


numbers = []

numbers.append(float(input()))
numbers.append(float(input()))

print(f"MEDIA = {promedio(numbers):.5f}")
