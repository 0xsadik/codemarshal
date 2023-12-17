#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, t;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        if (a > b || b > a || c > a) {
            cout << a << '\n';
        }
        else if (b > a || b > c || c > b) {
            cout << b << '\n';
        }
    }
}

// https://algo.codemarshal.org/problems/556b5a1e9c5e850300c49cac