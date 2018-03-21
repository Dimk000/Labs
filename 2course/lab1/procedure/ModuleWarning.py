def input_math_function_warning(m_func): #Проверка на правильность введенного математического знака
    if m_func == '+' or m_func == '-' or m_func == '*' or m_func == '/':
        warning = 0
    else:
        print("Неправильно введена математическая функция")
        warning = 1
    return warning