N = int(input())
# �O���b�h��ǂݍ����#�̈ʒu�̏W����Ԃ�
def read():
  S = set()
  for y in range(N):
    l = input()
    for x in range(N):
      if l[x]=="#":
        S.add((x, y))
  return S
S = read()
T = read()
for _ in range(4):
  # �ł����i��������΂��̂����ōł���j��#��(0, 0)�̈ʒu�ɂ���
  mx, my = min(S)
  S = set((x-mx, y-my) for x, y in S)
  mx, my = min(T)
  T = set((x-mx, y-my) for x, y in T)
  if S==T:
    print("Yes")
    exit(0)
  # T����]
  T = set((y, -x) for x, y in T)
print("No")
