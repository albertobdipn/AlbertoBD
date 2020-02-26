#include <stdio.h>
#include <stdlib.h>
int main(){
float x1,x2,y1,y2;
printf("Asigne numeros para calcular la pendiente:  \n");
printf("Asigne un número para y1: \n");
scanf("%f",&y1);
printf("Asigne un número para y2: \n");
scanf("%f",&y2);
printf("Asigne un número para x1: \n");
scanf("%f",&x1);
printf("Asigne un número para x2: \n");
scanf("%f",&x2);
if(y2-y1==0){
    printf("la pendiente es 0");
}
else if(x2-x1==0){
    printf("m es vertical");
}

else{
    printf("m= %f",(y2-y1)/(x2-x1));
}
}
