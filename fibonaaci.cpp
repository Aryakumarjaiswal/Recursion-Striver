#include<bits/stdc++.h>
using namespace std;        /*LEC 5:MULTIPLE RECURSION CALLS (FIBONACCI)*/
int fibo(int n)
{
    if(n<=1){return n;}
    int last,slast;
    last=fibo(n-1);slast=fibo(n-2);
    return last+slast;
}
/*void merge(vector<int>&v,int l,int h)
{
    int m=(l+h)/2;
    vector<int>v1;
     vector<int>v2;
     int k=l;
     for(int i=0;i<m-l+1;++i)
     {
        v1.push_back(v[k]);
        ++k;
     }
     k=m+1;
      for(int i=0;i<h-m;++i)
     {
        v2.push_back(v[k]);
        ++k;
     }
     

}
void mergesort(vector<int>&v,int l,int h)
{   if(l>=h)return;
    int mid=(l+h)/2;
    mergesort(v,l,mid);
    mergesort(v,mid+1,h);
    merge(v,l,h);

}

*/
int main()
{ int N;
cin>>N;
cout<<fibo(N);
  

    

}
