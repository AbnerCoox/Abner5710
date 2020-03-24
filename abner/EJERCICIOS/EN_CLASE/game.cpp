/******************************************************************************

Juego

Entrada: A B B A B A B B A B B A

Salida:  a a b b a a b b a b b a 

*******************************************************************************/
#include<iostream>
using namespace std;

int main(int argc, char*argv[])
{
        int i,  x=0, y=0, z=0;
        char n[12];
        if(argc!=13){
        cout<<"error"<<endl;
        return 1;}
        else{
        for (i=1;i<13;i++){
        n[i-1]=argv[i][0];
        }
        }
for(i=0;i<=11;i++){
if(z==0){
        if(n[i]=='A')
        {
                if(x==0){
                        cout<<" a";
                        x=1;
        }
                else{
                        cout<<" a";
                        x=0;
                        z=1;
        }
        }
        else if(n[i]=='B')
        {
                if(y==0){
                        y=1;
                        z=1;
                        cout<<" a";
                        }
                else{
                        y=0;
                        cout<<" b";
                        }
        }
        else{
        cout<<"error";
        }
        }
else{
        if(n[i]=='A')
        {
                if(x==0){
                        x=1;
                        cout<<" a";
                        }
                else{
                        x=0;
                        z=0;
                        cout<<" b";
                        }
        }
        else if(n[i]=='B')
        {
        if(y==0){
                y=1;
                z=0;
                cout<<" b";
                }
        else{
                y=0;
                cout<<" b";
                }
        }
}
}
return 0;
}

