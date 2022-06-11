#include <iostream>
 using namespace std; 
int printallpairs(int arr[],int n ){
    for(int i =0 ;i<n-1;i++){
        int x = arr[i];
        for(int j=i+1;j<n-1;j++){
            int y = arr[j];
            cout<<"("<<x<<","<<y<<")";
        }
        cout<<endl;
    }
}
int main(){
    int arr[] = {23,34,45,34,53,54,24,45,45};
    int n = sizeof(arr)/sizeof(int);

    printallpairs(arr,n);
    
return 0;

}