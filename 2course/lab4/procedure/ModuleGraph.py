import numpy as np
from matplotlib import pyplot as plt


def make_graphs(initials, sma_values): #Создание графиков: Изначальные значения и после алгоритма SMA
    x_value_initials = np.linspace(0, 1, len(initials))
    x_value_sma = np.linspace(0, 1, len(sma_values))
    plt.plot(x_value_initials, initials, label='Изначальные значения')
    plt.plot(x_value_sma, sma_values, label='SMA')
    plt.legend()
    plt.show()