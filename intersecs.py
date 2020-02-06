arr1 = [2,3,4]
arr2 = [4,5,6]
for i in range(len(arr1)):
    for j in range(len(arr2)):
        if(arr1[i]==arr2[j]):
            print( arr2[j])
