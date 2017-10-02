#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    int i, j=0;
    char str1[100], str2[100];

    cout << "\t\t\t\t\t\tPALINDROME CHECKER"  << endl;
    cout <<"Enter the string to be checked: ";
    gets(str1);

    for (i = strlen(str1) - 1 ; i >= 0; i--){
        str2[j++] = str1[i];
    }
    str2[j]='\0';
    j = 0;
    cout << endl;
    for(i = 0; i < strlen(str1); i++){

            if(str1[i] != str2[j]){
            cout << "String is not a palindrome!" << endl;
            exit(1);
            }
        j++;
        }
    cout << "String is a palindrome" << endl;
return 0;

}
