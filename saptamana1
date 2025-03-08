#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>


int main()
{
    /* Aplicația 8.3
    Se citește de la tastatură un număr n<=10 și un număr m<=20. Se cere să se scrie un program care
generează o matrice cu m linii și n coloane în care sunt puse toate numerele de la 1,2,3,...,m*n. Se vor utiliza
pointeri.*/
    // int **a;
    // int m,n;
    // printf("Nr linii:");
    // scanf("%d",&m);
    // printf("Nr coloane:");
    // scanf("%d",&n);
    // if((a=malloc(m*sizeof(int*)))==NULL)
    // {
    //     perror(NULL);
    //     exit(1);
    // }
    // for(int i=0;i<m;++i)
    // {
    //     if((a[i]=malloc(n*sizeof(int)))==NULL)
    //     {
    //         for(i--;i>=0;--i)
    //             free(a[i]);
    //         free(a);
    //         perror(NULL);
    //         exit(1);
    //     }
    // }
    // for(int i=0;i<m;++i)
    // {
    //     for(int j=0;j<n;++j)
    //         *(*(a+i)+j)=i*n+j+1 ;
    // }
    //
    // for(int i=0;i<m;++i)
    // {
    //     for(int j=0;j<n;++j)
    //         printf("%d ",*(*(a+i)+j));
    //     printf("\n");
    // }
    //
    // for(int i=0;i<m;++i)
    //     free(a[i]);
    // free(a);


    /* Aplicația 8.4
    Se citește de la tastatură o matrice pătratică cu n<=50 linii și coloane. Să se interschimbe elementele
de deasupra diagonalei principale, considerată ca axă de simetrie, cu elementele de sub diagonala principală,
elementele de pe diagonala principală rămânând la fel.*/
    // int **a;
    // int n,m;
    // scanf("%d %d",&n,&m);
    // if((a=malloc(n*sizeof(int *)))==NULL)
    // {
    //     perror(NULL);
    //     exit(1);
    // }
    // for(int i=0;i<n;++i)
    // {
    //     if((a[i]=malloc(m*sizeof(int)))==NULL)
    //     {
    //         for(--i;i>=0;--i)
    //             free(a[i]);
    //         free(a);
    //         perror(NULL);
    //         exit(1);
    //     }
    // }
    // for(int i=0;i<n;++i)
    //     for(int j=0;j<m;++j)
    //         scanf("%d",*(a+i)+j);
    //
    // for(int i=0;i<n;++i)
    //     for(int j=i+1;j<m;++j)
    //     {
    //         int aux;
    //         aux=a[i][j];
    //         a[i][j]=a[j][i];
    //         a[j][i]=aux;
    //     }
    // for(int i=0;i<n;++i)
    // {
    //     for(int j=0;j<m;++j)
    //         printf("%d ",*(*(a+i)+j));
    //     printf("\n");
    // }



    /* Aplicatia 8.5
     Se citește de la tastatură o matrice cu n<=20 linii și coloane. Să se memoreze într-un vector suma tuturor elementelor de pe fiecare linie și într-un alt vector, suma tuturor elementelor de pe fiecare coloană. Să se afișeze cei doi vectori. Se vor utiliza pointeri atât pentru vectori cât și pentru matrici.*/
    // int **a;
    // int *l;
    // int *c;
    // int n;
    // scanf("%d",&n);
    // if((a=(int**)malloc(n*sizeof(int*)))==NULL)
    // {
    //     perror(NULL);
    //     exit(1);
    // }
    // if((l=(int *)malloc(n*sizeof(int)))==NULL)
    // {
    //     perror(NULL);
    //     exit(1);
    // }
    // if((c=(int *)malloc(n*sizeof(int)))==NULL)
    // {
    //     perror(NULL);
    //     exit(1);
    // }
    // memset(l,0,n*sizeof(int));
    // memset(c,0,n*sizeof(int));
    // for(int i=0;i<n;++i)
    // {
    //     if((a[i]=(int*)malloc(n*sizeof(int)))==NULL)
    //     {
    //         for(--i;i>=0;--i)
    //             free(a[i]);
    //         free(a);
    //         perror(NULL);
    //         exit(1);
    //     }
    // }
    //
    // for(int i=0;i<n;++i)
    //     for(int j=0;j<n;++j)
    //         scanf("%d",&a[i][j]);
    //
    // for(int i=0;i<n;++i)
    //     for(int j=0;j<n;++j)
    //     {
    //         *(l+i)+=*(*(a+i)+j);
    //         *(c+j)+=*(*(a+i)+j);
    //     }
    //
    // for(int i=0;i<n;++i)
    //     printf("linia %d->%d \ncoloana %d->%d\n\n",i,*(l+i),i,*(c+i));
    // for(int i=0;i<n;++i)
    //     free(a[i]);
    // free(a);
    // free(c);
    // free(l);
    /*Aplicația 8.6
        Se citește un număr n<=10 de persoane, fiecare persoană fiind identificată printr-un număr între
    0..n-1. O persoană poate fi prietenă cu oricare alte persoane. După ce s-a citit n, se vor citi pentru fiecare persoană
    prietenii ei pe rând. Să se afișeze pentru fiecare persoană câți prieteni are.*/

        // int *v;
        // char *x;
        // int n;
        // scanf("%d%*c",&n);
        // if((v=malloc(n*sizeof(int)))==NULL)
        // {
        //     perror(NULL);
        //     exit(1);
        // }
        // memset(v,0,n*sizeof(int));
        // if((x=malloc((2*n+1)*sizeof(int)))==NULL)
        // {
        //     perror(NULL);
        //     exit(1);
        // }
        // int c;
        // for(int i=0;i<n;++i)
        // {
        //     printf("Prietenii lui %d sunt:",i);
        //     fgets(x,2*n+1,stdin);
        //     c=0;
        //
        //
        //         for(int j=0;j<strlen(x)-1;++j)
        //         {
        //             if(isdigit(x[j]) && x[j+1]==' ')c++;
        //         }
        //         if(isdigit(x[strlen(x)-2]))c++;
        //
        //
        //     *(v+i)=c;
        // }
        // for(int i=0;i<n;++i)
        //     printf("%d are %d prieteni \n",i,*(v+i));
        // free(v);
    /*Aplicația 8.7:
      Se citește un număr n<=10 de orașe și apoi pentru fiecare 2 orașe se citește distanța directă dintre
ele. Dacă distanța este 0, înseamnă că între acele orașe nu există drum direct. Să se afișeze perechea de orașe
cele mai apropiate între ele în mod direct.*/
    // int n,nr;
    // int o1min=0,o2min=0,distmin=-1;
    // scanf("%d",&n);
    // for(int i=1;i<=n;++i)
    //     for(int j=i+1;j<=n;++j)
    //     {
    //         printf("intre orasul %d si %d:",i,j);
    //         scanf("%d",&nr);
    //         if(nr!=0)
    //         {
    //             if(distmin==-1 || distmin>nr)
    //             {
    //                 distmin=nr;
    //                 o1min=i;
    //                 o2min=j;
    //             }
    //         }
    //
    //     }
    // if(distmin==-1)
    //     printf("Nu exista legaturi intre orase");
    // else printf("Distanta minima dintre orasul %d si orasul %d este %d",o1min,o2min,distmin);

    /*Aplicația 8.8
    Se citesc numerele m,n,p fiecare mai mici decat 10, apoi se citesc matricile a[m][n] și b[n][p]. Se
    cere să se calculeze matricea „c” care rezultă din înmulțirea matricilor a cu b și să se afișeze.*/
    // int **a,**b,**c;
    // int m,n,p;
    // scanf("%d %d %d",&m,&n,&p);
    // if((a=malloc(m*sizeof(int*)))==NULL || (b=malloc(n*sizeof(int*)))==NULL || (c=malloc(p*sizeof(int*)))==NULL)
    // {
    //     perror(NULL);
    //     exit(1);
    // }
    // for(int i=0;i<m;++i)
    // {
    //     if((a[i]=malloc(n*sizeof(int)))==NULL)
    //     {
    //         for(--i;i>=0;--i)
    //             free(a[i]);
    //         free(a);
    //         perror(NULL);
    //         exit(1);
    //     }
    // }
    // for(int i=0;i<n;++i)
    // {
    //     if((b[i]=malloc(p*sizeof(int)))==NULL)
    //     {
    //
    //         for(--i;i>=0;--i)
    //             free(b[i]);
    //         free(b);
    //         for(i=m-1;i>=0;--i)
    //             free(a[i]);
    //         free(a);
    //         perror(NULL);
    //         exit(1);
    //     }
    // }
    // for(int i=0;i<m;++i)
    // {
    //     if((c[i]=malloc(p*sizeof(int)))==NULL)
    //     {
    //         for(--i;i>=0;--i)
    //             free(c[i]);
    //         for(i=m-1;i>=0;--i)
    //             free(a[i]);
    //         for(i=n-1;i>=0;--i)
    //             free(b[i]);
    //         free(a);
    //         free(b);
    //         free(c);
    //         perror(NULL);
    //         exit(1);
    //     }
    // }
    // for(int i=0;i<m;++i)
    //     for(int j=0;j<n;++j)
    //         scanf("%d",&a[i][j]);
    // for(int i=0;i<n;++i)
    //     for(int j=0;j<p;++j)
    //         scanf("%d",&b[i][j]);
    //
    //
    // for(int i=0;i<m;++i)
    //     for(int j=0;j<p;++j)
    //         {
    //             c[i][j]=0;
    //             for(int q=0;q<n;++q)
    //             c[i][j]+=a[i][q]*b[q][j];
    //
    //         }
    // for(int i=0;i<m;++i)
    // {
    //     for(int j=0;j<p;++j)
    //         printf("%d ",c[i][j]);
    //     printf("\n");
    // }


    /*Aplicația 8.9
     Se citește un număr n<=10. Se cere să se inițializeze o matrice a[n][n] cu 1 pe diagonale și cu 0 în
rest. Să se afișeze matricea.*/
    // int n;
    // int a[11][11]={0};
    // scanf("%d",&n);
    // while(n>=11)
    // {
    //     printf("un nr mai mic sau egal decat 10!!\n");
    //     scanf("%d",&n);
    // }
    // for(int i=0;i<n;++i)
    // {
    //     a[i][i]=1;
    //     a[i][n-i-1]=1;
    // }
    // for(int i=0;i<n;++i)
    // {
    //     for(int j=0;j<n;++j)
    //         printf("%d ",a[i][j]);
    //     printf("\n");
    // }

    /*Subiect 8.1
    Se citesc de la tastatură două numere n și m, n>=m. Pe urmă se citesc două matrici pătratice de
    dimensiuni n, respectiv m, conținând numere întregi. Afișați toate pozitiile unde a doua matrice apare în prima
    matrice. Afișarea se va face pe ecran sub forma unor perechi de forma (linie, coloană). Dacă a doua matrice nu
    apare în prima matrice, se va afișa textul “Nu apare".*/
    // int n,m;
    // int **a,**b;
    // scanf("%d %d",&n,&m);
    // while(n<m)
    // {
    //     printf("n trebuie sa fie mai mare sau egal decat m!!\n");
    //     scanf("%d %d",&n,&m);
    // }
    //
    // if((a=malloc(n*sizeof(int*)))==NULL || (b=malloc(m*sizeof(int*)))==NULL)
    // {
    //     perror(NULL);
    //     exit(1);
    // }
    // for(int i=0;i<n;++i)
    // {
    //     if((a[i]=malloc(n*sizeof(int)))==NULL)
    //     {
    //         for(--i;i>=0;--i)
    //             free(a[i]);
    //         free(a);
    //         perror(NULL);
    //         exit(1);
    //     }
    // }
    // for(int i=0;i<m;++i)
    // {
    //     if((b[i]=malloc(m*sizeof(int)))==NULL)
    //     {
    //
    //         for(--i;i>=0;--i)
    //             free(b[i]);
    //         free(b);
    //         for(i=n-1;i>=0;--i)
    //             free(a[i]);
    //         free(a);
    //         perror(NULL);
    //         exit(1);
    //     }
    // }
    //
    // for(int i=0;i<n;++i)
    //     for(int j=0;j<n;++j)
    //         scanf("%d",&a[i][j]);
    // // printf("\n");
    // // printf("--------\n");
    // // for(int i=0;i<n;++i)
    // // {
    // //     for(int j=0;j<n;++j)
    // //         printf("%d ",a[i][j]);
    // //     printf("\n");
    // // }
    //
    // for(int i=0;i<m;++i)
    //     for(int j=0;j<m;++j)
    //         scanf("%d",&b[i][j]);
    //
    // // printf("\n");
    // // printf("--------\n");
    // // for(int i=0;i<m;++i)
    // // {
    // //     for(int j=0;j<m;++j)
    // //         printf("%d ",b[i][j]);
    // //     printf("\n");
    // // }
    // bool ok;
    // int c=0;
    // for(int i=0;i<n;++i)
    //     for(int j=0;j<n;++j)
    //     {
    //         if(i+m-1<n && j+m-1<n)
    //         {
    //             ok=true;
    //             for(int i2=0;i2<m && ok;++i2)
    //                 for(int j2=0;j2<m && ok;++j2)
    //                     if(a[i+i2][j+j2]!=b[i2][j2])ok=false;
    //
    //             if(ok)
    //             {
    //                 printf("(%d,%d) ",i,j);
    //                 c++;
    //             }
    //         }
    //
    //
    //     }
    // if(c==0)printf("Nu apare");


    /* Subiect 8.2
     Se citesc de la tastatură un număr n și o matrice pătratică de dimensiune n conținând litere din alfabet. Pe urmă se citește de la tastatură un cuvânt. Verificați dacă respectivul cuvânt se poate construi parcurgând literele matricii pe verticală în sus sau în jos sau pe orizontală spre stânga sau spre dreapta. Afișați toate pozițiile de unde trebuie începută parcurgerea, precum și sensul de parcurgere necesar pentru a construi cuvântul.
     */
    // int n;
    // scanf("%d ",&n);
    // char **a;
    // char *cuv;
    // if((a=(char**)malloc(n*sizeof(char*)))==NULL)
    // {
    //     perror(NULL);
    //     exit(1);
    // }
    // for(int i=0;i<n;++i)
    // {
    //     if((a[i]=(char*)malloc(n*sizeof(char)))==NULL)
    //     {
    //         for(--i;i>=0;--i)
    //             free(a[i]);
    //         free(a);
    //         perror(NULL);
    //         exit(1);
    //     }
    // }
    // if((cuv=(char *)malloc(n*sizeof(char)))==NULL)
    // {
    //     perror(NULL);
    //     exit(1);
    // }
    //
    //
    // for(int i=0;i<n;++i)
    //     for(int j=0;j<n;++j)
    //     {
    //         scanf("%c ",&a[i][j]);
    //
    //
    //     }
    //
    // fgets(cuv,n+1,stdin);
    //
    // while(strlen(cuv)==0)
    // {
    //    fgets(cuv,n,stdin);
    // }
    // // printf("cuvant: %s",cuv);
    // // for(int i=0;i<n;++i)
    // // {
    // //     for(int j=0;j<n;++j)
    // //         printf("%c",a[i][j]);
    // //     printf("\n");
    // // }
    // bool st,dr,jos,sus,ok=0;
    // for(int i=0;i<n;++i)
    //     for(int j=0;j<n;++j)
    //     {
    //         int k,l,c;
    //         //stanga
    //
    //             st=1;
    //             for(l=i,c=j,k=0;k<strlen(cuv) && st &&c>=0;--c,++k)
    //                 if(a[l][c]!=cuv[k])st=0;
    //             if(k!=strlen(cuv)-1)st=0;
    //
    //             if(st)
    //             {
    //                 printf("De la linia %d coloana %d spre stanga\n",i,j);
    //                 ok=1;
    //             }
    //
    //
    //         // dreapta
    //
    //             dr=1;
    //             for(l=i,c=j,k=0;k<strlen(cuv)&&dr && c<n;++c,++k)
    //                 if(a[l][c]!=cuv[k])dr=0;
    //
    //             if(k!=strlen(cuv)-1)dr=0;
    //
    //
    //             if(dr)
    //             {
    //                 printf("De la linia %d coloana %d spre dreapta\n",i,j);
    //                 ok=1;
    //             }
    //
    //
    //
    //         // sus
    //
    //             sus=1;
    //             for(l=i,c=j,k=0;k<strlen(cuv) && sus && l>=0;--l,++k)
    //                 if(a[l][c]!=cuv[k])sus=0;
    //             if(k!=strlen(cuv)-1)sus=0;
    //
    //             if(sus)
    //             {
    //                 printf("De la linia %d coloana %d in sus\n",i,j);
    //                 ok=1;
    //             }
    //
    //         // jos
    //
    //             jos=1;
    //             for(l=i,c=j,k=0;k<strlen(cuv) && jos && l<n;++l,++k)
    //                 if(a[l][c]!=cuv[k])jos=0;
    //             if(k!=strlen(cuv)-1)jos=0;
    //
    //             if(jos)
    //             {
    //                 printf("De la linia %d coloana %d in jos\n",i,j);
    //                 ok=1;
    //             }
    //
    //
    //     }
    //
    // if(!ok)printf("Nu exista solutie\n");
    // for(int i=0;i<n;++i)
    //     free(a[i]);
    // free(a);
    // free(cuv);
    //
    // return 0;
}
