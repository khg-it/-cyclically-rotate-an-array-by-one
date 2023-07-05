# include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int i,j=1;
    cout<<"array before cyclically rotation: "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    int temp=arr[4];
    for(i=3;i>=0;i--)
    {
        arr[i+1]=arr[i];

    }
    arr[0]=temp;
    cout<<"array after implementation of cyclically rotation: "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;




}
