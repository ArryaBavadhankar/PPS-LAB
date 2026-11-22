#include<stdio.h>
int main()
int choice;
float n1, n2, result;
do{
printf("=======MENU=======\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Exit Program\n");
printf("Enter your choice:\n");
scanf("%d", &choice);
printf("Enter first number: ");
scanf("%f", &n1);
printf("Enter second number: ");
scanf("%f"' &n2);
switch(choice)
{
case 1:
result= n1 + n2;
printf("Result: %f + %f= %f\n", n1, n2, result);
break;
case 2:
result= n1 - n2;
printf("Result: %f - %f=%f\n", n1, n2, result);
break;
case 3:
result= n1 * n2;
printf("Result: %f * %f=%f\n", n1, n2, result);
break;
case 4:
if(n2!=0)
{
result= n1 / n2;
printf("Result: %f / %f=%f\n", n1, n2, result);
}
else
{
printf("Error: Divison by zero is not allowed!\n");
}
break;
default:
printf("Invalid choice! Please run the program again. \n");
}
return 0;
}
