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

ll power_mod(ll a, ll n, ll p)
{
    if (n == 1)
    {
        return a % p;
    }

    if (n % 2 == 1)
    {
        return (a * power_mod(a, n - 1, p)) % p;
    }

    ll tmp = power_mod(a, n / 2, p);
    return (tmp * tmp) % p;
}

int main()
{
    init();

    ll A, B, C;
    cin >> A >> B >> C;

    vector<vector<ll>> pattern(10, vector<ll>(4, 0));

    rep(i, 10)
    {
        rep(j, 4)
        {
            pattern.at(i).at(j) = (ll)pow(i, j + 1) % 10;
        }
    }

    ll target = power_mod(B, C, 4);
    if (target == 0)
    {
        target = 3;
    }
    else
    {
        target--;
    }

    cout << pattern.at(A % 10).at(target) << endl;

    return 0;
}
