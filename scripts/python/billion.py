import time

billion = 1000000000

start_time = time.time()

for i in range(billion):
    pass

end_time = time.time()

elapsed_time = end_time - start_time
print(f"{elapsed_time:.3f} segundos")
