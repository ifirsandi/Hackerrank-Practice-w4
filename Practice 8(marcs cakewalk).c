
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>




int main()
{
    int n;
    scanf("%d", &n);
    long ar[n];
    long count=0;
    for (int i=0; i<n; i++){
        scanf("%ld", &ar[i]);
        //printf ("%ld ", ar[i]); 
    }
    //printf ("\n"); 
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            if (ar[i]<ar[j]){
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    long a;
    for (int i=0; i<n; i++){
        a=ar[i];
        for (int j=0; j<i; j++){
            a=a*2;
        }
        count = count + a;
        //printf ("%ld ", a);    
    }
    printf ("%ld", count);

    return 0;
}


