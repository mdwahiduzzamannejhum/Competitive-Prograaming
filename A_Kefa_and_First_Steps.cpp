#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;
    string target = "hello";
    int i = 0;
    int j = 0;
    while (i < s.length() && j < target.length()) {
        if (s[i] == target[j]) {
            j++;
        }
        i++;
    }
    if (j == target.length()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}