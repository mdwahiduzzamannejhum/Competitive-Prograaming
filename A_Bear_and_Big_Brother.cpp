#include <bits/stdc++.h>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    optimize;
    int L,B;
    cin >> L >> B;
    int count=0;
    while(!(L>B)){
        int i=3;
        int j=2;
        L=L*i;
        B=B*j;
        count++;

    }
    cout << count << endl;
    return 0;
}