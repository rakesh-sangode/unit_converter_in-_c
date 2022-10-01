#include <stdio.h>

int main()
{
    char input, start;
    float inches_to_meter = 0.0254;
    float pound_to_kgs = 0.45359237;
    float kms_to_miles = 0.621371192;
    float inches_to_foot = 0.0833333333;
    float cms_to_inches = 0.393700787;
    float first, solution;

    printf("\t\tWelcome to UnitConverter\n");
    printf("If you want to start this Calculator, then Press 'S' Button.\n");
    scanf("%c", &start);

    if (start == 's' || start == 'S')
    {
        printf("Thanks for Start this Calculator.\n\n");
        printf(" s1. Inches To Meters\n 2. Pound To Kgs\n 3. Kms To Miles\n 4. Inches To Foots\n 5. Cms To Inches\n");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            printf("You Choosed Inches To Meters !!\n");
            printf("Enter the value in terms of (Inches) unit : \n");
            scanf("%f", &first);
            solution = first * inches_to_meter;
            printf("%f Inches is equal to %f Meters\n", first, solution);
            break;
        case 2:
            printf("You Choosed Pounds To Kgs !!\n");
            printf("Enter the value in terms of (Pounds) unit : \n");
            scanf("%f", &first);
            solution = first * pound_to_kgs;
            printf("%f Pounds is equal to %f Kilograms\n", first, solution);
            break;
        case 3:
            printf("You Choosed Kilometers To Miles !!\n");
            printf("Enter the value in terms of (Kilometers) unit : \n");
            scanf("%f", &first);
            solution = first * kms_to_miles;
            printf("%f Kilometers is equal to %f Miles\n", first, solution);
            break;
        case 4:
            printf("You Choosed Inches To Foot !!\n");
            printf("Enter the value in terms of (Inches) unit : \n");
            scanf("%f", &first);
            solution = first * inches_to_foot;
            printf("%f Inches is equal to %f Foot\n", first, solution);
            break;
        case 5:
            printf("You Choosed Centimeters To Inches !!\n");
            printf("Enter the value in terms of (Centimeters) unit : \n");
            scanf("%f", &first);
            solution = first * cms_to_inches;
            printf("%f Centimeter is equal to %f Inches\n", first, solution);
            break;

        default:
            break;
        }
    }

    else
    {
        printf("Quitting the program.......\n\n");
    }
    return 0;
}