#include <bits/stdc++.h>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize;
    int n;
    cin >> n;
    int x = 0;
    while (n--) {
        string s;
        cin >> s;
        if (s[1] == '+') x++;
        else x--;
    }
    cout << x << endl;
    return 0;
}
