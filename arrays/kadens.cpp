#include <iostream>
 using namespace std; 
int largest(int arr[],int n ){
    int cs = 0;
    int largestsum = 0 ;
    for(int i = 0;i<n;i++){
        cs = cs + arr[i];
        if(cs < 0){
            cs = 0;
        }
        largestsum = max(largestsum,cs);
    }
    return largestsum;
}
int main(){
int arr[] = {-2,34,4,-23,3};
int n = sizeof(arr)/sizeof(int);

cout<<largest(arr,n);
return 0;

}