#include <bits/stdc++.h>
using namespace std;

int reverseDigit(long long n)
{

    long long rev_num = 0;
    while (n > 0)
    {
        rev_num = rev_num * 10 + n % 10;
        n /= 10;
    }
    return rev_num;
}

bool isPallindrome(long long num)
{
    return (reverseDigit(num) == num);
}

void numToReverse(long long num)
{

    long long revNumber = 0;


    while(num<LONG_LONG_MAX){
    revNumber = reverseDigit(num);
    num += revNumber;

    if (isPallindrome(num))
    {
        cout << "true" << endl;
        break;
    }
    else
    {
        cout << "false";
        break;
    }
    }
}

int main()
{

    int n;
    cin >> n;

    numToReverse(n);

    return 0;
}