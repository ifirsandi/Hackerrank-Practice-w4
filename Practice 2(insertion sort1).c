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
        if (ar[i]<ar[i-1]){
            sort =i;
        }
    }
    int temp;
    for (int i=sort; i>0; i--){
        if (ar[i]<ar[i-1]){
            temp = ar[i];
            ar[i] = ar[i-1];
        } else {
            break;
        }
        for (int j=0; j<n; j++){
            printf ("%d ", ar[j]);
        }
        ar[i-1]=temp;
        printf("\n");
    }
    for (int j=0; j<n; j++){
            printf ("%d ", ar[j]);
    }

    return 0;
}
