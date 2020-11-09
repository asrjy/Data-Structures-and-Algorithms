#include<iostream>
using namespace std;
void extended_shortest_path(int* prev_iter, int* adj_mat){
    int n = sizeof(adj_mat)/sizeof(typeof(adj_mat[0][0]));
    
}
int main(){
    int n;
    cout << "Number of vertices:";
    cin >> n;
    int adj_mat[n][n];
    cout << "\nEnter Adjacency Matrix Elements:\n";
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        cin >> adj_mat[i][j];
    
}