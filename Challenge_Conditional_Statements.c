// C code for conditional Statements

#include <stdio.h>
int main()
{
    int number;

    printf("Enter an marks obtained by Kid: ");
    scanf("%d", &number);

    if (number > 85 )
    {
        printf(" This kid got Grade A.\n", number);
    }
    else if (number >70)
    {
        printf(" This kid got Grade B.\n", number);
    }
    else if (number >55)
    {
        printf(" This kid got Grade C.\n", number);
    }
    else if (number >40)
    {
        printf(" This kid got Grade D.\n", number);
    }
    else
    {
        printf(" This kid gor Grade F.\n", number);
    }


    return 0;
}