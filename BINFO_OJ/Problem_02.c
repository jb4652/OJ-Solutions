#include <stdio.h>

int main(void)
{
    char DNA[1001];
    
    scanf("%s", DNA);
    
    int i = 0;
    while(DNA[i] != '\0')
    {
        if(DNA[i] == 'T')
        {
            DNA[i] = 'U';
        }
        
        i++;
    }
    
    printf("%s\n", DNA);
    
    return 0;
}
