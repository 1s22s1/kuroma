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

int main()
{
    init();

    ll N;
    cin >> N;

    vector<ll> An = {-1};
    rep(i, N)
    {
        ll a;
        cin >> a;
        An.emplace_back(a);
    }

    ll current = 1, count = 0;

    cout << count << endl;

    rep(i, 100000)
    {
        current = An.at(current);
        count++;

        if (current == 2)
        {
            cout << count << endl;

            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
