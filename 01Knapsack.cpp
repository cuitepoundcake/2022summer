#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
///no.24 homework
///01 knapsack problem
///use 1D array

int main() {
    int n, time;
    cin >> n >> time;
    vector<int> pt;
    vector<int> min;
    pt.push_back(0);
    min.push_back(0);

    for(int i =0; i<n; i++){
        int p, m;
        cin >> p >> m;
        pt.push_back(p);
        min.push_back(m);
    }

    vector<vector<int>> table(n+1, vector<int> (time+1));
    for(int i=0; i<time+1; i++){
        table[0][i] = 0;
    }
    for(int i=0; i<n+1; i++){
        table[i][0] = 0;
    }

    for(int i=1; i<n+1; i++){
        for(int j=1; j<time+1; j++){
            if(min[i] < j){
                table[i][j] = table[i-1][j];
            }
            else{
                table[i][j] = max(table[i-1][j], pt[i] + table[i-1][j-min[i]]);
            }
        }
    }

    cout << table[n][time];
    return 0;
}
