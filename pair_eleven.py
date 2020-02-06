def pair_eleven(li1):
    for i in range(len(li1)):
        for j in range(len(li1)-i):
            if li1[i]+li1[j]==11:
                print(li1[i],li1[j])
            i=i+1
        j=j+1

if __name__ == "__main__":
    pair_eleven([9,8,0,2,3])
            
            
