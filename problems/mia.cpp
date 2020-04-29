#include <iostream>
#include <algorithm>
#include <cassert>
#include <cstring>
using namespace std;

string mia(int s0,int s1,int r0, int r1)
{
   
    string t="Tie.";
    string p1="Player 1 wins.";
    string p2="Player 2 wins.";
   
    int i=s1*10+s0;
        //cout<<i;
    int j=r1*10+r0;
        //cout<<j;
    if(s1>s0)
        swap(s0,s1);
        //cout << s0 << " " << s1 << endl;
        if(r1>r0)
        swap(r0,r1);
        //cout << r0 << " " << r1 << endl;
        if(s0==r0&&s1==r1)
        {
            return t;
        }
        else if(s0==2&&s1==1)
        {
            return p1;
        }
        else if(r0==2&&r1==1)
        {
           return p2;
        }
        else if(s0==s1)
        {
            if(r0==r1)
            {
                if(s0>r0)
                {
                   return p1;
                }
                else{
                    return p2;
                }

            }else{
                return p1;
            }   
        }
        else if(r0==r1)
        {
            return p2;
        }
        else{
            if(s1<s0)
        swap(s0,s1);
        //cout << s0 << " " << s1 << endl;
        if(r1<r0)
        swap(r0,r1);
        //cout << r0 << " " << r1 << endl;

        int i=s1*10+s0;
        //cout<<i;
        int j=r1*10+r0;
        //cout<<j;
            if(i>j)
            {
                return p1;
            }
            
            else {
                return p2;
            }
        }    
}
void getdata()
{
    while(true)
    {
        int s0, s1, r0, r1;
        cin>>s0>>s1>>r0>>r1;
        if(s0==0&&s1==0&&r0==0&&r1==0)
        break;
        if(s0==0||s1==0||r0==0||r1==0)
        break;
        cout<<mia(s0,s1,r0,r1);
    }
}  
void test()
{
    assert(mia(1, 2 ,3 ,4)=="Player 1 wins.");
    assert(mia(5,4,6,2)=="Player 2 wins.");
    assert(mia(3,9,6,4)=="Player 1 wins.");
    assert(mia(2,1,1,2)=="Tie.");
    cout<<"all test cases passed";
}
int main(int argc,char*argv[])
{
    if (argc > 1 && (strncmp(argv[1], "test", 4) == 0))
        test();
    else{
        getdata();
    }
    return 0;
}