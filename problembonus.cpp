#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int x[t];
    int y[t];
    for(int i=0;i<t;i++)
    {
        cin>>x[i]>>y[i];
    }
    cout<<endl;
    for(int i=0;i<t;i++)
    {
        if( (x[i]>=4) || (x[i]==1 && y[i]==1) || (x[i]>1 && x[i]<4 && y[i]>0 && y[i]<4))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
