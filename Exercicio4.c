#include <stdio.h>
#include <stdint.h>

#define endereco1 0x19
#define endereco2 0x76


typedef struct SENSOR{
    uint16_t Endereco;
    double leituras[5];
} SENSOR;

void Atribui(SENSOR *sensor, uint16_t endereco, double leitura[5]){
    sensor->Endereco=endereco;
    for(int i=0;i<5;i++){
        sensor->leituras[i]=leitura[i];
    }
}

void ExibeEndereco(uint16_t endereco){
    printf("O endereco do sensor e: %x\n", endereco);
}
void ExibeLeituras(double leitura[5]){
    printf("As leituras realizadas pelo sensor foram: ");
    for(int i=0;i<5;i++){
        printf("%.2lf C, ",leitura[i]);
    }
    printf("\n");
}
double Media(double leituras[5]){
    double m = 0.0;
    for(int i=0; i<5; i++){
        m+=leituras[i];
    }
    return m/5;
}

void VerificaTemperatura(double m){
    if (m>=30){
        printf("Calor\n");
    } else {
        printf("Temperatura Normal\n");
    }
}

int main(){
    SENSOR sensor1;
    SENSOR sensor2;

    double leituras1[5] = {7.08,19.90,23.30,31.77,32.43};
    double leituras2[5] = {27.06,30.23,40.67,31.12,32.00};

    Atribui(&sensor1,endereco1,leituras1);
    Atribui(&sensor2,endereco2,leituras2);

    ExibeEndereco(sensor1.Endereco);
    ExibeLeituras(sensor2.leituras);
    double m1, m2;

    m1 = Media(sensor1.leituras);
    VerificaTemperatura(m1);
    m2 = Media(sensor2.leituras);
    VerificaTemperatura(m2);   
    return 0;

}