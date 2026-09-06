#include <iostream>
using namespace std;

int countdigit(int n)
{
    int count = 0;

    while(n)
    {
        count++;
        n /= 10;
    }

    return count;
}

bool Armstrong(int num, int digit)
{
    int n = num, ans = 0, rem;

    while(n)
    {
        rem = n % 10;
        n /= 10;

        int power = 1;

        for(int i = 0; i < digit; i++)
        {
            power = power * rem;
        }

        ans = ans + power;
    }

    if(ans == num)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    cin >> num;

    int digit = countdigit(num);

    cout << Armstrong(num, digit);
}