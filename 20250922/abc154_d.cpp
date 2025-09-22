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

    vector<double> Sn = {0.0};

    rep(i, N)
    {
        double p;
        cin >> p;

        Sn.emplace_back((1.0 + p) / 2.0 + Sn.back());
    }

    double answer = -1;

    for (ll i = K; i <= N; i++)
    {
        answer = max(answer, Sn.at(i) - Sn.at(i - K));
    }

    cout << fixed << setprecision(10) << answer << endl;

    return 0;
}
