#include<bits/stdc++.h>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    optimize;
    int n,m,a;
    cin>>n>>m>>a;
    long long int row=(n+a-1)/a;
    long long int col=(m+a-1)/a;
    long long int ans=row*col;
    cout<<ans<<endl;
    return 0;

}