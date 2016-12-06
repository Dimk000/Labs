number = float(input("Введите число: "))
root = number
while root*root != number:
    root = (root + (number/root))/2
print("Корень равен: ", root)