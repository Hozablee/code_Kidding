data = input()
if len(data)%2==0:
    first = data[:int(len(data)//2)]
    second = data[int(len(data)-1):int((len(data)/2)-1):-1]
else:
    first = data[:int(len(data)//2)]
    second = data[int(len(data)-1):int(len(data)/2):-1]
    if first==second:
        print('true')
    else:
        print('false')
