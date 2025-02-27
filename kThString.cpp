#include <iostream>

using namespace std;

//helper for the wrap around from z
char shiftChar(char c)
{
    if (c == 'z') return 'a';
    return c + 1;
}

//recursive function f(n, k) returning the kth character after n operations.
char findKthChar(int n, int k)
{
    if (n == 0) {
        return 'a';
    }
    
    int halfLength = 1 << (n - 1);
    
    if (k <= halfLength)
    {
        return findKthChar(n - 1, k);
    }
    else
    {
        char c = findKthChar(n - 1, k - halfLength);
        return shiftChar(c);
    }
}

int main()
{
    int k = 10;
    
    //find n such that 2^n >= k
    int n = 0; //every operation makes the sring double in length
    while ((1 << n) < k)
    {
        n++;
    }
    
    //recursion to get the kth character
    char result = findKthChar(n, k);
    
    cout << result << endl;
    
    return 0;
}