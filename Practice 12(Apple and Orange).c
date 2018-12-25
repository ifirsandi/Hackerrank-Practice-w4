
#include <stdio.h>
#include <stdlib.h>


// Complete the countApplesAndOranges function below.


int main()
{
    int s,t,m,n, count_a, count_b, a, b;
    int x=0;
    int y=0;
    //membaca jarak rumah
    scanf("%d", &s); scanf("%d", &t);
    //membaca tempat pohon
    scanf("%d", &m); scanf("%d", &n);
    //membaca jumlah yang jatuh
    scanf("%d", &count_a); scanf("%d", &count_b);
    for (int i=0; i<count_a; i++){
        scanf("%d", &a);
        //printf("jarak awal: %d \n", (a));
        if (((a+m)>(s-1)) && ((a+m)<(t+1))){
            x++;
            //printf("jarak: %d \n", (a+m));
        }
    }
    for (int i=0; i<count_b; i++){
        scanf("%d", &b);
        //printf("jarak awal: %d \n", (b));
        if (((n+b)>(s-1)) && ((n+b)<(t+1))){
            y++;
            //printf("jarak: %d \n", (n+b));
        }
    }
    printf ("%d\n%d", x, y);

    return 0;
}

