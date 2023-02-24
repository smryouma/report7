/* 100点満点採点した学生の成績をチェックし、A~F判定を返す関数。 */
#include <stdio.h>
char eval(int score); /* 関数プロトタイプ宣言 */

/* eval関数本体
  Args:
    int score; 採点結果
  Returns:
    char; 文字型（A~F判定）
*/
char eval(int score){
    char answer = 'F';
    if (score >= 90){
        answer = 'A';
    }else if (score >= 80){
        answer = 'B';
    }else if (score >= 70){
        answer = 'C';
    }else if (score >= 60){
        answer = 'D';
    }else{
        answer = 'F';
    }
    return answer;
}

int main(){
    int scores[] = {100, 70, 50};
    int num = sizeof(scores)/sizeof(int); /*  配列scoresの要素数をカウント。 */
    int i;
    char answer;

    for(i=0; i<num; i++){
        answer = eval(scores[i]);
        printf("%d -> %c\n",scores[i],answer);
    }
}