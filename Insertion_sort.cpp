#include <bits/stdc++.h> 
using namespace std;
 
 
 
 
void c_p_c(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
 
 
 
 
 
 
 
int main()
{
 //c_p_c();

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=1;i<n;i++){
    int current=arr[i];
    int j =i-1;
    while(arr[j]>current && j>=0){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
}

   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
       
   }
    cout<<endl;





 
 
 return 0;
}
 
 