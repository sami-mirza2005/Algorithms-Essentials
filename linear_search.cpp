#include<bits/stdc++.h>
using namespace std;
main()
{
    int a[]={2,33,44,23};
    int Target;
    cin>>Target;
    int index=-1;
    for(int i=0;i<4;i++)
    {
        if(a[i]==Target)
        {
            index=i;
            break;

        }
    }
    cout<<index;
}
