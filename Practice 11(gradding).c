
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int numbers[100];
    int count;
    int a;
    
    scanf("%d", &count);
    //printf("%d", count);
    //a = 102%3;
    //printf("%d", a);
    for(int i = 0; i < count; i++)
  {
    scanf("%d", &numbers[i]);
     if (numbers[i]<38){
            printf("%d\n", numbers[i]);
            continue;
     }
    if ((numbers[i]%5)>2){
        numbers[i]=numbers[i] - (numbers[i]%5) + 5 ;
        printf("%d\n", numbers[i]);
        continue;
        }
         printf("%d\n", numbers[i]);
    }
    return 0;
}


