from ModuleInput import input_and_check_number
from ModuleWarning import true_number_warning


def operations(): #Основная реализация программы
    correct = 0
    while correct == 0: #Ограничение программы до корректного ввода числа
        print('Введите число, для вычисления корня')
        number = input_and_check_number()
        if true_number_warning(number) == 0:
            correct = 1
    primary_root = 0.00000001
    root = 0
    while primary_root != root: #Реализация итерационной формулы Герона
        root = primary_root
        primary_root = (primary_root+number/primary_root)/2
    print("Корень числа ", root)


if __name__ == "__main__":
    operations()