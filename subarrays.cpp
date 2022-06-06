#include <iostream>
 using namespace std; 
void subarray(int arr[],int n ){
    int large = 0;
    for(int i= 0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0 ;
            cout<<"(";
            for(int k =i;k<j;k++){
                // cout<<arr[k]<<",";
                sum = sum + arr[k];
            }

            cout<<sum<<",";
            if(large < sum){
                large = sum ;
            }
            cout<<endl;
        }
    }
    cout<<"the largest sum of subbarray is "<<large ;

}

int main(){
int arr[] = {1,2,3,4};
int n = sizeof(arr)/sizeof(int);

subarray(arr,n);
return 0;

}