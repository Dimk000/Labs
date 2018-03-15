from matplotlib import pyplot as plt
import numpy as np
from random import random


def amount_of_values():
    try:
        x = int(input())
    except:
        print("Неправильно задано число значений")
        return amount_of_values()
    if x < 25:
        print("Количество значений должно превышать 25")
        return amount_of_values()
    else:
        return x


def amount_random(size):
    array = []

    for i in range(size):
        array.append(random())

    return array

def create_initial_values(n):
    x = []
    for i in range(n):
        x.append(input_initial_values())
    return x


def input_initial_values():
    try:
        x = float(input())
    except:
        print("Неправильно введено значение")
        return input_initial_values()
    return x


def SMA(x, y):
    z = []
    for i in range(y):
        z.append(None)
    for i in range(len(x) - y):
        sum_x = x[i]
        for j in range(y - 1):
            sum_x += x[i + j]
        z.append(sum_x / y)
    # print(z)
    return z


def create_window():
    try:
        x = int(input())
    except:
        print("Неправильно введено окно")
        return create_window()
    return x


def make_graphs(initials, sma_values):
    x_value_initials = np.linspace(0, 1, len(initials))
    x_value_sma = np.linspace(0, 1, len(sma_values))
    plt.plot(x_value_initials, initials, label='Изначальные данные')
    plt.plot(x_value_sma, sma_values, label='SMA')
    plt.legend()
    plt.show()


def operations():
    print("Введите количество вводимых значений (Не менее 25)")
    amounts = amount_of_values()
    print("Введите окно")
    window = create_window()
    print("Введите значения")
    initials = amount_random(amounts)
    sma_values = SMA(initials, window)
    make_graphs(initials, sma_values)


if __name__ == "__main__":
    operations()
