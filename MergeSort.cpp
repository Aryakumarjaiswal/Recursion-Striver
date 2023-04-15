/***************************EXPERIMENT 2:IMPLEMENT MERGE SORT******************************/
#include<iostream>
using namespace std;
void merge(int *arr,int l,int h){
    int mid=(l+h)/2;
    int l1=mid-l+1;/*Take For general Case l1,l2
    */
    int l2=h-mid;                       
    int *arr1 =new int[l1];            //  Merge Sort Program by Myself
    int *arr2 =new int[l2];
int k=l;
    for(int i=0;i<l1;++i){
        arr1[i]=arr[k];++k;
    }
   k=mid+1;
    for(int i=0;i<l2;++i){
        arr2[i]=arr[k];++k;
    }
    int i=0,j=0;
    k=l;
   while(i<l1 && j<l2){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            ++i;++k;
        }
         if(arr1[i]>arr2[j]){
            arr[k]=arr2[j];
            ++j;++k;
        }}
while(j<l2){
arr[k]=arr2[j];
++k;++j;
}
while(i<l1){
arr[k]=arr1[i];
++k;++i;
}
    


}
void mergesort(int *arr,int l,int h){
    if(l>=h){
        return;
    }
    int mid=(l+h)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,h);
   merge(arr,l,h);

 
}
int main(){int n;
n=5;
    cout<<"Before Sorting:\n";
int arr[n]={2,-3,0,-1,1};
for(int i=0;i<n;++i){
    cout<<arr[i]<<" ";
}cout<<endl;
mergesort(arr,0,n-1);

cout<<"After Sorting:\n";
for(int i=0;i<n;++i){
    cout<<arr[i]<<" ";
}

    return 0;
}






// #include<iostream>
// #include<stack>
// using namespace std;
// string arr[10]={" "," ","abc","def","gfi","jkl","mno","pqr","stu","vwxyz"};
// int k=0;
// void rec(string s,string ans){
// //    if(i==s.size()){cout<<ans<<" ";return ;}
// //    char ch=s[i];
// //    rec(s,ans,i+1);
// //    rec(s,ans+ch,i+1);                        Method:1 for printing all the subset of given string

// // if(s.size()==0){cout<<ans<<" ";return ;}
// // string res=s.substr(1);
// // char ch=s[0];
// // rec(res,ans+ch,i);
// // rec(res,ans,i);                                      Method:2 for printing all the subset of given string

// if(s.size()==0){++k;
//    cout<<ans<<" "<<k<<endl;
   
// return ;}

//    char ch=s[0];
//    string val=arr[ch-'0'];
//    string res=s.substr(1);
//    for(int i=0;i<val.size();++i){
// rec(res,ans+val[i]);

//    }}
   
   
    

// int main(){
// // *string s="abc";*/
// // rec(s," ",0);                        //Program to print all the subsequence of the given string

// string s="2";
// cout<<"COMBINATIONS IS GIVEN BELOW:\n";
// rec(s," ")
// ;
// }
