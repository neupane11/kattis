/*
sandip neupane
kattis problem : ICPC tutorial.

algo:
1. get the data.
2. solve for the cases using different mathematical opertaions.
3. get the output.

*/

#include <iostream>
#include <cassert>
#include <cmath>
#include <cstring>

using namespace std;

string ICPC(int m, int n, int t) {
        double facto = 1;
        string a ="";
        switch(t)
    {
        case 1: for(int i=1;i<=n;i++)
        {
                facto *= i;
                if (facto > m) 
                {
                        a = "TLE";
                        break;
                }
                else 
                {
                        a = "AC";
                }
        }
                break;
                
                
        case 2: if(pow(2,n)<=m) 
                a = "AC";
                else
                a = "TLE";
                break;
        case 3: if(pow(n,4)<=m) 
                        a = "AC";
                else
                        a = "TLE";
                break;
        case 4: if(pow(n,3)<=m) 
                        a = "AC";
                else
                        a = "TLE";
                break;
        case 5: if(pow(n,2)<=m) 
                        a = "AC";
                else
                        a = "TLE";
                break;
        case 6: if(n*log2(n)<=m) 
                        a = "AC";
                else
                        a = "TLE";
                break;
        case 7: if(n<=m) 
                        a = "AC";
                else
                        a = "TLE";
                break;
        }
        return a;
}
void test()
{
        assert(ICPC(200, 50 ,1)=="TLE");
        assert(ICPC(50000, 10 ,5)=="AC");
        assert(ICPC(200, 5 ,7)=="AC");
        cout<<"all test passed"<<endl;
}

void getdata()
{   
    ios::sync_with_stdio(false);
    int t,n,m;
    
   cin>>m>>n>>t;
   
   string ans = ICPC(m, n, t);
   cout << ans << endl;
    
    
}
int main(int argc, char* argv[])
{
    ios::sync_with_stdio(false);
    if (argc > 1 && (strncmp(argv[1], "test", 4) == 0))
        test();
    else
        getdata();
    return 0;
}

