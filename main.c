#include <stdio.h>


void desenvolvimento(){
    printf("em desenvolvimento...\n");
}

void espaco(){
    printf("\n");
}

int main(){

    int escolha;

    printf("████  █   █ █   █  ███  █████  ███  █   █    ████  ████   ███\n");          // arte ASCII gerada em: https://coddy.tech/tools/pt/ascii-art-generator
    printf("█   █ █   █ ██  █ █     █     █   █ ██  █    █   █ █   █ █    \n");
    printf("█   █ █   █ █ █ █ █  ██ ████  █   █ █ █ █    ████  ████  █  ██\n");
    printf("█   █ █   █ █  ██ █   █ █     █   █ █  ██    █  █  █     █   █\n");
    printf("████   ███  █   █  ███  █████  ███  █   █    █   █ █      ███ \n");
    espaco();
    espaco();


    printf("Para entender melhor nosso projeto, vá para: https://github.com/pablohxs/Dungeon-RPG\n");

    printf("clique para continuar...");
    while (getchar() != '\n'); // pausando código...
    espaco();
    espaco();
    printf("+------------------------------------+\n");
    printf("|         [1] - Continuar            |\n");
    printf("|         [2] - Novo-Jogo            |\n");
    printf("|         [3] - Carregar             |\n");
    printf("+------------------------------------+\n");

    espaco(); // parametro para espacos
    espaco();


    while(1)
    {
         printf("escolha: ");
         scanf("%d", &escolha);

        if(escolha != 1 && escolha != 2 && escolha != 3){
            printf("\033[31m error! \033[0m\n");

        }
        else if(escolha == 1){
            desenvolvimento();
            break;
        }
        else if(escolha == 2){
            desenvolvimento();
            break;
        }
        else if(escolha == 3){
            desenvolvimento();
            break;
        }
    }
    return 0;
}


