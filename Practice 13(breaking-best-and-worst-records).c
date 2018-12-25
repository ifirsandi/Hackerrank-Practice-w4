https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    long long arr[10000];
    long long max, min;
    int arr_c, count_max, count_min;
    count_max=0;
    count_min=0;
    scanf("%d", &arr_c);
    scanf("%d", &arr[0]);
    max = arr[0];
    min = arr[0];
    for (int i=1; i<arr_c; i++){
        scanf("%d", &arr[i]);
        if (arr[i]>max){
            count_max++;
            max = arr[i];
        }
        if (arr[i]<min){
            count_min++;
            min = arr[i];
        }
    }
    printf ("%d %d", count_max, count_min);
    return 0;
}

