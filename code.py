from itertools import *

cnt = 0

for n in product(sorted("КОТЕНА"), repeat=7):
    cnt += 1
    a = "".join(n)
    if a == "КОТЕНОК":
        print(a, cnt)
