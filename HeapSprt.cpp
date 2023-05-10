#include <bits/stdc++.h> 
using namespace std;
 
 
 
 
void c_p_c(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
 
 void heapify(int arr[],int n , int i){
    int maxIdx = i;

    int l = 2*i+1;
    int r = 2*i+2;

    if(l < n and arr[l] > arr[maxIdx]){
        maxIdx = l;
    }
    if(r < n and arr[r] > arr[maxIdx]){
        maxIdx = r;
    }

    if(maxIdx != i){
        swap(arr[i],arr[maxIdx]);

        heapify(arr,n,maxIdx);
    }


 }
 void heapSort(int arr[],int n){

    // int n = sizeof(arr)/sizeof(int);

    for(int i = n/2 - 1 ; i >= 0 ; i--){
        heapify(arr,n,i);
    }

    for(int i = n-1; i > 0 ; i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
 }
 
 
 
 
 
int main()
{
// c_p_c();
int snehu[] = {1,5,6,8,33,5,4,5,6,85};
int n = sizeof(snehu)/sizeof(int);
heapSort(snehu,n);
 
 for(int i = 0 ;i < n ; i++){
    cout<<snehu[i]<<" ";
 }
 cout<<"\n";
 return 0;
}
 
 
 