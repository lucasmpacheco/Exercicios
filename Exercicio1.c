#include <stdio.h>

float CalculaMedia(float nota1, float nota2){
    return (nota1+nota2)/2;
}

int main(){
    float n1,n2,m1;

    printf("Digite a primeira nota: ");
    scanf("%f",&n1);

    printf("Digite a segunda nota: ");
    scanf("%f",&n2);

    m1=CalculaMedia(n1,n2);

    printf("Tipo de dado utilizado: %d bytes\nMedia: %.2f\n",sizeof(m1),m1);

    if(m1>=5){
        printf("Status: Aprovado");
    } else{
        printf("Status: Reprovado");
    }
    return 0;

}