#include <iostream>
#include <vector>

using namespace std;

void sieve_of_eratosthenes(int n) 
{
    vector<bool> prime(n + 1, true);

    for (int p = 2; p * p <= n; p++) 
    {
        if (prime[p] == true) 
        {
            for (int i = p * p; i <= n; i += p) 
            {
                prime[i] = false;
            }
        }
    }

    for (int p = 2; p <= n; p++) 
    {
        if (prime[p] == true) 
        {
            cout << p << " ";
        }
    }
}

int main() 
{
    cout << "Enter number: ";
    int n;
    cin >> n;
    sieve_of_eratosthenes(n);
    return 0;
}