#include <iostream>
using namespace std;
int v[1000],ok,i,n,n1;
int main()
{
    cin>>n;
    ok=1;
    n1=0; // No. of students that achieved a grade smaller than 8
    for(i=1;i<=n;i++){
        cin>>v[i];
        if(v[i]<5)
            ok=0;
        if(v[i]<8)
            n1++;
        }
    if(ok==1)
        cout<<"All the students passed the exam"<<endl;
        else
        cout<<"Not all students passed the exam"<<endl;
    int x=n1*100;
    cout<<float(x/n)<<" "<<"percent of students with grades smaller than 8";
    return 0;
}
