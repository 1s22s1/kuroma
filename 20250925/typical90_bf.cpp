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

    vector<ll> path;
    set<ll> set;
    ll stright_length, loop_length;

    while (true)
    {
        ll current = N;

        path.emplace_back(current);
        set.insert(current);

        while (N > 0)
        {
            current += N % 10;
            N /= 10;
        }

        current %= 100000;
        N = current;

        if (set.count(current))
        {
            auto target_it = find(path.begin(), path.end(), current);
            stright_length = distance(path.begin(), target_it);
            loop_length = path.size() - stright_length;

            break;
        }
    }

    if (K <= stright_length)
    {
        cout << path.at(K) << endl;

        return 0;
    }

    cout << path.at((K - stright_length) % loop_length + stright_length) << endl;

    return 0;
}
