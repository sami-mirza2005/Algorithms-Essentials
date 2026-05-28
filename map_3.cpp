#include<bits/stdc++.h>
using namespace std;
main()
{
    map<int,string>m;
    m[1]="Apple";
    m[2]="banana";
    m[4]="coconut";
    m[2]="gu";
    m[3]="Apple";

    for(auto i:m)
        cout<<i.first<<" "<<i.second<<endl;

}
