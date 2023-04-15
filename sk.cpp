#include<bits/stdc++.h>
using namespace std;
void swap(int a,int m,int arr[])
{
  int temp=arr[a];
  arr[a]=arr[m];
  arr[m]=temp;
}

int partition(int arr[],int l,int h)
{
int pivot=arr[h];
int i=l-1,j=l;

for(j= l;j< h;++j)
{
if(arr[j]<pivot){++i; swap(i,j,arr); }
}
swap(i+1,j,arr);
return i+1;
}

void quicksort(int arr[],int l,int h)
{
if(l<h)
{
  int pi=partition(arr,l,h);
  quicksort(arr,l,pi-1);
   quicksort(arr,pi+1,h);

}

}
int main()
{
int arr[6]={-4,2,0,5,1,3};
quicksort(arr,0,5);
for(int i=0;i<6;++i){cout<<arr[i]<<" ";}






return 0;
}

