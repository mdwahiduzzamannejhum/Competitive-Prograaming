#include <iostream>
#include <vector>
using namespace std;

#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize;
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> C(N);

        int red = 0, blue = 0, undecided = 0;

        for (int i = 0; i < N; i++) {
            cin >> C[i];
            if (C[i] == 1) red++;
            else if (C[i] == 2) blue++;
            else undecided++;
        }

        if (N % 2 != 0) {
            cout << "NO" << endl;
        } else {
            if (abs(red - blue) <= undecided) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
