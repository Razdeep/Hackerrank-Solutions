// https://www.hackerrank.com/challenges/array-left-rotation/problem
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = d; i < arr.size(); i++)
        cout << arr[i] << " ";
    for (int i = 0; i < d; i++)
        cout << arr[i] << " ";
    return 0;
}
