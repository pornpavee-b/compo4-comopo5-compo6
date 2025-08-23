 #include <stdio.h>
int main() 
{
    int i;
    int element; 
    int search;
    int count=0;
    printf("Enter number of elements: ");
    scanf("%d", &element);
    printf("Enter %d integers: ", element;
    int numbers[element]; 
    for (int i = 0; i < element; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    int search, count = 0;
    printf("Enter the number to search for: ");
    scanf("%d", &search);
    for (int i = 0; i < element; i++)
     {
        if (arr[i] == search) 
        {
            count++;
        }
    }

    printf("Element %d occurs %d times\n", search, count);

    return 0;
}
