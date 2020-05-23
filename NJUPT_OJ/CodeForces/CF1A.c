#include <stdio.h>

int main(void)
{
    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);
    
    long long flagstones = 1;
    
    if(n % a == 0)
        flagstones *= (n / a);
    else
        flagstones *= (n / a + 1);
    
    if(m % a == 0)
        flagstones *= (m / a);
    else
        flagstones *= (m / a + 1);
    
    printf("%lld\n", flagstones);
    
    return 0;
}
