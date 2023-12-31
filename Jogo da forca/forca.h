#define TAMANHO_PALAVRA 20

typedef struct{
    int dif;
    char personagem[4][3];
}partida;

typedef struct{
    char* nome;
    int pontos;
    char data[11];
}pontuacao;

void chuta(int* c, char a[26]);
void jachutou(int* achou,int i, int c, char p[TAMANHO_PALAVRA], char a[26]);
void imprimepalavra(char p[TAMANHO_PALAVRA], int c, char a[26]);
void escolhepalavra(char p[TAMANHO_PALAVRA], partida* jogo);
int acertou(char p[TAMANHO_PALAVRA], int c, char a[26]);
int chuteserrados(int c, char p[TAMANHO_PALAVRA], char a[26]);