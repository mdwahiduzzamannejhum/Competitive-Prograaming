#include <bits/stdc++.h>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    optimize;
    int k,n,w;
    cin >> k >> n >> w;
    int i=1;
    int price=0;
    while(i<=w){
        price=price+(k*i);
        i++;
    }
    if(price>n){
        cout << price-n << endl;
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}