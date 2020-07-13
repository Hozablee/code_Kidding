def jump(N):
    ans=[]
    ans.append(1)
    ans.append(1)
    ans.append(1)
    ans.append(2)
    ans.append(4)
    for i in range(5,N):
      a=ans[0]+ans[1]+ans[4]
      
      ans[0] = ans[1]
      ans[1] = ans[2]
      ans[2] = ans[3]
      ans[3] = ans[4]
      ans[4] = a
    return(ans[4])
if __name__ == "_main_":
  N = int(input())
  if N < 4:
    print(1)
  elif N == 4:
    print(2)
  else:
    a = jump(N)
    print(a)
