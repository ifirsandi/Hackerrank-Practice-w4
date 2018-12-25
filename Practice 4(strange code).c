
#include <stdio.h>
#include <stdlib.h>



int main()
{
    long n;
    scanf("%ld", &n);
    long time=3;
    long value=3;
    while (time<n){
        value = value*2;
        time = time + value;
    }
    printf("%ld", (time+1-n));

    return 0;
}
