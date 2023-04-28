#include<bits/stdc++.h>

using namespace std; 



class graph
{ 
  private:
  int v;
  vector<vector<int>>list;
  public:
  graph(int v)
  {
    this->v=v;
    list.resize(v);
  }
  void addEdge(int i,int j)
  {
    list[i].push_back(j);
    list[j].push_back(i);
  }
  void RemoveEdge(int i,int j)
  {  int idx=-1;
    for(int x=0;x<list[i].size();x++)
    {
      if(list[i][x]==j)
      {
        idx=x;
        break;
      }
    }
    if(idx==-1)
    return;
    for(int x=idx;x<list[i].size()-1;x++)
    list[i][x]=list[i][x+1];
    list[i].pop_back();

  }
  void print()
  {
    for(int i=0;i<list.size();i++)
    {
      for(int j=0;j<list[i].size();j++)
      cout<<list[i][j]<<" ";
      cout<<endl;
    }
  }
    
      void DFS(int r)
  {
    stack<int>s;
    s.push(r);
    set<int>vis;
    vis.insert(r);
    while(!s.empty())
    {
      int x=s.top();
      s.pop();
      cout<<x<<" ";
      for(int i=0;i<list[x].size();i++)
      {if(vis.find(list[x][i])==vis.end())
           s.push(list[x][i]);
           vis.insert(list[x][i]);
      }

    }
  }
    

};
int main()
{  int V;
cout<<"Enter the number of nodes of the graph\n";
cin>>V;
  graph* g=new graph(V);
  int e;
  cout<<"Enter the number of edges\n";
  cin>>e;
  for(int i=0;i<e;i++)
  {
      cout<<"Enter starting and ending nodes\n";
      int x,y;
      cin>>x>>y;
      g->addEdge(x,y);
    
  }

    cout<<"Enter the Node from which you want to start DFS traversal\n";
  int x;
  cin>>x;
  g->DFS(x);
  

}