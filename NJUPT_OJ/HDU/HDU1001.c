#include <stdio.h>

int main(void)
{
    int n;
    
    while(scanf("%d", &n) == 1)
    {
        int sum = 0;
        
        for(int i = 1; i <= n; i++)
        {
            sum += i;
        }
        
        printf("%d\n\n", sum);
    }
    
    return 0;
}
