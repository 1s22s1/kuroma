#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

void init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
}

ll even_xor_sum(ll n)
{
    if (n / 2 % 2 == 0)
    {
        return n;
    }
    else
    {
        return n + 1;
    }
}

ll xor_sum(ll n)
{
    if (n % 2 == 0)
    {
        return even_xor_sum(n);
    }
    else
    {
        return even_xor_sum(n - 1) ^ n;
    }
}

int main()
{
    init();

    ll A, B;
    cin >> A >> B;

    cout << (xor_sum(A - 1) ^ xor_sum(B)) << endl;

    return 0;
}
