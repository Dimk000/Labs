from ModuleAmounts import amount_of_initials, randomize_values
from ModuleWindowSMA import SMA, size_of_window
from ModuleGraph import make_graphs


def operations():
    print("Введите количество вводимых значений (Не менее 25)")
    amounts = amount_of_initials()
    print("Введите окно")
    window = size_of_window()
    print("Введите значения")
    initials = randomize_values(amounts)
    sma_values = SMA(initials, window)
    make_graphs(initials, sma_values)


if __name__ == "__main__":
    operations()
