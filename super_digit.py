def super_digit(n):
    if n<10:
        return n
    else:
        return super_digit( (n//10)+(n%10) )

if __name__=="__main__":
    print (super_digit(1009))