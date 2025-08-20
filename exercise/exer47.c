#include<stdio.h>
int main()
{
    int vowel=0;
    int alphabet=0;
    int count;
    char letter;
    count=0;
    for(count=0;count<10;count++)
    {
        printf("Enter letter a-z:\n");
        scanf(" %c",&letter);
        
        if((letter=='a')|(letter=='e')|(letter=='i')|(letter=='o')|(letter=='u'))

            vowel++;
        else
            alphabet++;
    
    }
    printf("   Result   \n");
    printf("Vowel(a,e,i,o,u) = %d\n",vowel);
    printf("Other letter     =%d\n",alphabet);
    return 0;
}