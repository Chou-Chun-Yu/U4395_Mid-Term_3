#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(){
    int weight;
    float BMI, height;

    printf("�п�J����(cm)���魫(kg) :");
    while(scanf("%f %d", &height, &weight)!=EOF){
        if(height == 0 && weight == 0){
            break;
        }
        height /= 100;
        BMI = weight/pow(height, 2);

        if(BMI > 35){
            printf("BMI = %.2f, ���תέD\n", BMI);
        }else if(BMI >= 30){
            printf("BMI = %.2f, ���תέD\n", BMI);
        }else if(BMI >= 27){
            printf("BMI = %.2f, ���תέD\n", BMI);
        }else if(BMI >= 24){
            printf("BMI = %.2f, �L��\n", BMI);
        }else if(BMI >= 18.5){
            printf("BMI = %.2f, ���`\n", BMI);
        }else{
            printf("BMI = %.2f, �魫�L��\n", BMI);
        }
        printf("�п�J����(cm)���魫(kg) :");
    }

    return 0;
}
