/**
#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Working successfullly";
    return 0;
}
**/

/* 
 RECURSION 6:  PRINTING SUBSEQUENCES*/
/*#include<bits/stdc++.h>
using namespace std;
void f(int i,vector<int>&v,int n,vector<int>&v1)
{
if(i>=n){for(auto ele:v1){cout<<ele<<" ";}cout<<"\n";return;}
v1.push_back(v[i]);
f(i+1,v,n,v1);
v1.pop_back();
f(i+1,v,n,v1);

}
int main()
{
    vector<int>v={3,1,2,-1};
    vector<int>v1;
    int n=v.size();
    f(0,v,n,v1);
}
**/


/* 
 RECURSION 7:  PRINTING SUBSEQUENCES WITH SUM K*/
/*#include<bits/stdc++.h>
using namespace std;
void f(int i,vector<int>&v,int n,vector<int>&v1,int k,int sum)
{
if(i>=n){
    
    if(sum==k)
   { for(auto ele:v1){cout<<ele<<" ";}cout<<"\n";return;}
   return ;
   
   }
   sum+=v[i];
v1.push_back(v[i]);
f(i+1,v,n,v1,k,sum);

sum-=v[i];
v1.pop_back();
f(i+1,v,n,v1,k,sum);

}
int main()
{
    int k;
    vector<int>v={1,2,1,-1};
    vector<int>v1;
    int n=v.size();
    cin>>k;
    f(0,v,n,v1,k,0);
}

*/


/* 
 RECURSION 7:  PRINTING SUBSEQUENCES WITH SUM K ONLY ONCES*/
#include<bits/stdc++.h>
using namespace std;
bool f(int i,vector<int>&v,int n,vector<int>&v1,int k,int sum)
{
if(i>=n){
    
    if(sum==k)
   { for(auto ele:v1){cout<<ele<<" ";}cout<<"\n";return true;}
   return false ;
   
   }
   bool ch;

   sum+=v[i];
v1.push_back(v[i]);
ch=f(i+1,v,n,v1,k,sum);
if(ch==true){return true;}

sum-=v[i];
v1.pop_back();
ch=f(i+1,v,n,v1,k,sum);
if(ch==true){return true ;}
return false;
}
int main()
{
    int k;
    vector<int>v={1,2,1,-1};
    vector<int>v1;
    int n=v.size();
    cin>>k;
    f(0,v,n,v1,k,0);
}





/* 
 RECURSION 7:  PRINTING COUNTS OF SUBSEQUENCES WITH SUM K*/
/*#include<bits/stdc++.h>
using namespace std;
int f(int i,vector<int>&v,int n,int k,int sum)
{
if(i>=n){
    
    if(sum==k)
   { return 1;}
   return 0;
   
   }
   
sum+=v[i];
int left=f(i+1,v,n,k,sum);

sum-=v[i];

int right=f(i+1,v,n,k,sum);
return left+right;

}
int main()
{
    int k;
    vector<int>v={1,2,1,-1};
     int n=v.size();
    cin>>k;
    f(0,v,n,k,0);
}

*/


/* 
