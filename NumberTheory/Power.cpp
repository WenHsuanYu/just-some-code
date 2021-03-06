#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

ull mod_pow(ull x, ull n, ull mod)
{
    ull res = 1;
    while (n > 0) {
        if (n & 1) 
            res = res * x % mod;
        x = x * x % mod;
        n >>= 1;
    }

    return res;
}


int main(void)
{
    ull m, n;
    cin >> m >> n;
    cout << mod_pow(m, n, 1'000'000'007) << endl;


    return 0;
}