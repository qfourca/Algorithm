#include <stdio.h>
#define MAX 20
int array[20][20];
int main()
{
  for (int i = 0; i < 20; i++)
  {
    array[0][i] = i + 2;
  }
  for (int i = 0; i < 20; i++)
  {
    array[i][0] = i + 2;
  }

  for (int i = 1; i < 20; i++)
  {
    for (int j = 1; j < 20; j++)
    {
      array[i][j] = array[i - 1][j] + array[i][j - 1];
    }
  }
  int N, M, K;
  scanf("%d %d %d", &N, &M, &K);
  if (N == 1 || M == 1)
  {
    printf("%d", 1);
    return 0;
  }
  if (K == 0)
  {
    printf("%d", array[N - 2][M - 2]);
  }
  else
  {
    int row = K / M;
    int cul = K % N;
    row++;
    cul++;
    int first = array[row - 2][cul - 2];
    int second = array[N - row - 1][M - cul - 1];
    printf("%d", first * second);
  }
  return 0;
}