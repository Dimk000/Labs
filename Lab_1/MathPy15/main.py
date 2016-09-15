import math

print("Введите значение a")
a = float(input())
print("Введите значение x")
x = float(input())
G = (4*(-18*a**2+3*a*x+10*x**2))/(15*a**2+29*a*x+12*x**2)
F = 1/(math.cos(5*a**2+14*a*x-3*x**2))
Y = math.acos(9*a**2+42*a*x+40*x**2+1)
print("G = ", G)
print("F = ", F)
print("Y = ", Y)