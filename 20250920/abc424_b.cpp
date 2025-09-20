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

    ll N, M, K;
    cin >> N >> M >> K;

    vector<ll> count(N + 1, 0);
    vector<ll> answer;

    rep(i, K)
    {
        ll A, B;
        cin >> A >> B;

        count.at(A)++;

        if (count.at(A) == M)
        {
            answer.emplace_back(A);
        }
    }

    for (auto a : answer)
    {
        cout << a << ' ';
    }

    cout << endl;

    return 0;
}
