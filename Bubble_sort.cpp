 #include <bits/stdc++.h> 
using namespace std;
 
 
 
 
void c_p_c(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
 
 bool compare(int a,int b){
    return a > b;
 }
 
 int bubblesort(int arr[],int n){
    int count=0;
    for(int times=1;times<n-1;times++){
        for(int j = 0 ; j <= n - times; j++){
            if(compare(arr[j],arr[j+1])){
                swap(arr[j],arr[j+1]);
                count++;
                
            }
        }
    }
    return count;
 }
 
 
 
int main()
{
 c_p_c();
 
 int arr[]={10,10,58,31,63,40,76};
 int n=sizeof(arr)/sizeof(int);

 cout<<bubblesort(arr,n)<<endl;
 cout<<endl;

   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";

   }
   cout<<endl;

 return 0;
}
 
 
 