#include <DataStructures/Edge.h>
#include <DataStructures/Graph.h>
#include <DataStructures/WeightedGraph.h>
#include <DataStructures/UndirectedWeightedGraph.h>
#include <Algorithms/BreadthFirstSearcher.h>
#include <Algorithms/DepthFirstSearcher.h>
#include <Algorithms/DijkstraShortestPaths.h>
#include <Algorithms/ShortestPaths.h>
#include <Algorithms/BellmanFordShortestPaths.h>

using namespace std;

struct sgsgsg{
  int a;
  sgsgsg();
};

static void test1() {

  auto *g = new WeightedGraph<int>();
  for (int i = 1; i <= 6; ++i) {
    g->AddVertex(i);
  }
  g->AddEdge(1, 2, 1);
  g->AddEdge(2, 3, 2);
  g->AddEdge(3, 4, 3);
  g->AddEdge(4, 1, 4);
  g->AddEdge(5, 6, 5);
  g->AddEdge(6, 5, 6);

  ShortestPaths<WeightedGraph<sgsgsg>> *p = nullptr;
  for (int i = 1; i <= 6; ++i) {
    p = new BellmanFordShortestPaths<WeightedGraph<sgsgsg>>(g, i);
    for (int j = 1; j <= 6; ++j) {
      printf("%d", p->HasPathTo(j));
    }
    printf("\n");
    delete p;
  }

  delete g;
}
int main()
{
   test1();
   return 0;
}