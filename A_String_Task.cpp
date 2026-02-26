#include <bits/stdc++.h>
using namespace std;

#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize;
    string s;
    cin >> s;

    vector<char> result;

    for (int i = 0; i < s.size(); i++) {
        char ch = tolower(s[i]);
        if (ch != 'a' && ch != 'o' && ch != 'y' && ch != 'e' && ch != 'u' && ch != 'i') {
            result.push_back('.');
            result.push_back(ch);
        }
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
    }

    cout << '\n';
    return 0;
}
