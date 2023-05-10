#include <bits/stdc++.h> 
using namespace std;
 
 
 
 
void c_p_c(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
 
 void countSort(int snehu[],int n){

    int k = *max_element(snehu,snehu+n);
    int shivu[10] = {0};
    for(int i = 0 ; i < n ; i++){
        shivu[snehu[i]]++;
    }

    for(int i = 1 ; i <= k ; i++){
        shivu[i] += shivu[i-1];
    }

    int output[n];
    for(int i = n - 1 ; i >= 0 ; i--){
        output[--shivu[snehu[i]]] = snehu[i];
    }
    for(int i = 0 ; i < n ;i++){
        snehu[i] = output[i];
    }
 }
 
 
 
 
 
int main()
{
// c_p_c();

int snehu[] = {1,3,2,3,4,1,6,4,3};
countSort(snehu,9);
for(int i = 0 ; i < 9 ; i++){
    cout<<snehu[i]<<" ";
}
cout<<"\n";
 
 
 return 0;
}
 
 
 