import math

a = float(input("Введите значение а: "))
x = float(input("Введите значение x: "))

if (15*a**2+29*a*x+12*x**2) == 0:
    print("Входные данные не подлежат области определения функции")
else:
    print("Вычислить функцию G - 1")
    print("Вычислить функцию F - 2")
    print("Вычислить функцию Y - 3")
    b = int(input("Выберите функцию: "))
    if b == 1:
        G = (4 * (-18 * a ** 2 + 3 * a * x + 10 * x ** 2)) / (15 * a ** 2 + 29 * a * x + 12 * x ** 2)
        print("G = ", G)
    elif b == 2:
        F = 1 / (math.cos(5 * a ** 2 + 14 * a * x - 3 * x ** 2))
        print("F = ", F)
    elif b == 3:
        Y = math.acos(9 * a ** 2 + 42 * a * x + 40 * x ** 2 + 1)
        print("Y = ", Y)
    else:
        print("Ошибка")