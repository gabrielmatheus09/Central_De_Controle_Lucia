#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
void limpar(){
    int c;
    while((c = getchar()) != '\n' && c !=EOF);
}
void troca(char str[])
{
    str[strcspn(str, "\n")] = '\0';
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
    char idEquip[4];
    int tipo;
    char setor[5];
    int estado;
    int idOp;
    int priority;
};
void Cadastrar_operadores(struct Operador absolute_proletariado[])
{
    system("cls");
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
    troca(absolute_proletariado[i-1].nome);
    printf("Setor do operador: ");
    limpar();
    fgets(absolute_proletariado[i-1].setor, 5, stdin);
    troca(absolute_proletariado[i-1].setor);
    printf("Nivel Operacional(1 - basico // 2 - intermediario // 3 - supervisor tecnico): ");
    scanf("%d", &absolute_proletariado[i-1].nivel);
    printf("Status do operador(1 - ativo(disponivel) // 2 - ocupado // 3 - inativo(fora de operacao) // 4 - bloqueado(temporareamente indisponivel): ");
    scanf("%d", &absolute_proletariado[i-1].status);
    printf("Quantidade de operacoes realizadas: ");
    scanf("%d", &absolute_proletariado[i-1].quant);
    system("pause");
}

void cadastrar_equipamentos(struct Equipamento absolute_equipamentos[])
{
    system("cls");
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
    printf("\n--------Cadastro de equipamentos--------\n\n");
    printf("ID do equipamento: ");
    limpar();
    fgets(absolute_equipamentos[i-1].idEquip, 4, stdin);
    troca(absolute_equipamentos[i-1].idEquip);
    printf("Tipo do equipamento(1 - drones // 2 - maquinas agricolas // 3 - empilhadeiras // 4 - misseis intercontinentais): ");
    scanf("%d", &absolute_equipamentos[i-1].tipo);
    printf("Setor associado: ");
    limpar();
    fgets(absolute_equipamentos[i-1].setor, 5, stdin);
    troca(absolute_equipamentos[i-1].setor);
    printf("Status do equipamento(1 - ativo(operando normalmente) // 2 - inativo(desligado, apto a se tornar ativo) // 3 - manutençao(indisponivel temporariamente): ");
    scanf("%d", &absolute_equipamentos[i-1].estado);
    printf("ID do operador: ");
    scanf("%d", &absolute_equipamentos[i-1].idOp);
    printf("Nivel de prioridade(1 - baixo(operacao simples) // 2 - media(importante) // 3 - alta(operacao critica): ");
    scanf("%d", &absolute_equipamentos[i-1].priority);
    system("pause");
}


int main(){
    system("cls");
    struct Operador absolute_proletariado[50];
    struct Equipamento absolute_equipamentos[150];
    int menu;
    do{
        printf(" ___ ___ __  __  __   _____ _  _ ___   ___  _ \n");
        printf("| _ ) __|  \\/  | \\ \\ / /_ _| \\| |   \\ / _ \\| |\n");
        printf("| _ \\ _|| |\\/| |  \\ V / | || .` | |) | (_) |_|\n");
        printf("|___/___|_|  |_|   \\_/ |___|_|\\_|___/ \\___/(_)\n\n");
        printf("1 - Cadastrar Operador\n");
        printf("2 - Cadastrar Equipamento\n");
        printf("3 - Atualizar Sistema\n");
        printf("4 - Consultar Registros\n");
        printf("5 - Relatorios Operacionais\n");
        printf("6 - Fechar Programa\n");
        printf("Escreva qual acao deseja realizar entre as opcoes acima: ");
        scanf("%d",&menu);
        switch(menu){
            case 1:
            Cadastrar_operadores(absolute_proletariado);
            break;

            case 2:
            cadastrar_equipamentos(absolute_equipamentos);
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
