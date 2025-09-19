vector<ll> paths;
    // rep(i, N)
    // {
    //     paths.emplace_back(i);
    // }

    // ll answer = 0;

    // do
    // {
    //     bool ok = true;

    //     rep(i, N - 1)
    //     {
    //         if (find(g.at(paths.at(i)).begin(), g.at(paths.at(i)).end(), g.at(paths.at(i + 1))) == g.at(paths.at(i)).end())
    //         {
    //             ok = false;
    //         }
    //     }

    //     if (paths.at(0) == 0 && ok)
    //     {
    //         answer++;
    //     }

    // } while (next_permutation(paths.begin(), paths.end()));

    // cout << answer << endl;