#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int areDistinct(int totest){
    int i,j,k,l;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            for(k=0;k<10;k++){
                for(l=0;l<10;l++){
                    if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l){
                        if(totest==(i*1000+j*100+k*10+l)){
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int main(){
    int y;
    scanf("%d",&y);
    for(int i=y+1;i<=9999;i++){
        if(areDistinct(i)){
            printf("%d",i);
            break;
        }
    }
}
