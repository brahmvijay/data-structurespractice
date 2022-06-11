#include <iostream>
 using namespace std; 
int largestsum(int arr[],int n){
    int preffix[100] = {0};
    preffix[0] = arr[0];

    for(int i = 1 ;i<n;i++){
        preffix[i] = preffix[i-1] + arr[i];
    }

    int largest = 0;
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            int subarraysum = i>0 ? preffix[j] - preffix[i] : preffix[j];
           if(largest < subarraysum ){
               largest = subarraysum ;
           }
        }
    }
    return largest ;
}
int main(){
int arr[] = {1,2,34,4,22};
int n = sizeof(arr)/sizeof(int);

cout<<largestsum(arr,n);
return 0;

}