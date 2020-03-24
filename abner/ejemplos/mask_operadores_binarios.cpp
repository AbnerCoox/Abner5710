/*#include<iostream>

using namespace std;

int main(){
    
    int dato=10;
    int mask=1;
    
    if((dato &mask)==0)
        cout<<"Par";
    else
        cout<<"Impar";
    
    return 0;
}

#include<iostream>
#define BIT1 1
#define BIT2 2
#define BIT3 4
#define BIT4 8

using namespace std;

int main(){
    
    int dato=BIT1|BIT3;
    int mask=1;
    int res = dato & 1;
    
    if((dato & mask)==0)
        cout<<"Par";
    else
        cout<<"Impar";
    
    return 0;
}*/



#include<iostream>

using namespace std;
void getRed(int ip[], int mask[])
{
    for(int i=0; i<4; i++){
        cout<<(ip[i]&mask[i])<<".";
    }
    cout<<endl;
    
}

int main(int argc, char *argv[])
{
    
    int ip[4];
    int mask[4];
    
    if(argc==9)
    
    {
        ip[0]=stoi(argv[1]));
        ip[1]=stoi(argv[2]));
        ip[2]=stoi(argv[3]));
        ip[3]=stoi(argv[4]));
        
        mask[0]=stoi(argv[5]));
        mask[1]=stoi(argv[6]));
        mask[2]=stoi(argv[7]));
        mask[3]=stoi(argv[8]));
        
    }
       return 0;
}
