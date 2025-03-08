#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
typedef struct
{
    char nume[20];
    double nota;
}student;

int comp(const void *el1,const void *el2)
{
    const student *x=(const student *)el1;
    const student *y=(const student *)el2;
    if(x->nota>y->nota)return -1;
    else if(x->nota<y->nota)return 1;
    else if(x->nota==y->nota)
    {
        int nr=strcmp(x->nume,y->nume);
        if(nr>0)return 1;
        if(nr<0)return -1;
    }
    return 0;
}
int neg(int x)
{
    if(x>=0)return 0;
    return 1;
}
void ex2(int *v,int *n,int (*cond)(int))
{
    for(int i=0;i<*n;++i)
    {
        if(!cond(v[i]))
        {
            for(int j=i;j<*n-1;++j)
                v[j]=v[j+1];
            (*n)--;
            i--;
        }
    }
}
int cresc(const void *el1,const void *el2)
{
    const int * x=(const int *)el1;
    const int * y=(const int *)el2;
    return *x-*y;
}

void tabelare(double a,double b,int n,double(*f)(double))
{
    double pas=(b-a)/n;
    for(double i=a;i<=b;i=i+pas)
        printf("%f %f\n",i,f(i));
}
double g(double x)
{
    return (x*x*x+4)/(x*x+5);
}

int a(char *s)
{
    return strlen(s);
}
int b(char *s)
{
    int c=0;
    for(int i=0;i<strlen(s);++i)
        if(strchr("aeiouAEIOU",s[i])!=NULL)c++;
    return c;
}
int c(char *s)
{
    int c=0;
    for(int i=0;i<strlen(s);++i)
        if(isupper(s[i]))c++;
    return c;
}
int d(char *s)
{
    return s[strlen(s)-1]-s[0];
}

int main(int argc,char **argv)
{
    /*Aplicația 2.1:
     Se cere un număr n și apoi un vector de n rezultate ale studenților la un examen. Fiecare rezultat
     este definit prin (nume,nota). Se cere să se sorteze folosind qsort vectorul în ordinea notelor, notele cele mai mari
     fiind primele. Dacă două note sunt identice, rezultatele respective se vor sorta în ordinea alfabetică a numelor.
     */
    // int n;
    // student *v;
    // scanf("%d",&n);
    // if((v=malloc(n*sizeof(student)))==NULL)
    // {
    //     perror(NULL);
    //     exit(1);
    // }
    // for(int i=0;i<n;++i)
    //     scanf("%19s %lf",v[i].nume,&v[i].nota);
    // qsort(v,n,sizeof(student),comp);
    // for(int i=0;i<n;++i)
    //     printf("%s %f\n",v[i].nume,v[i].nota);
    // free(v);

    /*Aplicația 2.2
     Să se implementeze o funcție care primește ca parametri un vector de întregi, numărul elementelor
    din vector transmis prin adresă și un predicat care testează dacă un întreg îndeplinește o anumită condiție. Funcția
    va sterge din vector toate elementele care nu îndeplinesc condiția dată și va actualiza numărul elementelor cu
    numărul de elemente rămas în vector. Să se testeze funcția cu un predicat care testează dacă un număr este
    negativ și să se afișeze vectorul rezultat.*/
    // int v[]={1,2,-1,1,-5},n=5;
    // ex2(v,&n,neg);
    // for(int i=0;i<n;++i)
    //     printf("%d ",v[i]);

    /*Aplicația 2.3
    Se introduce un număr întreg n<10 și apoi n numere de tip float. Să se folosească funcția qsort
    pentru a sorta aceste numere în mod crescător. Se va introduce apoi un număr x de tip float. Folosind funcția
    bsearch, să se determine dacă x există în vectorul sortat. Se pot consulta paginile de manual pentru funcțiile qsort
    și bsearch.*/
    // int n;
    // float v[10];
    // scanf("%d",&n);
    // for(int i=0;i<n;++i)
    //     scanf("%f",&v[i]);
    // qsort(v,n,sizeof(int),cresc);
    // for(int i=0;i<n;++i)
    //     printf("%2f ",v[i]);
    // float x;
    // scanf("%f",&x);
    // if(bsearch(&x,v,n,sizeof(int),cresc))
    //     printf("apare x\n");
    // else printf("nu apare x\n");

    /*Aplicația 2.4 si Subiectul 2.1
    Să se implementeze o funcție care tabelează o funcție matematică de un parametru, primită ca
    argument. Funcția tabelată primește un parametru de tip double și returnează o valoare tot de tip double. Funcția
    de tabelare va primi ca parametri: a și b - capetele de tip double ale intervalului închis de tabelat, n - un număr
    întreg care arată în câte segmente egale se împarte intervalul [a,b], incluzând capetele acestuia și f - funcția de
    tabelat. Să se testeze funcția de tabelare cu valori a,b și n citite de la tastatură, tabelând funcțiile cos, sqrt și fabs
    din math.h*/
    // double a=-1,b=1;
    // int n=10;
    // tabelare(a,b,n,g);

    /*Subiectul 2.2
    Se citesc mai multe cuvinte din linia de comandă. Cu ajutorul pointerilor la funcții (un vector de
    pointeri la funcții) să se apeleze într-o structură repetitivă următoarele funcții. Să se afișeze rezultatele pentru
    fiecare cuvânt pe ecran și în fișierul text CUVINTE.TXT.
    a) Primește parametru un șir de caractere și returneză lungimea șirului.
    b) Primește parametru un șir de caractere și returneză numărul de vocale din text.
    c) Primește parametru un șir de caractere și returneză numărul de litere mari din text.
    d) Primește parametru un șir de caractere și returneză diferența codurilor ASCII ale primului caracter și al ultimului
    caracter.*/
    // int (*functii[])(char*) ={a,b,c,d};
    // for(int i=1;i<argc;++i)
    // {
    //     printf("pentru %s -> ",argv[i]);
    //     for(int j=0;j<4;++j)
    //         printf("%d ",functii[j](argv[i]));
    //     printf("\n");
    // }

    return 0;
}
