#include <algorithm>
#include <cstdio>

using namespace std;

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sort(arr, arr + n);
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
