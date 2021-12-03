import numpy as np
N = int(input())
x = list(map(int, input().split()))
dp = np.zeros(N)
dp[1] = abs(x[1]-x[0])
for i in range(2,N):
  tmp1 = dp[i-1]+abs(x[i]-x[i-1])
  tmp2 = dp[i-2]+abs(x[i]-x[i-2])
  dp[i] = min(tmp1,tmp2)
print(int(dp[N-1]))
