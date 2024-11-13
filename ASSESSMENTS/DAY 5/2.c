
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        qsort(arr, N, sizeof(int), compare);

        int max_sum = arr[0] + arr[1];

        for (int i = 1; i < N; i++) {
            if (arr[i] != arr[0]) {
                max_sum = arr[0] + arr[i];
                break;
            }
        }

        printf("%d\n", max_sum);
    }

    return 0;
}
