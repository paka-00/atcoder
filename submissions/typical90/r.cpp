#include<iostream>
#include <complex>
#include <cmath>

using namespace std;

int main(){
  long double t,l,x,y,q;
  cin>>t>>l>>x>>y>>q;
  int i,e;
  long double y1,z1;
  long double pi=3.141592653589793;
  for(i=0;i<q;i++){
    cin>>e;
    y1=-l/2*sin(2.0*e*pi/t);
    z1=l/2*(1-cos(2.0*e*pi/t));
    long double a=sqrt(pow(x,2)+pow(y1-y,2));
    long double b= z1;
    printf("%.12Lf\n",180.0L/pi*atan2(b,a));
  }
}
