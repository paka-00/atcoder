h=int(input())
s=[]
for i in range(h):
  c=list(map(int, input().split())) 
  s.append(c)
arr = list(map(list, set(map(tuple, s))))
print(len(arr))
