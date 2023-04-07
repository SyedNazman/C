#include <stdio.h>
#include <stdbool.h>

#define MAX_N 100000

int arr[MAX_N];
int n;

int minJumps() {
    bool visited[MAX_N] = {false};
    int jumps[MAX_N];
    for (int i = 0; i < n; i++) {
        jumps[i] = MAX_N;
    }
    jumps[0] = 0;
    int farthest = 0;
    visited[0] = true;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            return -1;
        }
        for (int j = i + 1; j <= i + arr[i] && j < n; j++) {
            if (!visited[j]) {
                visited[j] = true;
                jumps[j] = jumps[i] + 1;
                farthest = j;
            }
        }
        if (i == farthest) {
            break;
        }
    }

    return jumps[n-1];
}

int main() {
    // Read input
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Solve problem
    int ans = minJumps();

    // Print output
    printf("%d\n", ans);

    return 0;
}
