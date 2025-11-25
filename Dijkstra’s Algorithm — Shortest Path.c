///Dijkstra’s Algorithm — Shortest Path

#include <stdio.h>

#define INF 9999
#define MAX 20

int main() {
    int n, src;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int graph[MAX][MAX];

    printf("Enter adjacency matrix (use 0 for no edge):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("Enter source vertex: ");
    scanf("%d", &src);

    int dist[MAX], visited[MAX];

    for (int i = 0; i < n; i++) {
        dist[i] = (graph[src][i] == 0 && i != src) ? INF : graph[src][i];
        visited[i] = 0;
    }

    dist[src] = 0;
    visited[src] = 1;

    for (int k = 1; k < n; k++) {
        int min = INF, u = -1;

        // Find minimum distance vertex
        for (int i = 0; i < n; i++) {
            if (!visited[i] && dist[i] < min) {
                min = dist[i];
                u = i;
            }
        }

        visited[u] = 1;

        // Update distances
        for (int v = 0; v < n; v++) {
            if (!visited[v] && graph[u][v] != 0 && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
        }
    }

    printf("Shortest distances from %d:\n", src);
    for (int i = 0; i < n; i++)
        printf("To %d = %d\n", i, dist[i]);

    return 0;
}
