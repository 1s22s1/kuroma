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

vector<pair<char, ll>> rle(string s)
{
    vector<pair<char, ll>> vec;

    ll n = s.size();
    ll i = 0;
    while (i < n)
    {
        ll j = i;
        while (j < n && s.at(i) == s.at(j))
        {
            j++;
        }

        vec.emplace_back(s.at(i), j - i);
        i = j;
    }

    return vec;
}

int main()
{
    init();

    ll N;
    string S;
    cin >> N >> S;

    auto compressed_s = rle(S);

    ll answer = N * (N - 1) / 2;
    for (auto [key, value] : compressed_s)
    {
        answer -= value * (value - 1) / 2;
    }

    cout << answer << endl;

    return 0;
}
