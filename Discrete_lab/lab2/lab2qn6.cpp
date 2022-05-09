#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int> pr, rem; 
   int i,num=1,n,flag=1;
   int p,r;
   cin>>n;
   for(i=0;i<n;i++)
   {
     cin>>p>>r;
     pr.push_back(p);
     rem.push_back(r);
    }
    while(1)
    { flag=1;
      for(i=0;i<n;i++)
        if(num%pr[i] != rem[i]) 
          { 
           flag=0;
          }
       if(flag==1) 
        break;
      num++;
     }
     cout<< num;
 return 0;
}
