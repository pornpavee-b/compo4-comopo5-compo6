#include <stdio.h>
#include <string.h>

int main() 
{
    char binary[20];  
    int decimal = 0;

    printf("Binary : ");
    scanf("%s", binary);
    for (int i = 0; i < strlen(binary); i++) 
    {
        decimal = decimal * 2 + (binary[i] - '0');
    }
    printf("Decimal     : %d\n", decimal);
    printf("Hexadecimal : %X\n", decimal);

    return 0;
}
