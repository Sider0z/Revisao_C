#include <stdio.h>

int main(){
float desconto, valor, valor_final;

printf("\nDigite o valor do produto\n");
scanf("%f", &valor);

if(valor <=  2000)
{
    valor_final = valor - (valor * 0.1);  
}

else{
    if(valor > 2000 && valor <= 3000)
    {
        valor_final= valor - (valor * 0.05);
    }
}

if(valor > 3000 && valor<=5000)
{
    valor_final = valor - (valor * 0.03);
}

else
{
    if(valor>5000)
    {
        valor_final = valor - (valor * 0.02);
    }
}

    printf("O valor final do produto é..: %.2fR$", valor_final);

}