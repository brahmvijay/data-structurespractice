#include <iostream>
 using namespace std; 
void bubble_sort(int arr[],int n ){
    for(int i=1;i<=n-1;i++){
        for(int j = 0 ;j<=n-1-i ; j++){
            if(arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
}
int main(){
int arr[] = {5,3,4,2,1};
int n = sizeof(arr)/sizeof(int);
bubble_sort(arr,n);
for(int i = 0;i<n;i++){
    cout<<arr[i]<<",";
}
return 0;

}