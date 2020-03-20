#include <iostream>
using namespace std;
 int sumofdigits(int n)
    {
        int sum=0;
        while(n>0)
        {sum=sum+n%10;
        n=n/10;}
        return sum;
    }
int main()
{
    int l,d,x;
    int s;
    cin>>l>>d>>x;
   
    for(int i=l;i<=d;i++)
    {
        //cout<<i;
       s=sumofdigits(i);
       //cout<<s<<endl;
       if(s==x){
           cout<<i<<endl;
           break;
       }
    }
    for(int i=d;i>=l;i--)
    {
        s=sumofdigits(i);
       //cout<<s;
       if(s==x){
           cout<<i;
           break;}
    }
    return 0;
}