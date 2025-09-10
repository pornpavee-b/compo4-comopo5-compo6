#include <stdio.h>
int main()
{
struct product {
char name[15];
int count;
float price;
};
struct product pr1, pr2;
    pr1.count = 10;
    pr2.count = 30;
    pr1.price = 130.5;
    pr2.price = 240.75;
    pr1.name = "Programming"; 

    return 0;
}
