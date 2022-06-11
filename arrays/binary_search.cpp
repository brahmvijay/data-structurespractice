#include <iostream>
 using namespace std; 
int binary_search (int arr[],int key , int n ){
    int s=0;
    int e = n-1;
    while (s<=e){
        int mid = (s+e)/2 ;
        if(key == arr[mid]){
            return mid ;
        }else if(key > arr[mid]){
            s = mid +1 ;
        }else {
            e = mid -1 ;
        }
    }
    return -1 ;
}

int main(){
int arr[] = {23 , 34 , 36, 47 ,48,77,87};
int n = sizeof(arr)/sizeof(int);
int key ;
cout<<"enter the key "<<endl;
cin>>key;

int index = binary_search(arr,key,n);
if(index != -1){
    cout<<key<<" is found at "<<index<<endl;
}else {
    cout<<"key not found "<<endl;
}


return 0;

}