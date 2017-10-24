#include <iostream>
#include <math.h>
using namespace std;
int a,b,c,x1,x2,delta;
int main()
{
    cin>>a>>b>>c;
    delta=b*b-4*a*c;
    if(delta<0){
        cout<<"The equation has no real solutions";
        }
    if(delta>=0){
        x1=(-b+sqrt(delta))/2*a;
        x2=(-b-sqrt(delta))/2*a;
        cout <<x1<< " " <<x2;
    }
    return 0;
}
