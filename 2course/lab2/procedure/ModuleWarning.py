def true_number_warning(x): #Проверка на недопустимость ввода числа
    if x <= 0:
        print("Число не может быть меньше или равно 0")
        warning = 1
    else:
        warning = 0
    return warning