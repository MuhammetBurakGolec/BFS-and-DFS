//#######################################
//  C++11                              //
//                                     //
//  Created by Muhammet Burak Göleç    //
//                                     //
//        Disceret-Project             //
//#######################################

#include <iostream>
#include <list>
#include <vector>

using std::cout;
using std::endl;
using std::list;
using std::vector;

using namespace std;


class Graph
{
 private:
    // Köşe Sayısı
    int V;
    
    // Komşuluk listesi Pointer
    vector<list<int>> adj;
    
    // DFS recursive yardımcı fonksiyon
    void DFS_helper(int s, bool *visited,int count);

public:
    
  // Graftaki node sayısı
  Graph(int v);
    
  // Nodların birbirleri ile bağlantılarını belirtiğimiz fonksiyon
  void addEdge(int v, int w);
  
  // Breadth-first search
  void BFS(int s);
    
  // Depth-first search
  void DFS(int s);
};


Graph::Graph(int v)
{

  V = v;
  adj.resize(v);

}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    
}

void Graph::BFS(int s)
{
  // Ziyaret edilmeyen nodlardan başladık
  // Değeri false olarak başlatık
  vector<bool> visited(V);

  // BFS için bir kuyruk oluşturduk
  list<int> queue;

  // Başlangıç noktası ziyaret edildi olarak işaretlendi ve kuyruğa eklendi
  cout << "Visit and enqueue " << "S" << endl;
  visited[s] = true;
  queue.push_back(s);

  // Sıra boşalana kadar devam ediyoruz
  while (!queue.empty())
  {
    // Kuyruğun önüne aldık ve kaldırdık (önce giren önce çıkar)
    s = queue.front();
    queue.pop_front();

    for (auto i : adj[s])
    {
      // Sadece henüz ziyaret edilmemiş nodları alıyoruz
      if (!visited[i])
      {
        // Ziyaret edildi olarak işaretliyoruz
        if (visited[i] == 0)
        {
        cout << "Visit and enqueue " << i << endl;
        visited[i] = true;
        // Ziyaret edilmemiş köşeleri kontrol etmek için geri çağırıyoruz
        queue.push_back(i);
        }
      }
    }
  }
}
void Graph::DFS_helper(int s, bool *visited, int count)
{
    // Mevcut nodu ziyaret edildi olarak işaretiyoruz
    if (count == 0)
    {
    cout << "Visiting node " << "S" << endl;
    visited[s] = true;
        count+=1;
    }
    else
    {
    cout << "Visiting node " << s << endl;
    visited[s] = true;
        count+=1;
    }
    // Tanımladığımız adj listesini gözden geçiriyoruz
    for(auto i = adj[s].begin(); i != adj[s].end(); i++)
    {
        // Ziyaret edilmediyse, o köşeden geçiyoruz
        if(!visited[*i])
        {
            DFS_helper(*i, visited, count);
        }
    }
}


void Graph::DFS(int s)
{
    // Ziyaret edilmeyen nodlardan başladık
    bool *visited = new bool[V];
    int count= 0;
    for(int i = 0; i < V; i++){
        visited[i] = false;
    }

    //Recursive olarak çağırıyoruz
    DFS_helper(s, visited,count);
}

int main()
{
    int x = 0;
    // Yeni Graf oluşturup Grafımızı tanımlıyoruz (burada 8 nodu olan bir graf verdik)
    Graph g(8);

    // Nodların birbiri ile bağlarını tanımlıyyoruz
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    
    g.addEdge(1, 0);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);

    g.addEdge(2, 0);
    g.addEdge(2, 1);
    g.addEdge(2, 3);
    
    g.addEdge(3, 1);
    g.addEdge(3, 2);
    g.addEdge(3, 4);
    g.addEdge(3, 5);
    g.addEdge(3, 6);
    
    g.addEdge(4, 1);
    g.addEdge(4, 3);
    g.addEdge(4, 6);
    g.addEdge(4, 7);
    
    g.addEdge(5, 3);
    g.addEdge(5, 6);
    g.addEdge(6, 3);
    g.addEdge(6, 4);
    g.addEdge(6, 5);
    g.addEdge(7, 4);


    // Başlangıç nodunu belirliyoruz
    cout<< "Which Point do you want to start : > ";
    cin >> x;


    // Fonksiyonları çağırıyoruz (fonksiyonlar kendi içlerinde çıktı veriyorlar)

    cout << "\nBreadth-first search\n\n";
    g.BFS(x);

    cout << "\nDepth-first search\n\n";
    g.DFS(x);

    return 0;
}
