#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int i;
    for(i = 0; n<=m; i++){
        n = 3*n;
        m = 2*m;
    }
    printf("%d", i);
}
