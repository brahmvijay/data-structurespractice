#include <iostream>
 using namespace std; 
int solution(int arr[],int n , int s){
    int sum = 0 ;
    int l =0;
    for(int i=0;i<n;i++){
        sum = sum +arr[i];
        if(sum == s){
            cout<<l<<" and "<<i;
            return 0;
        }
        else if (sum>s){
            sum = 0;
            i = l;
            l++;
        }
    }
cout<<"subarray not found ";
return 0;
}
int main(){
    int arr[] = {1,2,3,7,5};
    int n;
    n = sizeof(arr)/sizeof(int);
    int s = 12 ;
    solution(arr,n,s);


return 0;

}