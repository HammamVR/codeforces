#include <bits/stdc++.h>
#define Hammam ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    Hammam
    int x, y;
    cin >> x >> y;
    char arr[x][y];
    
    
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> arr[i][j];
        }
    }
    
   
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (arr[i][j] == '-') {
                cout << "-";
            } else if ((i + j) % 2 == 0) {
                cout << "B";
            } else {
                cout << "W";
            }
        }
        cout << endl; 
    }
    
    return 0;
}
