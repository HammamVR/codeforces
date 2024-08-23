/*binary search*/
#include <bits/stdc++.h>
#define hammam ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    hammam
    int a, b;
    cin >> a >> b;
    int arr[a];
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < b; i++) {
        int x; cin >> x;
        int left = 0, right = a - 1;
        int answer = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] > x) {
                answer = arr[mid];
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        cout << answer << '\n';
    }

    return 0;
}

