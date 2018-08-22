#include <cstdio>

int main(int argc, char **argv)
{
    int w;
    scanf("%d", &w);
    printf("%s\n", (w & 1) || (w == 2) ? "NO" : "YES");
    return 0;
}

