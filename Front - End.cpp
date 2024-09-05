#include<bits/stdc++.h>
#define hammam ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    hammam
    int n ; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    int x = 0;
    int y = n-1;
        while (x <=y) {
            if (x != y) {
                cout << a[x]<<" "<<a[y];
                x++;
                y--;
                cout<<' ';
            } else {
                cout<<a[x];
                return 0;
            }
        }
    return 0;
}
