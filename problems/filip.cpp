#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    int rev=0;
    int rev2=0;
    while(num1!=0)
    {
        int mod=num1%10;
        rev=rev*10+mod;
        num1=num1/10;
         

    }//cout<<rev<<endl;
   
   while(num2!=0)
    {
        int mod2=num2%10;
        rev2=rev2*10+mod2;
        num2=num2/10;
         

    }//cout<<rev2<<endl;
    if(rev>rev2)
    {
        cout<<rev<<endl;
    }
    else{
        cout<<rev2<<endl;
    }
    return 0;

}