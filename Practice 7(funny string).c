
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
   int queries;
   scanf("%d", &queries);
   for (int q=0; q<queries; q++){
       char *s = (char *)malloc(10240 * sizeof(char));
    scanf("%s", s);
    int i;
    int count = 0;
    for(i=0;s[i]!='\0';i++){
      count++;
    }
    bool isPoli = false;
    for (int j=1; j<=count-1; j++){
        int a = s[j] - s[j-1];
        int b = s[count-j] - s[count-j-1];
        //printf("a=%d b=%d\n", a, b);
        if ((a==b) || (a==(-b)) ){
            isPoli = true;
        } else {
            isPoli=false;
            break;
        }
    }
    if (isPoli == true){
        printf("Funny\n");
    } else {
        printf("Not Funny\n");
    }
   }
    
    return 0;
}


