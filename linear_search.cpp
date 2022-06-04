#include <iostream>
 using namespace std; 
void search(int arr[],int n,int key){

    for(int i=0;i<n;i++){
     if(arr[i]==key){
         cout<<i;
         break;
     }else {
         cout<<"key not found ";
     }
    }
}
int main(){
int arr[] = {10,23,44,34,43,32,21};
int n;
n = sizeof(arr)/sizeof(int);
int key = 44;
search(arr,n,key);
return 0;

}