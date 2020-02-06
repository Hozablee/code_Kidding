n = int(input())
num=0
for i in range(n,0,-1):
    for j in range(0,n-i):
        print(num,end='')
    num=num+1
    print()
