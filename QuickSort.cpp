#include <bits/stdc++.h> 
using namespace std;
 
 
 
 
void c_p_c(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
 
 int partition(int arr[] , int l, int r){
    int pi = arr[r];

    int i = l-1;
    for(int j = l ; j < r; j++){
        if(arr[j] < pi){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[r],arr[i]);
    return i;
 }
 void spaceOptimizedQuickSort(int arr[],int l, int r){
    if(l < r){

        int pi = partition(arr,l,r);

       if(pi - l > r - pi){
        spaceOptimizedQuickSort(arr,pi+1,r);
        r = pi - 1;
       }
       else {
        spaceOptimizedQuickSort(arr,l,pi-1);
        l = pi + 1;
       }

    }
 }
 
 
 
 
 
int main()
{
 //c_p_c();

 int snehu[] = {2,3,5,9,8,7,6,5,56,11,54,22};

spaceOptimizedQuickSort(snehu,0,11);
 for(auto i : snehu){
    cout<<i<<" ";
 }
 cout<<"\n";
 
 
 return 0;
}
 
 
 