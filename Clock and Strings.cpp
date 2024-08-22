#include <bits/stdc++.h>
#define hammam ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);

using namespace std;

int main() {
    hammam
    int t; cin>>t;
   int a , b ,c ,d;
    while (t--) {
        cin>>a>>b>>c>>d;
        if (a > b) {
            swap(a,b);
        }
        if (c> d) {
            swap(c,d);
        }
        if ((c < b && c >a ) != (a < d && d < b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
