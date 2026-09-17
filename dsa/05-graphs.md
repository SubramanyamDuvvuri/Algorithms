# 05 - Graphs

Goal: become strong at graph modeling and algorithms.

## Graph Representation

Options:

- Edge list.
- Adjacency list.
- Adjacency matrix.

Choose based on density, memory, and operation needs.

C++ design:

- Use integer node IDs for performance.
- Keep external labels in a map.
- Be explicit about directed vs undirected.
- Watch recursion depth.

## Core Algorithms

Must know:

- BFS.
- DFS.
- Connected components.
- Cycle detection.
- Topological sort.
- Dijkstra.
- Bellman-Ford.
- Floyd-Warshall.
- Minimum spanning tree: Kruskal and Prim.
- Strongly connected components: Kosaraju or Tarjan.

## Production Uses

- Dependency graphs.
- Build systems.
- Package managers.
- Social graphs.
- Routing.
- Job scheduling.
- Fraud rings.
- Service dependency maps.

## Brutal Exercises

1. Build graph library with directed/undirected modes.
2. Implement BFS shortest path in unweighted graph.
3. Implement Dijkstra with path reconstruction.
4. Implement topological sort and cycle reporting.
5. Implement Tarjan SCC.
6. Design a build system dependency resolver.
7. Detect circular dependencies in a plugin architecture.

