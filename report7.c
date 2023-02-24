#include <stdio.h>
#include <assert.h>

void array_check_print(int array[], int size);
void sort_result_print(int array[], int size);

void array_check_print(int array[], int size){
    assert(size>=2);  
    for(int i = 0; i<size; i++){
        assert(0 <= array[i] && array[i] <= 100);
    }
    printf("scores = ");
    for(int b = 0; b<size; b++){
        printf("%d ", array[b]);
    }    
    printf("\n");
}

void sort_result_print(int array[], int size){
    for(int i = 0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(array[i] < array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("result = ");
    for(int z = 0; z<size; z++){
        printf("%d ", array[z]);
    }
    printf("\n");
}

int main(){
    int score[5] = {0, 60, 70, 100, 90};
    const int SIZE = sizeof(score)/sizeof(int);
    array_check_print(score, SIZE);
    sort_result_print(score, SIZE);

    return 0;
}