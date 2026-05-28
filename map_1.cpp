#include<bits/stdc++.h>
using namespace std;
main()
{
    map<string,int>m;
    m["cat"]=2;
    m["dog"]=11;
    m["dog"]=3;
    m["bird"]=10;

    cout<<m["cat"]<<endl;
    cout<<m["dog"]<<endl;
    for(auto i:m)
        cout<<i.first<<" "<<i.second<<endl;

}

