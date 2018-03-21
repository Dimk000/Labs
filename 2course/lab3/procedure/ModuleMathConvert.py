def converter(x): #Конвертация полученных значений в числа одинарной точности
    for i in range(len(x)):
        x[i] = float(x[i])
    return x

def math_operation(x): #Нахождение суммы членов ряда
    result=[]
    for i in range(len(x)):
        result.append(1/x[i]*3)
    print(sum(result))