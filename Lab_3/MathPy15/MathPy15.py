import math
from matplotlib import pyplot as plt

print("Запустить программу - 1, выйти - 0")
enter = int(input())

while enter == 1:
    a = float(input("Введите значение а: "))
    x_from = float(input("Введите значение x от: "))
    x_to = float(input("До: "))
    step_value = float(input("Размер шага: "))
    difference = float(input("Разница между функциями: "))
    print("Вычислить функцию G - 1")
    print("Вычислить функцию F - 2")
    print("Вычислить функцию Y - 3")
    b = int(input("Выберите функцию: "))
    x_values = []
    y_values = []

    if b == 1:
        while x_from < x_to:
            x = x_from
            if 15*a**2+29*a*x+12*x**2 >= -0.00001 and 15*a**2+29*a*x+12*x**2 <= 0.00001:
                print("Входные данные не подлежат области определения функции")
            else:
                G = (4 * (-18 * a ** 2 + 3 * a * x + 10 * x ** 2)) / (15 * a ** 2 + 29 * a * x + 12 * x ** 2)
                print("G = ", G)
                x_values.append(x)
                y_values.append(G)
            x_from += step_value
        plt.title('График G')
    elif b == 2:
        while x_from < x_to:
            x = x_from
            if math.cos(5*a**2+14*a*x-3*x**2) >= -0.00001 and math.cos(5*a**2+14*a*x-3*x**2) <= 0.00001:
                print("Входные данные не подлежат области определения функции")
            else:
                F = 1 / (math.cos(5 * a ** 2 + 14 * a * x - 3 * x ** 2))
                print("F = ", F)
                x_values.append(x)
                y_values.append(F)
            x_from += step_value
        plt.title('График F')
    elif b == 3:
        while x_from < x_to:
            x = x_from
            if (9 * a ** 2 + 42 * a * x + 40 * x ** 2 + 1) <= 1:
                print("Входные данные не подлежат области определения функции")
            else:
                Y = math.acosh(9 * a ** 2 + 42 * a * x + 40 * x ** 2 + 1)
                print("Y = ", Y)
                x_values.append(x)
                y_values.append(Y)
            Y1 = math.acosh(9*a**2+42*a*(x+step_value)+40*(x+step_value)**2+1)
            if Y1 - Y < difference:
                while Y1 - Y < difference:
                    step_value *= 2
                    Y1 = math.acosh(9 * a ** 2 + 42 * a * (x + step_value) + 40 * (x + step_value) ** 2 + 1)
            x_from += step_value
        plt.title('График Y')
    else:
        print("Ошибка")
        break
    plt.plot(x_values, y_values, 'bo-')
    plt.grid(True)
    plt.xlabel('X')
    plt.ylabel('Y')
    plt.show()

    print("Запустить программу - 1, выйти - 0")
    enter = int(input())