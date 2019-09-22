# date: 09/21/2019
# developer: Humphrey Shikoli
# programming language: Python
# description: program that accepts user's first & last name & prints 'em in reverse order with a space between them

########################################################################
#

def reverseorder(x, y):
    fname = x
    lname = y
    
    print(lname +" " +fname)
    return ''
    
print(".... REVERSE ORDER PROGRAM....")
print("..............................")
print("Enter user's first name")
firstname = input()
print("..............................")
print("Enter user's last name")
lastname = input()
print("..............................", "\n")
print("Input Printed In Reverse Order")
print("..............................","\n")
print(reverseorder(firstname, lastname))