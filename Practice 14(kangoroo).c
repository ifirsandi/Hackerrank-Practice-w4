

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char* jawab = "gak";
    int x1,x2,v1,v2;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    if (v1==v2){
        printf ("NO");
        return 0;
    }
    int a = (x2-x1)%(v1-v2);
    if ((a == 0) && ((v1-v2)>0)){
        jawab = "YES";
    }   else {
        jawab= "NO";
    }

    printf ("%s",jawab);
    return 0;
}

