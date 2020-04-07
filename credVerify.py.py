# date: 4/07/2020
# developer: Humphrey Shikoli
# programming language: Python
# description: Credit card companies and banks use built-in security measures when creating the
# account numbers on credit cards to make sure the card numbers follow certain rules
# This means that there are only certain valid credit card numbers, and validity can 
# quickly be detected by using an algorithm that may involve adding up parts of the numbers
# or performing other checks. This program implements a function that determines whether or not a
# card number is valid. W​e will assume that the credit card number is a string consisting of 14
# characters and is in the format ####-####-####, including the dashes, where ‘#’ represents a
# digit between 0-9, so that there are 12 digits overall

def verify(number):
    # this function takes a single parameter called “number” and then checks the following rules:
    # 1. The first digit must be a 4.
    # 2. The fourth digit must be one greater than the fifth digit; keep in mind that these
    # are separated by a dash since the format is ####-####-####.
    # 3. The sum of all digits must be evenly divisible by 4.
    # 4. If you treat the first two digits as a two-digit number, and the seventh and eighth
    # digits as a two-digit number, their sum must be 100
    # the rules must be checked in this order, and if any of the rules are violated, the function
    # should return the violated rule number
    
    if(number[0] == '4'):
        diff = int(number[3])-int(number[5])
        numLen = len(number)
        numSum = 0
        if(diff == 1):
            for i in range(numLen):
                if(number[i] == '-'):
                    continue
                numSum = numSum + int(number[i])
            numDiv = numSum % 4
            if (numDiv == 0):
                firstTwoDigit = number[0]+number[1]
                secondTwoDigit = number[7]+number[8]
                sumOfTwoDigit = int(firstTwoDigit) + int(secondTwoDigit)
                if (sumOfTwoDigit == 100):
                    return True
                else:
                    return 4
            else:
                return 3
        else:
            return 2
    else:
        return 1
    
input = "4094-3460-2754" # change this as you test your function
output = verify(input) # invoke the method using a test input
print(output) # ​prints the output of the function