def math_operation(m_func, first_opperand, second_opperand): #Математический подсчет с учетом введенных операндов и знака
    if m_func == '+':
        result = first_opperand + second_opperand
    if m_func == '-':
        result = first_opperand - second_opperand
    if m_func == '*':
        result = first_opperand * second_opperand
    if m_func == '/':
        try:
            result = first_opperand / second_opperand
        except ArithmeticError:
            print("Невозможно деление на ноль")
            result = 0
    return result