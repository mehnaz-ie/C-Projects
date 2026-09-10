#include <stdio.h>

int main (){
    int operation, a, b;
   
    printf ("Enter two integer values: ");
    scanf ("%d %d", &a, &b);
    
    printf ("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf ("Which operation do you want to perform? Type (1-4): ");
    scanf ("%d", &operation);

    switch (operation){
        case 1:
        printf ("Sum: %d", a+b);
        break;
        case 2:
        printf ("Difference: %d", a-b);
        break;
        case 3:
        printf ("Product: %d", a*b);
        break;
        case 4:
        printf ("Quotient: %d", a/b);
        break;
        default: 
        printf ("Error! Enter a valid operation.");
    }

    return 0;
}
