#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    int gunner=a+b+c+d;
    
    int emma=e+f+g+h;
    //cout<<gunner<<" "<<emma<<endl;
    if(gunner>emma)
    {
        cout<<"Gunnar"<<endl;
    }else if(emma>gunner){
        cout<<"Emma"<<endl;
    }else{
        cout<<"Tie"<<endl;
    }
    return 0;
}