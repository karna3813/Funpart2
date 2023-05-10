#include <bits/stdc++.h> 
using namespace std;
 
 
 
 
void c_p_c(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
 
 
 
 void shellSort(int arr[],int n){
    for(int gap = n/2 ; gap >= 1 ; gap/=2){
        for(int i = gap + 1 ; i < n ; i++){
           int key = arr[i];
           int j = i - gap;
           while(j > 0 and arr[j] > key){
            arr[j+gap] = arr[j];
            j -= gap;
           }

           arr[j+gap] = key;
        }
    }
 }
 
 
 
int main()
{
 //c_p_c();

 int snehu[] = {1,2,3,6,5,5,8,8,5,89,65,33};
 int n = sizeof(snehu)/sizeof(int);
 shellSort(snehu,n);
 
 for(int i = 0 ; i < n ; i++){
    cout<<snehu[i]<<" ";
 }
 cout<<"\n";
 return 0;
}
 
 
 