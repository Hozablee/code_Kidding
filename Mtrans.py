n,m = [int(x) for x in input().split()]
mat = [ [int(i) for i in input().split()] for j in range(n) ]
trans = [[mat[j][i] for j in range(len(mat)) ] for i in range(len(mat[0])) ]
print ("-----------------------Transpose_Matrix-----------------------------")
print (trans)
