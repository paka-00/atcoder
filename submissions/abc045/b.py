Sa=str(input())
Sb=str(input())
Sc=str(input())

A=[x for x in Sa]
B=[x for x in Sb]
C=[x for x in Sc]
turn='a'
while(1):
    if(turn=='a'):
        if(len(A)==0):
            print('A')
            break
        turn=A[0]
        A.pop(0)
        
    if(turn =='b'):
        if(len(B)==0):
            print('B')
            break
        turn=B[0]
        B.pop(0)
        
    if(turn=='c'):
        if(len(C)==0):
            print('C')
            break
        turn=C[0]
        C.pop(0)
