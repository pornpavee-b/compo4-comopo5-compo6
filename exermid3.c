#include <stdio.h>
int main()
 {
    int i = 0;
    int decimal;
    int binary[20];
    char hex[20];

    printf("Hexadecimal : ");
    scanf("%s", hex);
    sscanf(hex, "%x", &decimal);
    int temp = decimal;
    if (temp == 0) 
    {
        printf("\nBinary  : 0");
    }
    else
    {
        while (temp > 0) 
        {
            binary[i] = temp % 2;
            temp /= 2;
            i++;
        }
        printf("Binary  : ");
        for (int j = i - 1; j >= 0; j--) 
        {
            printf("%d", binary[j]);
        }
    }
    printf("\nDecimal : %d\n", decimal);
    return 0;
}
