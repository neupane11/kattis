#include <iostream>
using namespace std;
int main()
{
    string str;
    int count=0;
    cin>>str;
    //cout<<str.size();
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='s'&&str[i+1]=='s')
        {
            count++;
        }
    }//cout<<count;
    if(count>0)
    {
        cout<<"hiss";
    }else
    {
        cout<<"no hiss";
    }
    
    return 0;
}