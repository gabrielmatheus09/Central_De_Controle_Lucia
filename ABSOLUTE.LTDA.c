#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
void limpar(){
    int c;
    while((c = getchar()) != '\n' && c !=EOF);
}
struct Operador
{
    int id;
    char nome[71];
    char setor[5];
    int nivel;
    int status;
    int quant;
};
struct Equipamento
{
    char idEquip;
    char tipo[20];
    char setor[5];
    int estado;
    int idOp;
    int priority;
};

int main(){
    struct Operador absolute_proletariado[50];
    int menu, i;
    setlocale(LC_ALL, "portuguese");
    do{
        printf("Oi: ");
        scanf("%d",&menu);
        switch(menu){
            case 1:
            printf("Escreva qual número registrar: ");
            scanf("%d", &i);
            printf("Cadastro de Operadores\n");
            printf("ID do operador: ");
            scanf("%d",&absolute_proletariado[i-1].id);
            printf("Nome do operador: ");
            limpar();
            fgets(absolute_proletariado[i-1].nome, 71, stdin);

            break;

            case 2:
            printf("");

            break;

            case 3:
            printf("");

            break;

            case 4:
            printf("");

            break;

            case 5:
            printf("");

            break;

            case 6:
            printf("");

            break;

        }
    }while(menu != 6);


}
