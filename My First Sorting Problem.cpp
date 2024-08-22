#include <bits/stdc++.h>
#define hammam ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);

using namespace std;

int main() {
    hammam
    int t; cin >> t;
    pair<int, int> p;
    while (t--) {
        cin >> p.first >> p.second;
        if (p.first > p.second) {
            cout << p.second << " " << p.first << "\n";
        } else {
            cout << p.first << " " << p.second << "\n";
        }
    }

    return 0;
}
