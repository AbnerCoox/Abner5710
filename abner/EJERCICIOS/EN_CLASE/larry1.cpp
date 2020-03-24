#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    float str;
    cin>>str;
    float total =0;
    float f=0;
    float pro=0;
    while(cin)
    {
            total += str;
            pro=total/12;
        cin>>str;
    }
   

    cout<<"$"<<pro<<endl;
    return 0;
}
