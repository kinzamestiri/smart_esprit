int T[50];
    int i,j,n,aide;

    printf("donner la taille du tableau : ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("remplire le tableau T[%d] : ",i);
        scanf("%d",&T[i]);
    }

    for (i=1;i<n;i++)
    {
        aide = T[i];
        j=i;
        while (j>0 && (T[j-1]>aide))
        {
            T[j]=T[j-1];
            j--;
        }
        T[j]=aide;
    }

    for (i=0;i<n;i++)
    {
        printf("\nl'affichage T[%d] = %d ",i,T[i]);
    }
