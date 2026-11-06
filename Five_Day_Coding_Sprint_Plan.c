#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long minProblemsInADay(int n, int* problems) {
    //===== Write Your Logic Here =====
    long long sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += problems[i];
    }

    long long x = sum/5;

    return x;

}

int main() {
    int n;
    scanf("%d", &n);
    int* problems = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &problems[i]);

    printf("%lld\n", minProblemsInADay(n, problems));

    free(problems);
    return 0;
}