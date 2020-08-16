#include<stdio.h>

int main() {
    int m, n;
    int matrix1[100][100];
    int matrix2[100][100];
    int sum[100][100] ;
    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++) // loop แถว set sum = 0
    {
        for (int j = 0; j < n; j++) // loop หลัก
        {
            sum[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) // loop แถว matrix1
    {
        for (int j = 0; j < n; j++) // loop หลัก matrix1
        {
                scanf("%d", &matrix1[i][j]);
        }
    }

    for (int i = 0; i < m; i++) // loop แถว matrix2
    {
        for (int j = 0; j < n; j++) // loop หลัก matrix2
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    

    for (int i = 0; i < m; i++) // loop แถว
    {
        for (int j = 0; j < n; j++) // loop หลัก
        {
            sum[i][j] += matrix1[i][j] + matrix2[i][j];
        }
    }

        
    for (int i = 0; i < m; i++) // loop แถว
    {
        for (int j = 0; j < n; j++) // loop หลัก
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}