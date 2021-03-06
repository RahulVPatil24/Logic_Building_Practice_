#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  struprx()
//
// Description   :  Write a program which accept string from user and convert it into 
//                  upper case.
//
// Input         :  String
//
// Output        :  String
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

void struprx(char *str)
{

    if (str == NULL)
    {
        return;
    }

    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
char arr[20];
printf("Enter string: \n");
scanf("%[^'\n']s",arr);
strlwrx(arr);
printf("Modified string is %s",arr);
return 0;
}