#include <stdio.h>

int main(void)
{
    int N;
    
    while(scanf("%d", &N) == 1)
    {
        int sum = 0;
        int temp;
        
        if(N == 0) break;
        
        for(int i = 0; i < N; i++)
        {
            scanf("%d", &temp);
            sum += temp;
        }
        
        printf("%d\n\n", sum);
    }
    
    return 0;
}
