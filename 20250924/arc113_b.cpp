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

ll mod(ll a, ll n, ll p)
{
    if (n == 1)
    {
        return a % p;
    }

    if (n % 2 == 1)
    {
        return (a * mod(a, n - 1, p)) % p;
    }

    ll tmp = mod(a, n / 2, p);
    return (tmp * tmp) % p;
}

int main()
{
    init();

    ll A, B, C;
    cin >> A >> B >> C;

    vector<vector<ll>> pattern(10, vector<ll>(4));

    rep(i, 10)
    {
        for (ll j = 1; j <= 4; j++)
        {
            pattern.at(i).at(j - 1) = (ll)pow(i, j) % 10;
        }
    }

    ll target = (mod(B, C, 4));

    cout << pattern.at(A % 10).at(target == 0 ? 3 : target - 1) << endl;

    return 0;
}
