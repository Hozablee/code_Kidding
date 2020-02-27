def is_prime(num):
    div=2
    counts = 1
    while div<=num:
        if num%div==0:
            counts = counts+1
        div=div+1
    if counts == 2:
        return True
    else:
        return False
def print_p(ranges):
    for primes in range(1,ranges):
        if is_prime(primes) == True:
            print(primes,end=" ")
        
