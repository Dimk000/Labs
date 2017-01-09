import numpy as np
import random
import time
A = np.zeros((100, 100))
B = np.zeros((100, 100))
C = np.zeros((100, 100))
i = int(0)
j = int(0)
k = int(0)
N = int(3)
file = open("/home/user/Labs/Semestr tasks/Matrix/Py/result_float.txt", "w")
for N in range(100):
    for i in range(N):
        for j in range(N):
            A[i][j] = random.uniform(1, 10)
            B[i][j] = random.uniform(1, 10)
    i = int(0)
    j = int(0)
    start = time.time()
    for i in range(N):
        for j in range(N):
            C[i][j] = 0
            for k in range(N):
                C[i][j] += A[i][k] * B[k][j]
    end = time.time()
    file.write(str(end - start)+'\n')
