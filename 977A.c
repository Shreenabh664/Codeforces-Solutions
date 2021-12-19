#include <stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int lastd = n%10;
    for(;k>0;k--){
        int lastd = n%10;
        if(lastd!=0){
            n--;
        }
        else{n = n/10;}
    }
    printf("%d", n);
}
