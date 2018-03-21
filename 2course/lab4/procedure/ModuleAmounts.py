from random import random

def amount_of_initials(): #Ввод количества исходных значений
    try:
        x = int(input())
    except:
        print("Неправильно задано число значений")
        return amount_of_initials()
    if x < 25:
        print("Количество значений должно превышать 25")
        return amount_of_initials()
    else:
        return x


def randomize_values(amounts): #Заполнение случайными числами
    array = []

    for i in range(amounts):
        array.append(random())

    return array


# def create_initial_values(n):
#     x = []
#     for i in range(n):
#         x.append(input_initial_values())
#     return x
#
#
# def input_initial_values():
#     try:
#         x = float(input())
#     except:
#         print("Неправильно введено значение")
#         return input_initial_values()
#     return x