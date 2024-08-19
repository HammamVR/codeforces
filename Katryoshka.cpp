#include <bits/stdc++.h>
#define hammam ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
 
int main() {
    hammam
    long long eyes , mouth ,body ; cin >> eyes >> mouth >> body;
    long long x = 0;
    long long y = 0 ;
    long long z = mouth;
    long long c = eyes;
    if (eyes == 0 || body == 0){
        cout << "0";
        return 0;
    } else if (body < mouth && body < eyes){
        cout << body;
        return 0;
    } else if ( eyes > body && (abs(body-mouth) < abs(body - eyes)) ){
        cout << body;
        return 0;
    } else if (eyes > mouth){
        while (mouth >0){
            x++;
            eyes --;
            mouth --;
            body--;
        }
        if ( mouth == 0){
            y = (c - z) / 2;
            cout << y + x;
            return 0;
        }
    } else if (eyes == mouth && eyes == body){
        cout << eyes ;
        return 0;
    } else if (mouth > 0 && mouth >= eyes ){
        if (eyes >0){
            if (body > 0 && body >= eyes){
                cout << eyes ;
                return 0;
            }
        }
    }
        
    cout << x;
    return 0;
}
