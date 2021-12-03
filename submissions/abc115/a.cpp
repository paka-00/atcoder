#include<iostream>
using namespace std;
int D;
//---------------------------------------------------------------------------------------------------
int main(){
    cin >> D;
    printf("Christmas");
    int c = 25 - D;
    for(int i=0;i<c;i++) printf(" Eve");
    printf("\n");
}
