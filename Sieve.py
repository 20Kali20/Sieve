from math import *
ran = int(input('Enter number: '))

numbers = {x: x for x in range(2, ran + 1)}
eres = []
for i in range(2, int(sqrt(ran))+1):
    if numbers[i] == i:
        j = i**2
        while (j < ran + 1):
            numbers[j] = i
            j += i   
for y in range(2, ran + 1):
    if numbers[y] == y:
        eres.append(str(y))
print(','.join(eres))