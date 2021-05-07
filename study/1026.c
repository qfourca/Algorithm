#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int A[50];
	int B[50];
	int N = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);
	for (int i = 0; i < N; i++)
		scanf("%d", &B[i]);
	for (int i = N - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (A[j] > A[j + 1])
			{
				int t = A[j];
				A[j] = A[j + 1];
				A[j + 1] = t;
			}
	for (int i = N - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (B[j] < B[j + 1])
			{
				int t = B[j];
				B[j] = B[j + 1];
				B[j + 1] = t;
			}
	for (int i = 0; i < N; i++)
		A[i] *= B[i];
	for (int i = 1; i < N; i++)
		A[0] += A[i];
	printf("%d", A[0]);
	return 0;
}