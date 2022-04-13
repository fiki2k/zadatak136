// Program treba zamjenit redke i stupce matrice.

#include <stdio.h>
 
int main()
{
    static int array1[10][10], array2[10][10];
    int i, j, m, n, a, b, c, p, q, r;
 
         printf("Unesi broj redaka: ");
        scanf("%d", &m);
        printf("\nUnesi broj stupaca: ");
        scanf("%d",&n);
        printf("\nUnesi vrijednosti matrice: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi element A[%d][%d] : ",i,j);
                 scanf("%d", &array1[i][j]);
                 array2[i][j] = array1[i][j];
                }
        }

    printf("\nDana matrica je: \n\n");

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf("\t%d", array1[i][j]);
            }
            printf("\n\n");
        }
    
    
    printf("\nUnesi broj redka koji zelis zamjenit : ");
    scanf("%d", &a);
    printf("\nUnesi broj redka s kojim ga zelis zamjenit : ");
    scanf("%d",&b);
    
    for (i = 0; i < m; ++i)
    {
        //  Prvi redak ima index 0 
        c = array1[a - 1][i];
        array1[a - 1][i] = array1[b - 1][i];
        array1[b - 1][i] = c;
    }
    printf("\nUnesi broj stupca koji zelis zamjenit : ");
    scanf("%d", &p);
    printf("\nUnesi broj stupca s kojim ga zelis zamjenit : ");
    scanf("%d",&q);
    
    for (i = 0; i < n; ++i)
    {
        // Index prvog stupca je 0.
        r = array2[i][p - 1];
        array2[i][p - 1] = array2[i][q - 1];
        array2[i][q - 1] = r;
     }
    printf("\nMatrica nakon mjenjanja 2 redka je :  \n");
    for (i = 0; i < m; ++i)
        {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", array1[i][j]);
        }
        printf("\n\n");
    }
    
    printf("\nMatrica nakon mjenjanja 2 stupca je: \n");
    
    for (i = 0; i < m; ++i)
        {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", array2[i][j]);
        }
        printf("\n\n");
    }
    
    return 0;
}
