#include <stdio.h>

int main(void)
{
    char DNA[1001];
    int A = 0, C = 0, G = 0, T = 0;
    
    scanf("%s", DNA);
    
    int i = 0;
    while(DNA[i] != '\0')
    {
        switch(DNA[i])
        {
            case 'A': A++; break;
            case 'C': C++; break;
            case 'G': G++; break;
            case 'T': T++; break;
        }
        
        i++;
    }
    
    printf("%d %d %d %d\n", A, C, G, T);
    
    return 0;
}
