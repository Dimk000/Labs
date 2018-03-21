def input_and_check_number(): #Ввод и проверка введенного числа на формат
    try:
        x = float(input())
        return x
    except ValueError:
        print("Неправильный формат введенного числа\nВведите число заново")
        return input_and_check_number()