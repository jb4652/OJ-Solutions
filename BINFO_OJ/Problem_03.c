#include <stdio.h>
#include <string.h>

int main(void)
{
    char DNA[1001];
    
    scanf("%s", DNA);
    
    int len = strlen(DNA);
    
    for(int i = 0; i < len / 2; i++)
    {
        char temp = DNA[i];
        DNA[i] = DNA[len - i - 1];
        DNA[len - i - 1] = temp;
    }
    
    for(int i = 0; i < len; i++)
    {
        switch(DNA[i])
        {
            case 'A': printf("T"); break;
            case 'T': printf("A"); break;
            case 'C': printf("G"); break;
            case 'G': printf("C"); break;
        }
    }
    
    printf("\n");
    
    return 0;
}
