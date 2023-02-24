/* 複数のint型要素を用意して、中身が偶数だった時は数値を出力し、奇数だった時は「奇数」と出力するプログラム。 */
#include <stdio.h>

int main(){
    int data[3] = {1, 2, 3}; //int data[] = {1, 2, 3}; でも良い
    int i;
    for(i=0; i<3; i++){
        if (data[i] % 2 == 0){
            printf("%d\n",data[i]);
        }else{
            printf("奇数\n");
        }
    }
    return 0;
}