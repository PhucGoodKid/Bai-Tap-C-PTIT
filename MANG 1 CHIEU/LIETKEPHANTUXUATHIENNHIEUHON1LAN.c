#include <stdio.h>

#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[100], dd[100005] = {
                    0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        dd[a[i]]++;
    }
    int b[100], cb = 0;
    for (int i = 0; i < n; i++)
    {
        if (dd[a[i]] > 1)
        {
            b[cb++] = a[i];
            dd[a[i]] = 0;
        }
    }
    printf("%d \n", cb);
    for (int i = 0; i < cb; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}