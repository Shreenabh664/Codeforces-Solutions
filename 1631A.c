#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_test_cases;
    scanf("%d", &num_test_cases);
    for(int i = 0; i < num_test_cases; i++){
        int array_size;
        scanf("%d", &array_size);
        int *a = (int *)malloc(sizeof(int) * array_size);
        int *b = (int *)malloc(sizeof(int) * array_size);
        for(int j = 0; j < array_size; j++){
            scanf("%d", &a[j]);
        }
        for(int j = 0; j < array_size; j++){
            scanf("%d", &b[j]);
        }
        for(int j = 0; j < array_size; j++){
            if(b[j] > a[j]){
                int temp = a[j];
                a[j] = b[j];
                b[j] = temp;
            }
        }
        int max_a;
        for(int j = 0; j < array_size; j++){
            if(j == 0){
                max_a = a[j];
            }
            if(a[j] > max_a){
                max_a = a[j];
            }
        }
        int max_b;
        for(int j = 0; j < array_size; j++){
            if(j == 0){
                max_b = b[j];
            }
            if(b[j] > max_b){
                max_b = b[j];
            }
        }
        printf("%d\n", max_a * max_b);
    }
}
