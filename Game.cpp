/*binary search*/
#include <bits/stdc++.h>
#define hammam ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    hammam
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < b; i++) {
        int x; scanf("%d", &x);
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

        printf("%d\n", answer);
    }

    return 0;
}
