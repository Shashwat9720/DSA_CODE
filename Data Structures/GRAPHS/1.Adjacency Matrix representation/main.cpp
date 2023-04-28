#include<bits/stdc++.h>

using namespace std;

class graph
{   private:
    int v;
    vector<vector<int>>mat;
    public:
    graph(int v)
    {
        this->v=v;
        vector<int>x(v,0);
        mat.resize(v,x);

    }
    void addEdge(int i,int j)
    {
        mat[i][j]=1;
    }
    void print()
    {
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            cout<<mat[i][j]<<" ";
            cout<<endl; 
        }
    }


};


int main()
{int n;
cout<<"Enter the number of nodes in the graph\n";
cin>>n;
graph* g=new graph(n);
int e;
cout<<"Enter the number of edges\n";
cin>>e;
bool flag;
cout<<"Enter whether graph is directed or undirected\n";
cin>>flag;
for(int i=0;i<e;i++)
{    int x,y;
    cout<<"Enter the vertex between which edge exist\n";
    cin>>x>>y;
    if(flag)
    g->addEdge(x,y);
    else 
    {
        g->addEdge(x,y);
        g->addEdge(y,x);
    }
}
g->print();     
}