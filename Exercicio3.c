#include <stdio.h>
#include <stdint.h>

void print(uint8_t num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}
void ComparacaoBit(uint8_t num1, uint8_t num2){
    uint8_t comp;
    comp = num1 & num2;
    printf("Comparação bit a bit: ");
    print(comp);
}
void DeslocaEsquerda(uint8_t numleft){
    numleft = numleft << 1;
    printf("Deslocamento à esqueda: ");
    print(numleft);
}
void DeslocaDireita(uint8_t numright){
    numright = numright >> 1;
    printf("Deslocamento à direita: ");
    print(numright);
}
void Verifica(uint8_t num){
    if(num % 2 == 1){
        printf("O bit menos significativo é 1. \nInvertendo todos os bits... \nNúmero invertido: ");
        num = ~num;
        print(num);
    }
}
int main(){
    uint8_t N1 = 0b01100111;
    uint8_t N2 = 0b11011101;
    printf("Número Binário 1: ");
    print(N1);
    printf("Número Binário 2: ");
    print(N2);
    ComparacaoBit(N1,N2);
    DeslocaEsquerda(N2);
    DeslocaDireita(N1);
    Verifica(N2);

    return 0;
}