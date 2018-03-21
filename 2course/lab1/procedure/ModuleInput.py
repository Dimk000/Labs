def input_and_check_opperand(): #Ввод и проверка операнда на правильность веденного формата
    try:
        value = float(input())
        return value
    except ValueError:
        print("Неправильный формат операнда, введите заново")
        return input_and_check_opperand()


def input_math_function(): #Ввод математического знака
    m_func = str(input())
    return m_func