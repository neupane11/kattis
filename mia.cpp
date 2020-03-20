#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int s0,s1,r0,r1;
    
    while(true)
    {
        cin>>s0>>s1>>r0>>r1;
        if(s0==0&&s1==0&&r0==0&&r1==0)
        break;
        if(s0==0||s1==0||r0==0||r1==0)
        break;
        if(s1>s0)
        swap(s0,s1);
        cout << s0 << " " << s1 << endl;
        if(r1>r0)
        swap(r0,r1);
        cout << r0 << " " << r1 << endl;

        int i=s1*10+s0;
        //cout<<i;
        int j=r1*10+r0;
        //cout<<j;
        if(s0==r0&&s1==r1)
        {
            cout<<"Tie."<<endl;
        }
        else if(s0==2&&s1==1)
        {
            cout<<"Player 1 wins."<<endl;
        }
        else if(r0==2&&r1==1)
        {
            cout<<"Player 2 wins."<<endl;
        }
        else if(s0==s1)
        {
            if(r0==r1)
            {
                if(s0>r0)
                {
                    cout<<"Player 1 wins."<<endl;
                }
                else{
                    cout<<"Player 2 wins."<<endl;
                }

            }else{
                cout<<"Player 1 wins."<<endl;
            }   
        }
        else if(r0==r1)
        {
            cout<<"Player 2 wins."<<endl;
        }
        else{
            if(s1<s0)
        swap(s0,s1);
        cout << s0 << " " << s1 << endl;
        if(r1<r0)
        swap(r0,r1);
        cout << r0 << " " << r1 << endl;

        int i=s1*10+s0;
        cout<<i;
        int j=r1*10+r0;
        cout<<j;
            if(i>j)
            {
                cout<<"Player 1 wins."<<endl;
            }
            
            else {
                cout<<"Player 2 wins."<<endl;
            }
        }    
    }
    return 0;
}  