#include <stdio.h>
#include <math.h>

int main(){
    const int num;
    scanf("%d", &num);
    if (num%2==0){
        if (num>2){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    else{
        printf("NO");
    }
}