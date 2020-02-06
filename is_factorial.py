def fac(n):
    if n==0:
        return 1
    else:
        return n*fac(n-1)

def is_fac(x):
    counts=0
    div=1
    while x > 1:
        if x%div==0:
            x=x//div
            div=div+1
            counts=counts+1
        else:
            return False
    if counts==div-1:
        return True
    else:
        return False

                   
            
        
        
