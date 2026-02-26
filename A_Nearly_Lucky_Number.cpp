#include<iostream>
#include<string>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize;
    
    string n;  // Use string to process digits
    cin >> n;

    int lucky_count = 0;

    for (char c : n) {
        if (c == '4' || c == '7') {
            lucky_count++;
        }
    }

    // Check if the count of lucky digits is itself a lucky number
    if (lucky_count == 4 || lucky_count == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}