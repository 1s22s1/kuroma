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

template <typename T>

class LinearGraph
{

public:
    vector<ll> visited;
    vector<ll> previous;

    LinearGraph(T _graph)
    {
        graph = _graph;
    }

    void bfs(vector<ll> starts = {0})
    {
        visited.assign(graph.size(), -1);
        previous.assign(graph.size(), -1);

        queue<ll> queue;

        for (auto start : starts)
        {
            queue.emplace(start);
            visited.at(start) = 0;
        }

        while (!queue.empty())
        {
            auto current = queue.front();
            queue.pop();

            for (auto next : graph.at(current))
            {
                if (visited.at(next) != -1)
                {
                    continue;
                }

                queue.emplace(next);
                visited.at(next) = visited.at(current) + 1;
                previous.at(next) = current;
            }
        }
    }

private:
    T graph;
};

int main()
{
    init();

    ll N, M;
    cin >> N >> M;

    vector<vector<ll>> g(N);
    rep(i, M)
    {
        ll A, B;
        cin >> A >> B;
        A--, B--;

        g.at(A).emplace_back(B);
    }

    ll answer = 0;
    rep(i, N)
    {
        LinearGraph graph(g);
        graph.bfs({i});
        auto visited = graph.visited;

        answer += count_if(visited.begin(), visited.end(), [](int x)
                           { return x != -1; });
    }

    cout << answer << endl;

    return 0;
}
