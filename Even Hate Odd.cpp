#include<bits/stdc++.h>
#define hammam ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    hammam
    int n ; cin>>n;
    while (n--) {
        int t; cin>>t;
        int a[t];
        for (int i=0; i<t; i++) {
            cin>>a[i];
        }
        if (t % 2 != 0) {
            cout<<-1<<endl;
        } else {
            int odd = 0;
            int even = 0;
            for (int i=0; i<t; i++) {
                if (a[i] % 2 == 0) {
                    even++;
                } else {
                    odd++;
                }
            }
            cout << abs (even - odd)/2 << endl;
        }
    }
    return 0;
}
