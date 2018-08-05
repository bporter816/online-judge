// 100 - The 3n + 1 Problem
#include <cstdio>
#define swap(i, j) i = i ^ j; j = i ^ j; i = i ^ j;

int main(int argc, char **argv)
{
    int i, j;
    while (scanf("%d %d", &i, &j) != EOF) {
        bool swapped = false;
        if (i > j) {
            swap(i, j);
            swapped = true;
        }
        int max = -1;
        for (int k = i; k <= j; k++) {
            long n = k;
            int query = 1;
            while (n != 1) {
                if (n & 1)
                    n = 3 * n + 1;
                else
                    n >>= 1;
                query++;
            }
            if (query > max)
                max = query;
        }
        if (swapped)
            printf("%d %d %d\n", j, i, max);
        else
            printf("%d %d %d\n", i, j, max);
    }
    return 0;
}
