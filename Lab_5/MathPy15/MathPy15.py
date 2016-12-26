import math

print("Запустить программу - 1, выйти - 0")
enter = int(input())

while enter == 1:
    string_input = input("Введите значение а от: ")
    a_from = float(string_input)
    string_input = input("До: ")
    a_to = float(string_input)
    string_input = input("Введите значение x от: ")
    x_from = float(string_input)
    string_input = input("До: ")
    x_to = float(string_input)
    string_input = input("Количество шагов: ")
    steps = int(string_input)
    sample = input("Введите шаблон: ")
    x_step_value = (x_to-x_from)/steps
    a_step_value = (a_to-a_from)/steps
    print("Вычислить функцию G - 1")
    print("Вычислить функцию F - 2")
    print("Вычислить функцию Y - 3")
    b = int(input("Выберите функцию: "))
    counter = 0
    one_string = str()
    y_values = []

    if b == 1:
        while x_from < x_to:
            x = x_from
            a = a_from
            if 15*a**2+29*a*x+12*x**2 >= -0.00001 and 15*a**2+29*a*x+12*x**2 <= 0.00001:
                print("Входные данные не подлежат области определения функции")
            else:
                G = (4 * (-18 * a ** 2 + 3 * a * x + 10 * x ** 2)) / (15 * a ** 2 + 29 * a * x + 12 * x ** 2)
                y_values.append(G)
            x_from += x_step_value
            a_from += a_step_value
    elif b == 2:
        while x_from < x_to:
            x = x_from
            a = a_from
            if math.cos(5*a**2+14*a*x-3*x**2) >= -0.00001 and math.cos(5*a**2+14*a*x-3*x**2) <= 0.00001:
                print("Входные данные не подлежат области определения функции")
            else:
                F = 1 / (math.cos(5 * a ** 2 + 14 * a * x - 3 * x ** 2))
                y_values.append(F)
            x_from += x_step_value
            a_from += a_step_value
    elif b == 3:
        while x_from < x_to:
            x = x_from
            a = a_from
            if (9 * a ** 2 + 42 * a * x + 40 * x ** 2 + 1) <= 1:
                print("Входные данные не подлежат области определения функции")
            else:
                Y = math.acosh(9 * a ** 2 + 42 * a * x + 40 * x ** 2 + 1)
                y_values.append(Y)
            x_from += x_step_value
            a_from += a_step_value
    else:
        print("Ошибка")
        break
    while counter < steps:
        one_string = one_string + str(y_values[counter])
        counter += 1

    print("Запустить программу - 1, выйти - 0")
    enter = int(input())