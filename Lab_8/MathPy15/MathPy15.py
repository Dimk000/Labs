from math import sqrt
import random

x = []
y = []


def generator_array():
    for i in range(100):
        x.append(random.uniform(-5, 5))
        y.append(random.uniform(-5, 5))


def belong_or_not(all_x, all_y, rad, main_x, main_y):
    distance = sqrt((all_x - main_x) ** 2 + (all_y - main_y) ** 2)
    if distance <= rad:
        return 1
    else:
        return 0


def chosen_point():
    choice = random.randint(0, 99)
    return choice


def amount_of_points(rad, chosen):
    counter = 0
    generator_array()
    for i in range(100):
        if belong_or_not(x[i], y[i], rad, x[chosen], y[chosen]) == 1:
            counter += 1
    return counter

radius = float(input("Введите радиус окрестности: "))
choice = chosen_point()
amount = amount_of_points(radius, choice)
print("Кол-во точек в окрестности: ", amount)
