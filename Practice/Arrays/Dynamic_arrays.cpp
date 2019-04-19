// Not solved
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, Q;
    cin >> n >> Q;
    vector<int> arr[n];
    int last_answer = 0;
    for (int i = 0; i < Q; i++)
    {
        int q;
        int x;
        int y;
        cin >> q >> x >> y;
        int index = (x ^ last_answer) % n;
        
        if (q == 1)
        {
            arr[index].push_back(y);
        }
        else
        {
            int sz = arr[index].size();
            last_answer = arr[index][y % sz];
            cout << last_answer << endl;
            // answer.push_back(last_answer);
        }
    }
    return 0;
}