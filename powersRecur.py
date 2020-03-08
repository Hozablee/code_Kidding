def power(b,n):
    if n == 0:
        return 1
    else:
        return n*power(b,n-1)
