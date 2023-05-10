#include <bits/stdc++.h> 
using namespace std;
 
 
 
 
void c_p_c(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
 
 void helper(int r , int c ,vector<vector<char>> &a,map<pair<int,int>,map<int,int>> &mp,vector<map<int,int>> &row,vector<map<int,int>> &col){
    if(r == 9){
        for(auto it : a){
            for(auto i : it){
                cout<<i<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }

    if(c == 9){
        helper(r+1,0,a,mp,row,col);
    }
    if(a[r][c] != '.'){
        helper(r,c+1,a,mp,row,col);
    }

    for(int i = 1 ; i <= 9 i ++){
        int rw = r/3,cl = c/3;
        if( !mp[{rw,cl}][i] and !row[r][i] and !col[c][i]){
            mp[{rw,cl}][i] = 1;
            row[r][i] = 1;
            col[c][i] = 1;
            a[r][c] = i + '0';
            helper(r,c+1,a,mp,row,col);
              mp[{rw,cl}][i] = 0;
            row[r][i] = 0;
            col[c][i] = 0;
            a[r][c] = 0;
        }
    }
 }
void solveSudoku(vector<vector<char>>& a){
    map<pair<int,int>,map<int,int>> mp;
    vector<map<int,int>> row(9);
    vector<map<int,int>> col(9);

    for(int i = 0 ; i < 9 ; i++){
        for(int j = 0 ; j < 9 ; j++){
            if(a[i][j] != '.'){
                mp[{i/3,j/3}][a[i][j] - '0'] = 1;
                row[i][a[i][j]-'0'] = 1;
                col[j][a[i][j]-'0'] = 1;
            }
        }
    }
    helper(0,0,a,mp,row,col);
} 
 
 
 
 
 
int main()
{
 c_p_c();
 





vector<vector<char>> soduku = 

 
 return 0;
}
 
/*  SUDOKU SOLCER SIMPLE*/ 
 
 void sudukoSolver(vector<vector<char>> &a){
    solve(a);
 }

 bool isValid(int row , int col , char c){
    for(int i = 0 ;  i < 9 ; i++){
        if(a[row][i] == c)
        return false;
    }

     for(int i = 0 ;  i < 9 ; i++){
        if(a[i][col] == c)
        return false;
    }

    for(int i = 0 ; i < 9 ; i++){
        if(a[3*(row/3) + i/3][3*(col/3) + i%3] == c)
        return false;
    }

    return true;
 }

 bool solve(vector<vector<char>> &a){

    for(int i = 0 ; i < a.size(); i++){
        for(int j = 0 ;  j < a[0].size() ; j++){
            if(a[i][j] == '.'){
                for(char c = '1' c <= '9' c++){
                    if(isValid(i,j,c))
                    a[i][j] = c;

                    if(solve(a) == true)
                    return true;

                    else 
                    a[i][j] ='.';
                }
            }

            return false;
        }
    }
    return true;
 }