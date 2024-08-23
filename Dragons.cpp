#include<bits/stdc++.h>
#define hammam ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    hammam
    int s, n;
    cin >> s >> n;
    pair<int, int> arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        if (s > arr[i].first) {
            s += arr[i].second;
        } else {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
