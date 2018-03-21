from ModuleInput import input_and_check_opperand, input_math_function
from ModuleMath import math_operation
from ModuleWarning import input_math_function_warning


def operations(): #Проведение основных операций
    power = 1
    while power == 1: #Организовано бесконечное выполнение программы до изменения параметра
        print("Введите первый операнд")
        first_operand = input_and_check_opperand()
        correct = 0
        while correct == 0: #Допуск к дальнейшей программе, пока не будет правильно определен мат. ф-ия
            print("Введите математическую функцию: + - * /")
            math_function = input_math_function()
            if input_math_function_warning(math_function) == 0:
                correct += 1
        print("Введите второй операнд")
        second_operand = input_and_check_opperand()
        result = math_operation(math_function, first_operand, second_operand)
        print("Результат ", result)
        choice = -1
        correct = 0
        while correct == 0: #Проверка на правильность введеной команды
            while choice != 1 and choice != 0: #Выбор пользователя: запуск программы заново или выход из нее
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
