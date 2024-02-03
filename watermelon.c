//The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.

#include <stdio.h>
int main()
{
    int W;
    scanf("%d",&W);
    if(W>2 && W%2==0)
    {
        printf("YES");
    }
    else
    {
            printf("NO");
    }
    return 0;
}
