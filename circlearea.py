# date: 09/21/2019
# developer: Humphrey Shikoli
# programming language: Python
# description: program that accepts radius of a circle from user and computes area

########################################################################
# 

def areacircle(x): 
    pi = 3.14
    r = float(x)
    area = pi * r * r
    return area

print("Enter the radius of the cirle: ")
print(".............................. ")
radius = input()
print(".............................. ", "\n")
print("Area of the circle is: ", areacircle(radius))