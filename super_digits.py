def super_digits(num):
    sums=0
    pows = 0
    for nub in range(1,num//10**pows):
        sums = sums+nub
        pows = pows+1
        return sums+1


if __name__ == "__main__":
    print(super_digits(9875))
