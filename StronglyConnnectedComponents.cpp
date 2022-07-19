#include <iostream>
#include <vector>
using namespace std;
///no.36
///travel around the world
///strongly connected components
void dfs(int s, vector<vector<int>>& route, vector<int>& vis);
int main() {
    while(1){
        int n, m;
        cin >> n >> m;
        //cout << endl;
        if(n == 0 || m == 0){
            break;
        }

        vector<vector<int>> route(n+1);
        vector<int> vis(n+1, 0);
        for(int i=0; i<m; i++){
            int u, v, d;
            cin >> u >> v >> d;
            if(d==1){
                route[u].push_back(v);
            }
            else{
                route[u].push_back(v);
                route[v].push_back(u);
            }
        }

        /*for(int i=1; i<n+1; i++){
            cout << i << ": ";
            for(int j=0; j<route[i].size(); j++){
                cout << route[i][j] << " ";
            }
            cout << endl;
        }*/

        for(int i=1; i<n+1; i++){
            dfs(i, route, vis);
            ///check if there exist unvisited cities
            int exist = 0;
            for(int j=1; j<n+1; j++){
                if(vis[j] == 0){
                    exist = 1;
                    break;
                }
            }
            if(exist == 1){
                cout << 0 << endl;
                break;
            }
            if(i==n){
                cout << 1 << endl;
                break;
            }
            for(int j=1; j<n+1; j++){
                vis[j] = 0;
            }
        }
    }
    return 0;
}
void dfs(int s, vector<vector<int>>& route, vector<int>& vis){
    vis[s] = 1;
    //cout << s << " ";
    for(int i=0; i<route[s].size(); i++){
        if(vis[route[s][i]] == 0){
            dfs(route[s][i], route, vis);
        }
    }
}
