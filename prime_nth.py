import math
def nth_prime(p):
    start = 2
    counts = 0
    while True:
        if all([start%i for i in range(2,1+int(math.sqrt(start)))]) != 0:
            counts = counts+1
            if p == counts:
                return start
        start=start+1
            
