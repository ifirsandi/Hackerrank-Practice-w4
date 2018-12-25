
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf ("%d", &n);
    int ar[n];
    int sort;
    for (int i=0; i<n; i++){
        scanf ("%d", &ar[i]);
    }
    int temp;
    /*for (int j=0; j<n; j++){
            printf ("%d ", ar[j]);
    }
    printf("\n");*/
    for (int i=1; i<n; i++){
        if (ar[i]<ar[i-1]){
            int k=i;
            //temp = ar[i];
            while (ar[k]<ar[k-1]){
                if (k==0){
                    break;
                }
                temp = ar[k];
                ar[k]=ar[k-1];
                ar[k-1]=temp;
                k--;
            }
        }
        for (int j=0; j<n; j++){
            printf ("%d ", ar[j]);
        }
        printf("\n");
    }

    return 0;
}


