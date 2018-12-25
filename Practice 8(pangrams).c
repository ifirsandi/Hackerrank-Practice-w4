
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int count=0;
    int hasil;
    bool bolA=false; bool bolB=false; bool bolC=false; bool bolD=false; bool bolE=false;
    bool bolF=false; bool bolG=false; bool bolH=false; bool bolI=false; bool bolJ=false;
    bool bolK=false; bool bolL=false; bool bolM=false; bool bolN=false; bool bolO=false;
    bool bolP=false; bool bolQ=false; bool bolR=false; bool bolS=false; bool bolT=false;
    bool bolU=false; bool bolV=false; bool bolW=false; bool bolX=false; bool bolY=false;
    bool bolZ=false; 
    while (count <=26 && hasil<1000){
        char a;
        hasil++;
        scanf("%c", &a);
        //printf("%c", a);
        if (a >= 'a' && a <= 'z') {
            a = a - 32;
        }
        if (a == '\0'){
            break;
        }
        switch(a) {
        case 'A':
            if(bolA==false){
                bolA=true;
                count++;
            }
            break;
        case 'B' :
            if(bolB==false){
                bolB=true;
                count++;
            }
            break;
        case 'C' :
            if(bolC==false){
                bolC=true;
                count++;
            }
            break;
        case 'D' :
            if(bolD==false){
                bolD=true;
                count++;
            }
            break;
        case 'F' :
            if(bolF==false){
                bolF=true;
                count++;
            }
            break;
        case 'G' :
            if(bolG==false){
                bolG=true;
                count++;
            }
            break;
        case 'H' :
            if(bolH==false){
                bolH=true;
                count++;
            }
            break;
        case 'I' :
            if(bolI==false){
                bolI=true;
                count++;
            }
            break;
        case 'J' :
            if(bolJ==false){
                bolJ=true;
                count++;
            }
            break;
        case 'K' :
            if(bolK==false){
                bolK=true;
                count++;
            }
            break;
        case 'L' :
            if(bolL==false){
                bolL=true;
                count++;
            }
            break;
        case 'M' :
            if(bolM==false){
                bolM=true;
                count++;
            }
            break;
        case 'N' :
            if(bolN==false){
                bolN=true;
                count++;
            }
            break;
        case 'O' :
            if(bolO==false){
                bolO=true;
                count++;
            }
            break;
        case 'P' :
            if(bolP==false){
                bolP=true;
                count++;
            }
            break;
        case 'Q' :
            if(bolQ==false){
                bolQ=true;
                count++;
            }
            break;
        case 'R' :
            if(bolR==false){
                bolR=true;
                count++;
            }
            break;
        case 'S' :
            if(bolS==false){
                bolS=true;
                count++;
            }
            break;
        case 'T' :
            if(bolT==false){
                bolT=true;
                count++;
            }
            break;
        case 'U' :
            if(bolU==false){
                bolU=true;
                count++;
            }
            break;
        case 'V' :
            if(bolV==false){
                bolV=true;
                count++;
            }
            break;
        case 'W' :
            if(bolW==false){
                bolW=true;
                count++;
            }
            break;
        case 'X' :
            if(bolX==false){
                bolX=true;
                count++;
            }
            break;
        case 'Y' :
            if(bolY==false){
                bolY=true;
                count++;
            }
            break;
        case 'Z' :
            if(bolZ==false){
                bolZ=true;
                count++;
            }
            break;
        default :
            break;
    }   
    }
    //printf("%d", count);
    if (count==25){
        printf("pangram");
    } else {
        printf("not pangram");
    }

    return 0;
}

