#include<bits/stdc++.h>
#define hammam ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    hammam
        int t ; cin >> t;
        while (t--) {
            long long l , r ; cin >> l >> r;
            if (l > r) swap (l,r);
            long long L = l-1;
            long long x = L*(L+1)/2, y = r*(r+1)/2;
            cout << y-x <<endl;
        }
        return 0;
    }





#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin>>t;
    long long a ,b;
    while(t--) {
        cin>>a>>b;
      if (a >b) {
          swap(a,b);
      }
        long long x =b - a +1;
        long long sum = (x * (a+b))/2;
        cout<<abs(sum)<<endl;
    }
    return 0;
}
