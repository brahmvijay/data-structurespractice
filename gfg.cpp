#include <iostream>
 using namespace std; 
void solution(int arr[],int n , int su){
    int preffix[100]={0};
    preffix[0]=arr[0];

for(int m =1;m<n;m++){
    preffix[m]=preffix[m-1]+arr[m];
}
int sum = 0;
  for(int i =0;i<n;i++){
    for(int j =0;j<n;j++){
        int subarraysum = i>0?preffix[j] - preffix[i] : preffix[j];
        if(subarraysum==su){
            if(i>0){
            cout<<"the sum of  subarray between "<<i+1<<" and "<<j<<" is equal to su";
            break ;}
            else {
                cout<<"the sum of  subarray between "<<i<<" and "<<j<<" is equal to su";
            }
        }
    }
  }
//   cout<<"the number is not equal to any subarray ";
}
int main(){
int arr[] = {1,2,3,4,5,6,7,8,9,10};
int n = sizeof(arr)/sizeof(int);
int su = 15;
solution(arr,n,su);


return 0;

}