#include <bits/stdc++.h>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    int n,k,l,c,p,d,nl,np;
    cin >> n >> k >> l >> c >>  d >>p>> nl >> np;
    int tslice=c*d;
    int tdrink=(k*l);
    int tsalt=p;
    int count=0;
    
  int result = min(tdrink / nl, min(tslice, tsalt / np));

    cout << result/n << "\n";
    }