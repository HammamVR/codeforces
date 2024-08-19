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
