#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char *s = (char *)malloc(10240 * sizeof(char));
    scanf("%s", s);
    int i;
    int count = 1;
    for(i=0;s[i]!='\0';i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            //printf("\n");
            count++;
        }
        //printf("%c", s[i]);
      
    }
    printf ("%d", count);

    return 0;
}
