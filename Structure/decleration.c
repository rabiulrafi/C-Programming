#include <stdio.h>
#include <string.h>
 
typedef struct {
    double price;
    char make[50];
    }car_t;
 
int main()
{
    car_t newcar;
    printf("Input make of car: ");
    fgets(newcar.make, 50, stdin);
    printf("\nInput price of car: ");
    scanf("%lf", &newcar.price);
    printf("The make is: %s", newcar.make);
    printf("The price is: $%lf", newcar.price);
    return 0;
}