#include<stdio.h>
int main()
{
    int A,B,C,ch;
    printf("Enter value of A=");
    scanf("%i",&A);

    printf("Enter value of B=");
    scanf("%i",&B);

    printf("Choose option:\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Division\n");
    printf("4.Multiplication\n");

    printf("Enter your choice(1-4):");
    scanf("%i",&ch);

    switch(ch)
    {
    case 1:
        C=A+B;
        printf("Result:%i",C);
        break;

    case 2:
        C=A-B;
        printf("Result:%i",C);
        break;

    case 3:
        if(B!=0)
        {
            C=A/B;
            printf("Result:%i",C);
        }
        else
        {
            printf("Error");
        }

        break;

    case 4:
        C=A*B;
        printf("Result:%i",C);
        break;

    default:
        printf("Invalid Code");
        break;
    }

    return 0;
}
