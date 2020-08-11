num = input()
num2 = input()
a = num2.split()
c = int(a[0])

for i in range(1,len(a)-1):
    if a[i] == '+':
        c = c - int(a[i+1])
    elif a[i] == '-':
        c = c - int(a[i+1])
print(c)


          

