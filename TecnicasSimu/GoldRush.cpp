#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        if (n = m)
        {
            cout << "FALSE" << endl;
        }
        if (n % 3 != 0)
        {
            cout << "FALSE" << endl;
        }
        if (n % 3 || 2 * n % 3)
        {
            cout << "TRUE" << endl;
        }
    }
}