#include <stdio.h>
#include <stdlib.h>

void printInt(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    printf("\n");
}

void reverseInt(int a[], int n)
{
    int temp;
    
    for(int i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    
    printInt(a, n);
}

void deleteInt(int a[], int n, int x)
{
    int index = 0;
    
    while(index < n)
    {
        if(a[index] == x)
        {
            for(int i = index + 1; i < n; i++)
            {
                a[i - 1] = a[i];
            }
            
            n--;
        }
        else
        {
            index++;
        }
    }
    
    if(n == 0)
        printf("\n");
    else
        printInt(a, n);
}

void printChar(char a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%c ", a[i]);
    }
    
    printf("\n");
}

void reverseChar(char a[], int n)
{
    char temp;
    
    for(int i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    
    printChar(a, n);
}

void deleteChar(char a[], int n, char x)
{
    int index = 0;
    
    while(index < n)
    {
        if(a[index] == x)
        {
            for(int i = index + 1; i < n; i++)
            {
                a[i - 1] = a[i];
            }
            
            n--;
        }
        else
        {
            index++;
        }
    }
    
    if(n == 0)
        printf("\n");
    else
        printChar(a, n);
}

void printFloat(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%g ", a[i]);
    }
    
    printf("\n");
}

void reverseFloat(float a[], int n)
{
    float temp;
    
    for(int i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    
    printFloat(a, n);
}

void deleteFloat(float a[], int n, float x)
{
    int index = 0;
    
    while(index < n)
    {
        if(abs(a[index] - x) < 1e-6)
        {
            for(int i = index + 1; i < n; i++)
            {
                a[i - 1] = a[i];
            }
            
            n--;
        }
        else
        {
            index++;
        }
    }
    
    if(n == 0)
        printf("\n");
    else
        printFloat(a, n);
}

int main(void)
{
    int nInt;
    int nChar;
    int nFloat;
    
    int xInt;
    char xChar;
    float xFloat;
    
    char tempString[1];
    
    scanf("%d", &nInt);
    int *arrayInt = (int*)malloc(nInt * sizeof(int));
    for(int i = 0; i < nInt; i++)
    {
        scanf("%d", &arrayInt[i]);
    }
    reverseInt(arrayInt, nInt);
    scanf("%d", &xInt);
    deleteInt(arrayInt, nInt, xInt);
    free(arrayInt);
    
    scanf("%d", &nChar);
    char *arrayChar = (char*)malloc(nChar * sizeof(char));
    for(int i = 0; i < nChar; i++)
    {
        scanf("%s", tempString);
        arrayChar[i] = tempString[0];
    }
    reverseChar(arrayChar, nChar);
    scanf("%s", tempString);
    xChar = tempString[0];
    deleteChar(arrayChar, nChar, xChar);
    free(arrayChar);
    
    scanf("%d", &nFloat);
    float *arrayFloat = (float*)malloc(nFloat * sizeof(float));
    for(int i = 0; i < nFloat; i++)
    {
        scanf("%f", &arrayFloat[i]);
    }
    reverseFloat(arrayFloat, nFloat);
    scanf("%f", &xFloat);
    deleteFloat(arrayFloat, nFloat, xFloat);    
    free(arrayFloat);
    
    return 0;
}
