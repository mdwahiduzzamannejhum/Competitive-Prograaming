#include <iostream>
#include <algorithm>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize;
    string s,t;
    cin >> s >> t;
    string r=s;
    reverse(r.begin(),r.end());
    if(r==t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
