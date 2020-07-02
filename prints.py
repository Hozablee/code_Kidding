def prints(n):
    if n < 10:
        n = n+1
        print(n)
        prints(n)

if __name__ == "__main__":
    prints(0)
