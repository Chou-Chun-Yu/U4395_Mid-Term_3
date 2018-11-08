#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(){
    int weight;
    float BMI, height;

    printf("請輸入身高(cm)及體重(kg) :");
    while(scanf("%f %d", &height, &weight)!=EOF){
        if(height == 0 && weight == 0){
            break;
        }
        height /= 100;
        BMI = weight/pow(height, 2);

        if(BMI > 35){
            printf("BMI = %.2f, 重度肥胖\n", BMI);
        }else if(BMI >= 30){
            printf("BMI = %.2f, 中度肥胖\n", BMI);
        }else if(BMI >= 27){
            printf("BMI = %.2f, 輕度肥胖\n", BMI);
        }else if(BMI >= 24){
            printf("BMI = %.2f, 過重\n", BMI);
        }else if(BMI >= 18.5){
            printf("BMI = %.2f, 正常\n", BMI);
        }else{
            printf("BMI = %.2f, 體重過輕\n", BMI);
        }
        printf("請輸入身高(cm)及體重(kg) :");
    }

    return 0;
}
