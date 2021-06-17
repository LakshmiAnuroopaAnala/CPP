#include<bits/stdc++.h>
using namespace std;
vector<int> adj[10000];
void dfs(int node,int prt)
{
	cout<<node<<" ";
	for(auto i:adj[node])
	{
		if(i!=prt)
		{
			dfs(i,node);
		}
	}
}
void Bfs(int node,int ptr)
{
	queue<pair<int,int>> q;
	q.push({node,ptr});
	while(!q.empty())
	{
		auto it=q.front();
		node=it.first;
		ptr=it.second;
		q.pop();
		cout<<node<<" ";
		for(auto i:adj[node])
		{
			if(i!=ptr)
			{
			  q.push({i,node});	
			}	
		}
	}
}
int main()
{
	int i,n,u,v;
	cin>>n;
	for(i=0;i<n-1;i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	//dfs(1,0);
	Bfs(1,0);	
	return 0;
}

/*
8
1 2
1 3
2 4
2 7
3 8
3 9
9 10
*/
