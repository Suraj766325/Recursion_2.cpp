// // Q1) Print all the elements of an array in reverse order using function
#include<iostream>
using namespace std;
#include<vector>
void print(vector<int>&v,int n)
{
    if(n==-1) return;
    cout<<v[n]<<endl;
    print(v,n-1);
}
int main()
{
    vector<int>v={1,2,3,4,5};
    print(v,v.size()-1);
}




// //Q2)) Print index of a given element in an array if not present return -1
#include<iostream>
#include<vector>
using namespace std;
int tar(vector<int>&v,int n,int target)
{
    if(n==-1) return -1;
    if(v[n]==target) return n;
    tar(v,n-1,target);
}
int main()
{
    vector<int>v={1,4,6,8,9,14,17,40};
    int n=v.size(),target=14;
    cout<<tar(v,n-1,target);
}




// Q3) A function countAndSay is defined as:
#include<iostream>
#include<string>
using namespace std;
string countandsay(int n)
{
    if(n==1) return "1";
    string s=countandsay(n-1);
    //count
    string ans;
    int count;
    for(int i=0;i<s.size();)
    {
        char t=s[i];
        count=1;
        i++;
        while(i<s.size())
        {
            if(t==s[i]) count++;
            else break;
            i++;
        }
        ans+=to_string(count);
        ans.push_back(t);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<countandsay(n);
}






// Q4) Given an array of integers, print a sum triangle using recursion from it such that the first level has all array elements. After that, at each level the number of elements is one less than the previous level and elements at the level will be the sum of consecutive two elements in the previous level.
#include<iostream>
#include<vector>
using namespace std;
void fun(vector<int>&v)
{
    int n=v.size();
    int i;
    //base condition
    if(n==1)
    {
         cout<<v[0];
         return;
    }
    vector<int>a;
    //print
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //insert 
    for(i=0;i<n-1;i++)
    {
        a.push_back(v[i]+v[i+1]);
    }
    //call
    fun(a);
}
int main()
{
    vector<int>v={5,4,3,2,1};
    fun(v);
}