
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, F;
        scanf("%d %d", &N, &F);

        int freshness[N], cost[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &freshness[i]);
        }
        for (int i = 0; i < N; i++) {
            scanf("%d", &cost[i]);
        }

        int total_cost = 0;
        for (int i = 0; i < N; i++) {
            if (freshness[i] >= F) {
                total_cost += cost[i];
            }
        }

        printf("%d\n", total_cost);
    }

    return 0;
}
