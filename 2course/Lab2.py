def input_and_check_number():
    try:
        x = float(input())
        return x
    except ValueError:
        print("Неправильный формат введенного числа\nВведите число заново")
        return input_and_check_number()


def true_number_warning(x):
    if x <= 0:
        print("Число не может быть меньше или равно 0")
        warning = 1
    else:
        warning = 0
    return warning


def operations():
    correct = 0
    while correct == 0:
        print('Введите число, для вычисления корня')
        number = input_and_check_number()
        if true_number_warning(number) == 0:
            correct = 1
    primary_root = 0.00000001
    root = 0
    while primary_root != root:
        root = primary_root
        primary_root = (primary_root+number/primary_root)/2
    print("Корень числа ", root)


if __name__ == "__main__":
    operations()