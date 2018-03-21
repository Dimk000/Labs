def SMA(initials, window): #Реализация алгоритма SMA
    sma_result = []
    for i in range(window):
        sma_result.append(None)
    for i in range(len(initials) - window):
        sum_x = initials[i]
        for j in range(window - 1):
            sum_x += initials[i + j]
        sma_result.append(sum_x / window)
    return sma_result


def size_of_window(): #Создание окна с введенным размером
    try:
        window = int(input())
    except:
        print("Неправильно задано окно")
        return size_of_window()
    return window