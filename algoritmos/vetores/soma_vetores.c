#include <stdio.h>

int main(void)
{
    int n = 10;
    int v1[n];
    int v2[n];
    int v3[n];

    for (int i = 0; i < n; i++)
    {
        v3[i] = v1[i] + v2[i];
    }
}