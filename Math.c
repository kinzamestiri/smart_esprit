#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  tab1[100],tab2[100],tab3[100],n,i,m,j,k,c,l;
    do
    {
        printf("donneez la talle du tableau 1 : \t");
        scanf("%d",&n);
    }
    while (n<0 || 100<n);
    printf("donnez la valeur de la case 1 : \t");
    scanf("%d",&tab1[0]);
    for (i=1;i<n;i++)
    {
        do
        {
            printf("donnez la valeur de la case %d : \t",i+1);
            scanf("%d",&tab1[i]);
        }
        while (tab1[i]<tab1[i-1]);
    }
    do
    {
        printf("donneez la talle du tableau 2 : \t ");
        scanf("%d",&m);
    }
    while (m<0 || 100<m);
    printf("donnez la valeur de la case 1 : \t");
    scanf("%d",&tab2[0]);
    for (j=1;j<m;j++)
    {
        do
        {
            printf("donnez la valeur de la case %d : \t",j+1);
            scanf("%d",&tab2[j]);

        }
        while (tab2[j]<tab2[j-1]);
    }
     if  (tab1[n-1]<tab2[m-1])
        {
            c=0;
            for (k=0;k<m;k++)
        {

            while (tab1[c]<tab2[k])
            {
                printf("%d",tab1[c]);
                c++;
            }
            printf("|%d|",tab2[k]);

        }
        }
    else
        {
            c=0;
            for (l=0;l<n;l++)
        {

            while (tab2[c]<tab1[l])
            {
                printf("|%d|\t",tab2[c]);
                c++;
            }
            printf("|%d|\t",tab1[l]);

        }
        }



}
