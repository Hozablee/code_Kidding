def intersecs(lis1,lis2):
    first=0
    second = len(lis2)-1
    lis = []
    while(first < len(lis1) or second > 0):
        if lis1[first] == lis2[second]:
            lis.append(lis1[second])
            first = first+1
        else:
            second = second-1
        return lis
    
