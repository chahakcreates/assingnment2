#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[1000];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    k = k % n;
    for (int i = 0; i < n; i++)
        printf("%d ", a[(i + k) % n]);
    printf("\\n");
    return 0;
}
