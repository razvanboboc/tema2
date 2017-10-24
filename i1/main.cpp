#include <iostream>
using namespace std;
int rad;
int main()
{
    cin>>rad;
    int t=rad*180;
    cout<<t<<" "<<"degrees"<<endl;
    int x=t*60;
    cout<<x<<" "<<"minutes"<<endl;
    int y=x*60;
    cout<<y<<" "<<"seconds"<<endl;
    return 0;
}
