import random
import time


def saxpy(n, a, x, y):
    i = int(0)
    while i < n:
        y = a*x+y
        i += 1
    return y


i = int(0)
x = []
a = random.uniform(1, 1000)
y = random.uniform(1, 1000)
while i < 100:
    x.append(random.uniform(1, 1000))
    i += 1
i = 0
file = open("/home/user/Labs/Semestr tasks/SAXPY/Py/log_float.txt", "w")
while i < 100:
    start = time.time()
    y = saxpy(i, a, x[i], y)
    end = time.time()
    file.write(str(end - start)+' '+str(y)+'\n')
    i += 1
file.close()
