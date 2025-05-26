#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> arr(n - 1);
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int missingNumber = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == missingNumber)
        {
            missingNumber++;
        }
        else
        {
            cout << missingNumber << endl;
            break;
        }
    };
}