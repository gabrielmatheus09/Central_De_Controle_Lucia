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
    char nome[70];
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
void Cadastrar(struct Operador absolute_proletariado[])
{
    int i;
    printf("  ___   _   ___   _   ___ _____ ___  ___    ___  ___ \n");
    printf(" / __| /_\\ |   \\ /_\\ / __|_   _| _ \\/ _ \\  |   \\| __|\n");
    printf("| (__ / _ \\| |) / _ \\\\__ \\ | | |   / (_) | | |) | _| \n");
    printf(" \\___/_/ \\_\\___/_/ \\_\\___/_|_| |_|_\\\\___/__|___/|___|\n");
    printf(" / _ \\| _ \\ __| _ \\  /_\\ |   \\ / _ \\| _ \\ __/ __|    \n");
    printf("| (_) |  _/ _||   / / _ \\| |) | (_) |   / _|\\__ \\    \n");
    printf(" \\___/|_| |___|_|_\\/_/ \\_\\___/ \\___/|_|_\\___|___/    \n");
    printf("Escreva qual numero deseja registrar: ");
    scanf("%d", &i);
    printf("\n--------Cadastro de Operadores--------\n\n");
    printf("ID do operador: ");
    scanf("%d",&absolute_proletariado[i-1].id);
    printf("Nome do operador: ");
    limpar();
    fgets(absolute_proletariado[i-1].nome, 70, stdin);

}
int main(){
    struct Operador absolute_proletariado[50];
    int menu;
    do{
        printf(" ___ ___ __  __  __   _____ _  _ ___   ___  _ \n");
        printf("| _ ) __|  \\/  | \\ \\ / /_ _| \\| |   \\ / _ \\| |\n");
        printf("| _ \\ _|| |\\/| |  \\ V / | || .` | |) | (_) |_|\n");
        printf("|___/___|_|  |_|   \\_/ |___|_|\\_|___/ \\___/(_)\n\n");
        printf("Escreva qual ação deseja realizar: ")
        scanf("%d",&menu);
        switch(menu){
            case 1:
            Cadastrar(absolute_proletariado);
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
