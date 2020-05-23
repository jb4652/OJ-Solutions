#include <stdio.h>

int main(void)
{
    int n;
    
    while(scanf("%d", &n) == 1)
    {
        int max = 0;
        int min = 100;
        
        int temp;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &temp);
            
            if(temp > max) max = temp;
            if(temp < min) min = temp;
        }
        
        printf("%d %d\n", max, min);
    }
    
    return 0;
}
