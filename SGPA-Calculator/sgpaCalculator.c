//SGPA Calculator

#include <stdio.h>
int main(){
    int course, credit, tCredit = 0;
    float cgpa, sum = 0.0;
    printf ("How many courses? ");
    scanf ("%d", &course);

    printf ("\nenter Course Credit and CGPA using a space\n");
    for (int i = 0; i<course; i++){
        printf ("Course %d: ", i+1);
        scanf ("%d %f", &credit, &cgpa);
        sum += cgpa * credit;
        tCredit += credit;
    }

    float sgpa = sum/tCredit;
    printf ("\nYour SGPA: %.2f", sgpa);

    return 0;
}
