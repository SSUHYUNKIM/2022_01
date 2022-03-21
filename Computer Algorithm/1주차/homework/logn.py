from math import *

# for sqrt(n)
n = 1
while sqrt(n) <= 1000000:
    n += 1

print("sqrt(n) :", n - 1)

# for nlg(n)
n = 1
while n * log2(n) <= 1000000:
    n += 1
    
print("nlg(n):", n - 1)

# for nlog(n)
n = 1
while n * log10(n) <= 1000000:
    n += 1
    
print("nlog(n):", n - 1)

# for n * n
n = 1
while n * n <= 1000000:
    n += 1
    
print("n * n:", n - 1)

# for n * n * n
n = 1
while n * n * n <= 1000000:
    n += 1
    
print("n * n * n:", n - 1)

# for 2 ** n
n = 1
while 2 ** n <= 1000000:
    n += 1

print("2**n:", n - 1)

# for n!
n = 1
while factorial(n) <= 1000000:
    n += 1

print("n!:", n - 1)