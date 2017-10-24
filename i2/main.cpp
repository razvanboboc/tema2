#include <iostream>
using namespace std;
int h1,h2,m1,m2,s1,s2,sec1,sec2,finaltime;
int main()
{
    cin>>h1>>m1>>s1>>h2>>m2>>s2;
    sec1=h1*3600+m1*60+s1; // first time in seconds
    sec2=h2*3600+m2*60+s2; // second time in seconds
    finaltime=sec2-sec1;
    int h3=finaltime/3600;
    int m3=(finaltime-h3*3600)/60;
    int s3=finaltime-h3*3600-m3*60;
    cout <<h3<<" "<<"hours"<<" "<<m3<<" "<<"minutes"<<" "<<s3<<" "<<"seconds";
    return 0;
}
