#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
char str1[20], str2[20];
int ch, i, j;
do {
printf("\tMENU\n");
printf("---------------\n");
printf("1. Find length of string\n");
printf("2. Concatenate Strings\n");
printf("3. Copy String\n");
printf("4. Compare Strings\n");
printf("5. Exit\n");
printf("---------------\n");
printf("Enter your choice: ");
scanf("%d", &ch);
switch (ch) {
case 1:
printf("Enter string: ");
scanf("%s", str1);
i = strlen(str1);
printf("Length of String: %d\n\n", i);
break;
case 2:
printf("Enter first string: ");
scanf("%s", str1);
printf("Enter second string: ");
scanf("%s", str2);
strcat(str1, str2);
printf("String after concatenation: %s\n\n", str1);
break;
case 3:
printf("Enter String1: ");
scanf("%s", str1);
printf("Enter String2: ");
scanf("%s", str2);
printf("\nString before copy:\nString1=\"%s\", String2=\"%s\"\n", str1, str2);
strcpy(str1, str2);
printf("---------------\n");
printf("\"We are copying string2 to string1\"\n");
printf("---------------\n");
printf("String after copying:\nString1=\"%s\", String2=\"%s\"\n\n", str1, str2);
break;
case 4:
printf("Enter first string: ");
scanf("%s", str1);
printf("Enter second string: ");
scanf("%s", str2);
j = strcmp(str1, str2);
if (j == 0) {
printf("Strings are same\n\n");
}
else {
printf("Strings are not the same\n\n");
}
break;
case 5:
exit(0);
break;
default:
printf("Invalid input. Please enter valid input. \n\n");
}
}
while (ch != 5);
return 0;
}
