# -*- coding: utf-8 -*-
# date: 09/17/2019
# developer: Humphrey Shikoli
# programming language: Python
# description: program that accepts a sequence of comma separated numbers from
# user and generate a list and tuple with those numbers

numlist = []
numtuple = ()

print("...LIST AND TUPLE...")
print(".....................")
print("Enter comma separated numbers")
numbers = input()
numlist = list(numbers.split(","))
numtuple = tuple(numbers.split(","))
print("\n")
print("List: ", numlist)
print("Tuple: ", numtuple)