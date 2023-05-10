#include <bits/stdc++.h> 
using namespace std;
 
 
 
 
void c_p_c(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
 
 void merge(vector <int> &arr,int s,int e){

 int i=s;
 int m=(s+e)/2;
 int j=m+1;

  vector <int> temp;

 while(i<=m and j<=e){
    if(arr[i]<arr[j]){
        temp.push_back(arr[i]);
        i++;
    } 
    else{
        temp.push_back(arr[j]);
        j++;
    }
 }

    //copy remaining elements from the first array
     while(i<=m){
        temp.push_back(arr[i++]);
     }
    //or copy remaining elements from the second array
    while(j<=e){
        temp.push_back(arr[j++]);
    }

    //copy back elements from temp to original array
   int k=0;
    for(int idx=s;idx<=e;idx++){
        arr[idx]=temp[k++];
    }
    return;

 }
 void mergesort(vector<int> &arr,int s,int e){

    //base case
    if(s>=e){
        return;
    }

    //recursive case
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    return merge(arr,s,e);
 }
 
 
 
 
 
int main()
{
 c_p_c();
 
 vector<int> arr={10,5,2,0,7,6,4};
 int s=0;
 int e=arr.size()-1;
 mergesort(arr,s,e);
 for(int x :arr){
    cout<< x << " ";
 }
 return 0;
}
 
 
 
