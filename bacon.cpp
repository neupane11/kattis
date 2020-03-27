#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
 template<class T1, class T2>
ostream& operator<<(ostream& out, const map<T1, T2>& m) {
    char comma[3] = {'\0', ' ', '\0'};
    out << '{';
    for (auto& e: m) {
        out << comma << e.first << ':' << e.second;
        comma[0] = ',';
    }
    out << '}';
    return out;
}
int main()
{
    int n;
    string name,item;
    cin>>n;
    map<string,vector<string>>menu;
    //vector<string>vec;
    for(int i=0;i<n;i++)
       {
           cin>>name;
           getline(cin,item);
           menu[name].push_back(item);
           
         
           
       }
    //    for(int i=0;i<vec.size();i++)
    //    {
    //        cout<<vec[i];
    //    }
   
    for(auto iterator = menu.begin(); iterator != menu.end(); iterator++)
     {cout << menu[name]<<endl;}
}