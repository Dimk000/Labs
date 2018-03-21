import sys
import argparse

def createParser():
    parser = argparse.ArgumentParser() #Создание экземпляра класса
    parser.add_argument('-p', '--poly') #Добавление имен ожидаемых параметров
    namespace = parser.parse_args(sys.argv[1:]) #Разбор командной строки с помощью метода parse_args, кроме нулевого списка
    value = namespace.poly #Присваивание параметров
    separate_value = value.split(",") #Парсирование
    return separate_value