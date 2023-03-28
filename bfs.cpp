#include<iostream>
#include<map>
#include<list>
#include<queue>
#include<algorithm>

using namespace std;

class Graph{
	map<int, list<int> > lst;
	
	public:
		void addedge(int x, int y){
			lst[x].push_back(y);
			lst[y].push_back(x);
		}
		
		void bfs(int src){
			map<int, int> visited;
			queue<int> q;
			
			q.push(src);
			visited[src]=true;
			
			while(!q.empty()){
				int node=q.front();
				q.pop();
				
				cout<<node<<"\t";
				//cout<<endl<<node<<"-> ";
				for(int nbr:lst[node]){
					//cout<<nbr<<"  ";
					if(!visited[nbr]){
						q.push(nbr);
						visited[nbr]=true;
					}
				}
			}
		}
}; 

int main(){
	Graph g;
	g.addedge(0,1);
	g.addedge(0,2);
	g.addedge(1,3);
	g.addedge(2,4);
	g.addedge(3,4);
	g.addedge(3,5);
	g.addedge(4,5);
	g.addedge(5,6);
	
	g.bfs(0);
	return 0;
}
