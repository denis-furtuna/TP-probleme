#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define DIMTEXT 100
#define DIMLINE 100
#define DIMTEXT2 256
#define DIMLINE2 100

//stiva
struct
{
    char text[DIMTEXT];
    int rand;
}st[DIMLINE];
int top=-1;
int randmax=0,randmax_vechi=0;

void push(char *x,int nr)
{
    if(top==DIMLINE-1)
    {
        printf("Stiva plina!\n");
        return ;
    }

    top++;
    strcpy(st[top].text,x);
    st[top].rand=nr;


}

void adaugare_text()
{
    char x[DIMTEXT];
    int nr;
    printf("Ce text vrei sa adaugi?\n");
    fgets(x,DIMTEXT,stdin);
    printf("Pe ce rand?\n");
    scanf("%d",&nr);
    if(randmax<nr)
    {
        randmax_vechi=randmax;
        randmax=nr;
    }
    else if(nr!=randmax && randmax_vechi<nr)randmax_vechi=nr;
    push(x,nr);
}

void undo()
{
    if(top==-1)
    {
        printf("Nu s-a adaugat text!\n");
        return ;
    }
    if(st[top].rand==randmax)randmax=randmax_vechi;
    top--;
}
void afisare()
{
    int j;
    for(int i=1;i<=randmax;++i)
    {
        for(j=top;j>=0;--j)
        {
            if(st[j].rand==i)
            {
                printf("%s",st[j].text);
                break;
            }
        }
        if(j==-1)printf("\n");
    }
}

//coada
struct
{
    char text[DIMTEXT2];
    int nr;
}coada[DIMLINE2];
int front=-1,rear=-1;

void primire(char *x,int y)
{
    if(rear==DIMLINE2-1)
    {
        printf("Coada plina!\n");
        return ;
    }
    if(front==-1)front=0;
    rear++;
    strcpy(coada[rear].text,x);
    coada[rear].nr=y ;
}

void transmitere()
{
    if(front>rear || rear==-1)
    {
        printf("Coada goala!\n");
        return ;
    }
    front++;
}
void verificare()
{
    printf("\n_________________\n");
    for(int i=front;i<=rear;++i)
        printf("Transmitator %d:%s",coada[i].nr,coada[i].text);
    printf("\n------------\n");
}
int main()
{
    /*Aplicatia 3.3
     Sa se implementeze cu ajutorul unei stive functia undo dintr-un fisier text. Functia undo permite utilizatorului sa se revina la o versiune mai veche a documentului, eliminand ultimile modificari. Pentru a implementa functia undo cu o stiva fiecare modificare va fi retinuta pe stiva, iar cand e necesar sa se revina la o versiune anterioara se va elimina din stiva ultima modificare adaugata. Pe stiva se va retine la fiecare modificare: textul nou scris (sir de maxim 100 de caractere), randul unde a fost scris (int).
    */
    // int test;
    // printf("\n------------------\n1-adaugare text\n2-undo\n3-afisare text final\n------------------\n");
    // scanf("%d%*c",&test);
    // while(test>=1 && test<=3)
    // {
    //     switch(test)
    //     {
    //         case 1:
    //         {
    //             adaugare_text();
    //             break;
    //         }
    //         case 2:
    //         {
    //             undo();
    //             break;
    //         }
    //         case 3:
    //         {
    //             afisare();
    //             break;
    //         }
    //     }
    //     if(test==3)break;
    //     printf("\n------------------\n1-adaugare text\n2-undo\n3-afisare text final\n------------------\n");
    //     scanf("%d%*c",&test);
    //
    // }

    /*Aplicatia 3.4
    Sa se implementeze cu ajutorul unei cozi un buffer care retine temporar informatiile
    primite de la diversi transmitatori (informatia este adaugata in coada) si le transmite mai apoi catre un receptor (informatia este eliminata din coada). Informatia primita in buffer are urmatoare structura: numar identificare transmitator (int), mesaj (sir de caractere de maxim 256 caractere).
    */
    // primire("salut\n",1);
    // primire("!\n",2);
    // verificare();
    // transmitere();
    // verificare();

}
