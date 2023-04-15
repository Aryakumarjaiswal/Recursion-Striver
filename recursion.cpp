#include<bits/stdc++.h>
using namespace std;

//Sum of 1st n numbers{Parameterised Way}
/*
void parameterised(int sum,int n)               /*LECTURE 4 IS ALSO COVERED*/
{
if(n<0)
{
cout<<sum;
return;
}

parameterised(sum+n,n-1);
}

*/


//Sum of 1st n numbers{functional Way}
functional(int n){
if(n==0)return 0;

return functional(n-1)+n;


}

/*void reverse(string s)
{

if(s.size()==0){return;}
string sb=s.substr(1);
reverse(sb);
cout<<s[0]<<"   "<<s<<endl;


}
*/
/*void backtract1ton(int i,int n){
if(i<1)return;

backtract1ton(i-1,n);
cout<<i<<" ";

}
*/



/*void func1(int n)
{
    if(n<0){return;}
    func1(n-1);
    cout<<n<<" ";
}

void func2(int n)
{
    if(n<0){return;}
    cout<<n<<" ";
    func2(n-1);
    
}
*/

int main()
{
int n;
cin>>n;
//func1(n);
//cout<<"\n";
//func2(n);

//reverse("ARYA");
//backtract1ton(n,n)  ;  

//parameterised(0,n);

cout<<functional(n);
}
