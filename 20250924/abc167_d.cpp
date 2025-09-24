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

    ll N, K;
    cin >> N >> K;

    vector<ll> An;
    rep(i, N)
    {
        ll A;
        cin >> A;

        An.emplace_back(A);
    }

    ll current = 0;
    vector<ll> paths = {0};
    set<ll> set = {0};
    ll stright_length = 0, loop_length = 0;

    while (true)
    {
        current = An.at(current);
        current--;

        if (set.count(current))
        {
            auto target_it = find(paths.begin(), paths.end(), current);
            stright_length = distance(paths.begin(), target_it);
            loop_length = paths.size() - stright_length;

            break;
        }

        paths.emplace_back(current);
        set.insert(current);
    }

    if (K <= stright_length)
    {
        cout << paths.at(K) + 1 << endl;

        return 0;
    }

    cout << paths.at((K - stright_length) % loop_length + stright_length) + 1 << endl;

    return 0;
}
