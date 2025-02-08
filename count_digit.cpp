#include <bits/stdc++.h>
using namespace std;

int count_digit(int num)
{
    int count = 0;
    if (num == 0)
    {
        return 1;
    }
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    cout << count;
}

int main()
{
    int num;
    cout << "enter number";
    cin >> num;
    count_digit(num);
    return 0;
}