#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize;
    string s;
    cin >> s;
    unordered_set<char> distinct_chars;
    for (char c : s) {
        distinct_chars.insert(c);
    }
    if (distinct_chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }

    return 0;
}