#include <bits/stdc++.h>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
   <vector>int x(4);
   for(int i=0;i<4;i++){
       cin>>x[i];}
    sort(x.begin(),x.end());
    int a=x[3]-x[0];
    int b=x[3]-x[1];
    int c=x[3]-x[2];
    cout<<a<<" "<<b<<" "<<c<<"\n";


    }