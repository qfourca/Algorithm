#include <stdio.h>

double ret(char x)
{
    switch (x)
    {
    case '+':
        return 0.3;
    case '-':
        return -0.3;
    default:
        return 0.0;
    }
}
int main()
{
    int N;
    double ans = 0.0;
    int mul = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        char buf[128];
        int a;
        char score[2];
        scanf("%s %d %s", buf, &a, score);
        ans += (double)(a * ((double)(69 - score[0]) + ret(score[1])));
        mul += a;
    }
    printf("%.2lf", (ans / mul));
}