#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define A 10
#define B 50
void Cargar(char[A][B],char[],int*);
void Procesar(char[A][B],int*,int);
void ImpresionT(char[A][B],int,int);

int main()
{
    system("color F0");
    printf("\n\t\t\tArreglo Bidimensional Tipo Cadena.\n\n");
    char cadena[A][B],fin[]="OSO";
    int conta=0,imp=0;
    Cargar(cadena,fin,&conta);
    Procesar(cadena,&imp,conta);
    ImpresionT(cadena,conta,imp);
    getchar();
    getchar();
}

void Cargar(char cadena[A][B], char fin[], int *conta)
{
    int x,i=0;
    char aux[B];
    do
    {
        printf("\n\n\t\t\t\tIngresa la Cadena.\n");
        printf("\nPara Dejar de Cargar Cadenas, Debera Ingresar la Palabras 'OSO'.\n\n");
        gets(aux);
        fflush(stdin);
        x=strcmp(fin,aux);
        if(x!=0)
        {
            strcpy(cadena[i],aux);
            ++i;
            *conta=i;
        }
    }while(i<A && x!=0);
}

void Procesar(char cadena[A][B], int *imp, int conta)
{
    do
    {
        printf("\n\nIngrese el Numero de la Cadena que Desea Imprimir: ");
        scanf("%d",imp);
        if(*imp<1 || *imp>conta)
        {
            printf("\n\nError, Esa Cadena No Existe. Digita de Nuevo.\n\n");
        }
    }while(*imp<1 || *imp>conta);
}

void ImpresionT(char cadena[A][B], int conta, int imp)
{
    int i;
    printf("\n\n\t\tSe va a Imprimir la Cadena %d\n\n",imp);
    puts(cadena[imp-1]);
    printf("\n\n\nAhora se van a Imprimir Todas las Cadenas Ingresadas.\n\n");
    for(i=0;i<conta;++i)
    {
        puts(cadena[i]);
    }
}
