#include<stdio.h>
int main() {
    int m, n;
    int matrix[100][100];
    int sum[100][100];
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) // loop แถว
    {
        for (int j = 0; j < n; i++) // loop หลัก
        {
            scanf("%d", matrix[i][j]);
        }

    }
    for (int i = 0; i < m; i++) // loop แถว
    {
        for (int j = 0; j < n; i++) // loop หลัก
        {
            sum[j][i] += matrix[i][j];
        }

    }
    printf("%d", sum);

    return 0;
}