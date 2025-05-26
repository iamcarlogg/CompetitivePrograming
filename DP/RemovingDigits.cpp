#include <bits/stdc++.h>
using namespace std;
string numberToString(int num)
{
    return to_string(num);
}

int MinTries(int num)
{
    int number = num;
    int tries = 0;
    while (number != 0)
    {
        string numberStr = numberToString(number);
        int accum = -1;
        for (char c : numberStr)
        {
            int aux = c - '0';
            if (aux > accum)
            {
                accum = aux;
            }
        }
        number -= accum;
        tries++;
    }
    return tries;
}

int main()
{
    int number;
    cin >> number;
    cout << MinTries(number);
    return 0;
}
