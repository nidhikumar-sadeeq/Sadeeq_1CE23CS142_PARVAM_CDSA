#include <stdio.h>

int main() {
    int N, target;
    scanf("%d %d", &N, &target);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int found = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] == target) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}