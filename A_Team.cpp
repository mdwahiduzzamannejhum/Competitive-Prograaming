#include<bits/stdc++.h>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    optimize;
    int n;
    cin>>n;
    int count=0;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>1)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}