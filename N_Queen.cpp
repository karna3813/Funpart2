#include <bits/stdc++.h> 
using namespace std;
 
 
 
 
void c_p_c(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
 
 bool isSafe(int** board,int row,int col,int n){
    /*Row checking is not required*/

    /*Column Checking*/

    for(int i = 0  ; i < n ; i++){
        if(board[row][i] == 1)
        return false;
    }

    /*Diagonal checking*/

    int x = row, y = col;
    while(x >=0 and y >= 0){
        if(board[x][y] == 1){
             return false;
        x--;y--;
        }
    }

     while(x >=0 and y <= n){
        if(board[x][y] == 1){
             return false;
        x--;y++;
        }
    }

    return true;

 }

 bool nQueen(int** board,int row,int n){
    if(row >= n){
        return true;
    }

    for(int col = 0 ; col < n ;col++){
        if(isSafe(board,row,col,n) == true){
            board[row][col] = 1;
            if(nQueen(board,row+1,n))
            return true;
        }
        board[row][col] = 0;
    }
    return false;
 }
 
 
 
 
 
int main()
{
 c_p_c();
 
 int n;
 cin>>n;
 int** board = new int*[n];
 for(int i = 0 ; i < n ; i++){
    board[i] = new int[n];
    for(int j = 0 ; j < n ;j++){
        board[i][j] = 0;
    }
 }

 if(nQueen(board,0,n)){
    for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
       cout<<board[i][j]<<" ";
    }
    cout<<"\n";
 }
 }
 
 return 0;
}
 
 
 