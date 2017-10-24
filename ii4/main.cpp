#include <iostream>
using namespace std;
int x,y;
int main()
{
    cin>>x>>y;
    if(x>0&&y>0)
        cout<<"The point belongs in the first quadrant";
    if(x>0&&y<0)
        cout<<"The point belongs in the second quadrant";
    if(x<0&&y<0)
        cout<<"The point belongs in the third quadrant";
    if(x<0&&y>0)
        cout<<"The point belongs in the forth quadrant";
    return 0;
}
