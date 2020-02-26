#include <stdio.h>
#include <stdlib.h>
int main(){
char val;
printf("Presione una tecla");
scanf("%c",&val);
if(val>=97 && val<=122){
    printf("Introdujo una letra");
}
else if(val>=65 && val<=90){
    printf("Introdujo una letra");
}
else if(val>=48 && val<=57){
    printf("Introdujo un numero");
}
else{
    printf("caracter no valido");
}

}
