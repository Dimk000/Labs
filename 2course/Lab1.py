def input_and_check_opperand():
    try:
        x = float(input())
        return x
    except ValueError:
        print("Неправильный формат операнда, введите заново")
        return input_and_check_opperand()


def input_math_function():
    x = str(input())
    return x


def input_math_function_warning(x):
    if x == '+' or x == '-' or x == '*' or x == '/':
        warning = 0
    else:
        print("Неправильно введена математическая функция")
        warning = 1
    return warning


def math_operation(x, a, b):
    if x == '+':
        a = a + b
    if x == '-':
        a = a - b
    if x == '*':
        a = a * b
    if x == '/':
        try:
            a = a / b
        except ArithmeticError:
            print("Невозможно деление на ноль")
            a = 0
    return a


def operations():
    power = 1
    while power == 1:
        print("Введите первый операнд")
        first_operand = input_and_check_opperand()
        correct = 0
        while correct == 0:
            print("Введите математическую функцию: + - * /")
            math_function = input_math_function()
            if input_math_function_warning(math_function) == 0:
                correct += 1
        print("Введите второй операнд")
        second_operand = input_and_check_opperand()
        first_operand = math_operation(math_function, first_operand, second_operand)
        print("Результат ", first_operand)
        choice = -1
        correct = 0
        while correct == 0:
            while choice != 1 and choice != 0:
                print("1 - для новых расчетов, 0 - для выхода из программы")
                try:
                    choice = int(input())
                except ValueError:
                    print("Неправильный формат команды")
                    break
                if choice == 1:
                    correct = 1
                elif choice == 0:
                    power = 0
                    correct = 1
                else:
                    print("Неправильно выбрана команда, выберите заново")


if __name__ == "__main__":
    operations()
