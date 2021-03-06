import math

print("Запустить программу - 1, выйти - 0")
enter = int(input())

while enter == 1:
    a = float(input("Введите значение а: "))
    x_from = float(input("Введите значение x от: "))
    x_to = float(input("До: "))
    steps = int(input("Количество шагов: "))
    step_value = (x_to-x_from)/steps
    print("Вычислить функцию G - 1")
    print("Вычислить функцию F - 2")
    print("Вычислить функцию Y - 3")
    b = int(input("Выберите функцию: "))
    counter = 0
    x_values = []
    y_values = []

    if b == 1:
        while x_from < x_to:
            x = x_from
            if 15*a**2+29*a*x+12*x**2 >= -0.00001 and 15*a**2+29*a*x+12*x**2 <= 0.00001:
                print("Входные данные не подлежат области определения функции")
            else:
                G = (4 * (-18 * a ** 2 + 3 * a * x + 10 * x ** 2)) / (15 * a ** 2 + 29 * a * x + 12 * x ** 2)
                x_values.append(x)
                y_values.append(G)
            x_from += step_value
        min_array = y_values[counter]
        max_array = y_values[counter]
        while counter < steps:
            if y_values[counter] < min_array:
                min_array = y_values[counter]
            if y_values[counter] > max_array:
                max_array = y_values[counter]
            counter += 1
    elif b == 2:
        while x_from < x_to:
            x = x_from
            if math.cos(5*a**2+14*a*x-3*x**2) >= -0.00001 and math.cos(5*a**2+14*a*x-3*x**2) <= 0.00001:
                print("Входные данные не подлежат области определения функции")
            else:
                F = 1 / (math.cos(5 * a ** 2 + 14 * a * x - 3 * x ** 2))
                x_values.append(x)
                y_values.append(F)
            x_from += step_value
        min_array = y_values[counter]
        max_array = y_values[counter]
        while counter < steps:
            if y_values[counter] < min_array:
                min_array = y_values[counter]
            if y_values[counter] > max_array:
                max_array = y_values[counter]
            counter += 1
    elif b == 3:
        while x_from < x_to:
            x = x_from
            if (9 * a ** 2 + 42 * a * x + 40 * x ** 2 + 1) <= 1:
                print("Входные данные не подлежат области определения функции")
            else:
                Y = math.acosh(9 * a ** 2 + 42 * a * x + 40 * x ** 2 + 1)
                x_values.append(x)
                y_values.append(Y)
            x_from += step_value
        min_array = y_values[counter]
        max_array = y_values[counter]
        while counter < steps:
            if y_values[counter] < min_array:
                min_array = y_values[counter]
            if y_values[counter] > max_array:
                max_array = y_values[counter]
            counter += 1
    else:
        print("Ошибка")
        break
    print("________________")
    print("|   X   |   Y   |")
    print("----------------")
    counter = 0
    while counter < steps:
        print("|{}|{}|".format(x_values[counter], y_values[counter]))
        counter += 1
    print("Наибольший элемент массива = ", max_array)
    print("Наименьший элемент массива = ", min_array)

    print("Запустить программу - 1, выйти - 0")
    enter = int(input())