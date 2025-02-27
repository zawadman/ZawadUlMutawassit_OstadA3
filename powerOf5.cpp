#include <iostream>

using namespace std;


int isPowerOf5Checker(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    if (n % 5 != 0)
    {
        return 0;
    }
    return isPowerOf5Checker(n/5);
}

bool isPowerOf5(int n)
{
    if (isPowerOf5Checker(n) == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int n = 125;
    if (isPowerOf5(n))
    {
        cout<<"True"<<"\n";
    }
    else
    {
        cout<<"False"<<"\n";
    }
    return 0;
}