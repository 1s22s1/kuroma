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

    ll A, B, C;
    cin >> A >> B >> C;

    ll max_it = max(max(A, B), C);

    ll answer = 0;
    ll count = 0;
    if (max_it % 2 == A % 2)
    {
        count++;
    }

    if (max_it % 2 == B % 2)
    {
        count++;
    }

    if (max_it % 2 == C % 2)
    {
        count++;
    }

    if (count == 1)
    {
        answer = 1;
    }

    if (count == 2)
    {
        answer = 2;
    }

    answer += (max_it - A) / 2;
    answer += (max_it - B) / 2;
    answer += (max_it - C) / 2;

    cout << answer << endl;

    return 0;
}
