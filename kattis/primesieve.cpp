// Kattis - primesieve
// Find the number of primes in [1, n] and answer queries of whether numbers in
// this range are prime.
// We can precomute all the primes using the Sieve of Eratosthenes, then answer
// queries with bitset lookup.
#include <bitset>
#include <cmath>
#include <iostream>

#define MAX_N 100000000

using namespace std;

bitset<MAX_N> marked;

int main(int argc, char **argv)
{
    marked[1] = true; // 1 is not prime
    int n, q, total = 0;
    cin >> n >> q;
    int bound = (int) sqrt(n);
    for (int i = 2; i <= bound; i++)
        if (marked[i] == false)
            for (int j = i * i; j <= n; j += i)
                marked.set(j);
    for (int i = 2; i <= n; i++)
        if (!marked[i])
            total++;
    cout << total << endl;
    for (int i = 0; i < q; i++) {
        int query;
        cin >> query;
        cout << !marked[query] << endl;
    }
    return 0;
}
