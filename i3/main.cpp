#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int v[100],Max,Min,i,n,x;
int main()
{
    cin>>n;
    Max=INT_MIN;
    Min=INT_MAX;
    for(i=1;i<=n;i++){
        cin>>v[i];
        if(v[i]<=Min)
            Min=v[i];
        if(v[i]>=Max)
            Max=v[i];
    }
    cout<<Min<<endl;
    cout<<Max;
    return 0;
}
