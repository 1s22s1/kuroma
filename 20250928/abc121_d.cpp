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

ll even_sum_xor(ll n)
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

ll sum_xor(ll n)
{
    if (n % 2 == 0)
    {
        return even_sum_xor(n);
    }
    else
    {
        return n ^ even_sum_xor(n - 1);
    }
}

int main()
{
    init();

    ll A, B;
    cin >> A >> B;

    cout << (sum_xor(A - 1) ^ sum_xor(B)) << endl;

    return 0;
}
