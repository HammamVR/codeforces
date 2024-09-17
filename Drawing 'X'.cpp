#include<bits/stdc++.h>
#define hammam ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);
using namespace std;
int main() {
    hammam
    int n ; cin >> n ;
    char a[n][n];
    int x = n-1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if ( i == n/2 && j == n/2) {
                cout << 'X';
                x--;
            } else if (i == j) {
                cout << '\\';
            } else if (j == x) {
                cout << '/';
                x--;
            } else {
                cout << '*';
            }
        }
        cout << endl;
    }
    return 0;

}
