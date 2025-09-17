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

    string s;
    cin >> s;

    ll answer = s.size();

    for (char c = 'a'; c <= 'z'; c++)
    {
        ll i = 0;
        ll row_answer = -1;
        while (i < s.size())
        {
            ll j = i;
            while (j < s.size() && s.at(j) != c)
            {
                j++;
            }

            row_answer = max(row_answer, j - i);
            i = j + 1;
        }

        answer = min(answer, row_answer);
    }

    cout << answer << endl;

    return 0;
}
