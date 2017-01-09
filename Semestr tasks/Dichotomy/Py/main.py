from math import fabs

def F(x):
    return x*x*x-3*x+1
c = float()
a = float(input("Введите 1-ую границу интервала: "))
b = float(input("Введите 2-ую границу интервала: "))
eps = float(input("Введите точность: "))
while fabs(a - b) >= eps:
    c = (a + b) / 2
    if F(c) * F(a) < 0:
        a = c
    else:
        b = c
print('Минимум функции на заданном интервале = ', c)