///3. Depth-First Search (DFS)

#include <stdio.h>

#define MAX 20

int adj[MAX][MAX];
int visited[MAX];

void DFS(int v, int n) {
    printf("%d ", v);
    visited[v] = 1;

    for (int i = 0; i < n; i++) {
        if (adj[v][i] == 1 && !visited[i])
            DFS(i, n);
    }
}

int main() {
    int n;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    printf("DFS starting from node 0: ");
    DFS(0, n);

    return 0;
}
