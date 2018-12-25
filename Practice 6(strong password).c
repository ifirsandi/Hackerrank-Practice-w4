
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    /*char *numbers = "0123456789"
    char *lower_case = "abcdefghijklmnopqrstuvwxyz"
    char *upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    char *special_characters = "!@#$%^&*()-+"*/
    int n;
    scanf("%d", &n);
    char *s = (char *)malloc(10240 * sizeof(char));
    scanf("%s", s);
    bool isUP = false;
    bool isLO = false;
    bool isNU = false;
    bool isSP = false;
    int i=0;
    for(i=0;s[i]!='\0';i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            isUP = true;
        }
        else if (s[i] >= 'a' && s[i] <= 'z'){
            isLO =  true;
        }
        else if (s[i] >= '0' && s[i] <= '9'){
            isNU = true;
        }
        else {
            isSP = true;
        }
    }
    int count=0;
    if (isSP == false){
        //printf("spesial\n");
        count++;
    }
    if (isNU == false){
        //printf("number\n");
        count++;
    }
    if (isLO == false){
        //printf("lower case\n");
        count++;
    }
    if (isUP == false){
        //printf("upper case\n");
        count++;
    }
    if ((n+count)<6){
        count = 6-n;
    }
    printf ("%d", count);

    return 0;
}


