#include <iostream>
 using namespace std; 
void reversearray(int arr[],int n){
    for(int i=0,j=n-1 ; i<j; i++ , j--){
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;

    }
}
int main(){
    int arr[] = {1,34,56,78,79,96};
    int n = sizeof(arr)/sizeof(int);
    reversearray(arr,n);
    for(int k=0;k<n;k++){
        cout<<arr[k]<<",";
    }
return 0;

}