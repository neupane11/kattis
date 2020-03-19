#include <iostream>
using namespace std;
int main()
{
    int p,b;
    cin>>p;
    if(p==1||p==2||p==3)
    {
        b=1;
        cout<<b;
    }else{
        b=p-2;
        cout<<b;
    }
   
    
    return 0;
}