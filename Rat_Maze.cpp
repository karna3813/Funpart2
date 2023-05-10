#include <bits/stdc++.h> 
using namespace std;
 
 
 
 
void c_p_c(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
 
 //int snehu[n][m] ={0};
 int n= 4,m=4;

 bool isSafe(int maze[n][m],int row,int col){
    if(row <= n and col <= m and row >= 1 and col >= 1 and maze[row][col] == 1){
        return true;
    }

    return false;

 }

bool solveMaze(int maze[n][m]){
    
    int snehu[n][m] = { { 0, 0, 0, 0 },
                      { 0, 0, 0, 0 },
                      { 0, 0, 0, 0 },
                      { 0, 0, 0, 0 } };

    if(solveMazeutil(maze,0,0,snehu) == false){
            printf("Solution doesn't exist\n");
    return false;

    }

   printSolution(snehu);
   return true;

} 
 
 bool solveMazeUtil(int maze[n][m] , int row , int col , int snehu[n][m]){
    if(x == n and y == m and maze[row][col] == 1){
        snehu[row][col] == 1;
        return true;
    }

    if(isSafe(maze,row,col) ==true){
        if(snehu[row][col] == 1)
        return false;

        snehu[row][col] = 1;

        if(solveMazeUtil(maze,row+1,y,snehu) == true)
        return true;

        if(solveMazeUtil(maze,row,col+1,snehu) == true)
        return true;

        snehu[row][col] = 0;
        return false;
    }
    return false;
 }
 
 
 
int main()
{
// c_p_c();
 
 int maze[n][m] = { { 1, 0, 0, 0 },
                       { 1, 1, 0, 1 },
                       { 0, 1, 0, 0 },
                       { 1, 1, 1, 1 } };
    solveMaze(maze);

 
 return 0;
}
 
 
 