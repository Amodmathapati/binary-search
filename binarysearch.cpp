#include <iostream>
#include<vector>
using namespace std;
int binary(int arrayname[],int size, int key);


int main(){
    int key;
    cout<<"enter key"<<endl;
    cin>>key;

int arr[8]={-99,22,44,55,56,58,88,99,};
int abcd=binary(arr, 8, key);

if (abcd==-1)
{
    cout<<" key is not present "<<endl;
}

else
{
    cout<<key<<" is present at "<<abcd<<endl;
}



return 0;
}


int binary(int arrayname[],int size, int key){
int f,l;
f=0;
l=size-1;
while (f<=l)
{
int mid=(f+l)/2;

  if (arrayname[mid]==key)
  {
      return mid;
  }
  
  if (arrayname[mid]<key)
  {
      f=mid+1;

  }
else
  {
      l=mid-1;
  }

}

return -1;


  











}