// https://www.hackerrank.com/challenges/sparse-arrays/problem
#include <bits/stdc++.h>
#define FORN(i, n) for(__typeof(i) i=0;i<n;i++)
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    int i;
    vector<string> arr(n);
    vector<string> queries(q);
    vector<int> result(q, 0);
    FORN(i, n)
        cin >> arr[i];
    cin >> q;
    int j;
    FORN(i, q)
    {
        cin >> queries[q];
        FORN(j, n)
        {
            if(queries[q] == arr[j])
            result[i]++;
        }
    }
    FORN(i, q)
    cout << result[i] << endl;
    return 0;
}