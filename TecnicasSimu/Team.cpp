#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, fmin;
        cin >> n >> fmin;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        int teams = 0, size = 0;
        for (int i = 0; i < n; i++)
        {
            size++;
            if (a[i] * size >= fmin)
            {
                teams++;
                size = 0;
            }
        }
        cout << teams << endl;
    }
}
