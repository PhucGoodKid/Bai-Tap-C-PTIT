#include <stdio.h>
#include <string.h>
int main()
{
    char s[100006];
    gets(s);
    int n = strlen(s) - 1;
    printf("%d", n);
}