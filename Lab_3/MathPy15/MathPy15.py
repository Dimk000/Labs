import math
from matplotlib import pyplot as plt

print("Запустить программу - 1, выйти - 0")
enter = int(input())

if (enter == 1):
    a = float(input("Введите значение а: "))
    x = float(input("Введите значение x: "))
    steps = float(input("Количество шагов: "))
    print("Вычислить функцию G - 1")
    print("Вычислить функцию F - 2")
    print("Вычислить функцию Y - 3")
    b = int(input("Выберите функцию: "))
    p = x+(steps*1)
    x_values = []
    y_values = []

    while x < p:
        x += 1
        if b == 1:
            if ((15*a**2+29*a*x+12*x**2) >= -0.00001 and (15*a**2+29*a*x+12*x**2) <= 0.00001):
                print("Входные данные не подлежат области определения функции")
            else:
                G = (4 * (-18 * a ** 2 + 3 * a * x + 10 * x ** 2)) / (15 * a ** 2 + 29 * a * x + 12 * x ** 2)
                print("G = ", G)
                x_values.append(x)
                y_values.append(G)
                plt.title('График G')
        elif b == 2:
            if (math.cos(5*a**2+14*a*x-3*x**2) >= -0.00001 and math.cos(5*a**2+14*a*x-3*x**2) <= 0.00001):
                print("Входные данные не подлежат области определения функции")
            else:
                F = 1 / (math.cos(5 * a ** 2 + 14 * a * x - 3 * x ** 2))
                print("F = ", F)
                x_values.append(x)
                y_values.append(F)
                plt.title('График F')
        elif b == 3:
            if (9 * a ** 2 + 42 * a * x + 40 * x ** 2 + 1) <= 1:
                print("Входные данные не подлежат области определения функции")
            else:
                Y = math.acosh(9 * a ** 2 + 42 * a * x + 40 * x ** 2 + 1)
                print("Y = ", Y)
                x_values.append(x)
                y_values.append(Y)
                plt.title('График Y')
        else:
            print("Ошибка")
            break
    plt.plot(x_values, y_values)
    plt.grid(True)
    plt.xlabel('X')
    plt.ylabel('Y')
    plt.show()