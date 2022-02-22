#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,m;
      cin>>n>>m;
      int a[n][m];
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
              cin>>a[i][j];
          }
      }
      int rowst=0,rowend=n-1,colst=0,colend=m-1;
      while(rowst<=rowend&& colst<=colend)
      {
          for(int col=colst;col<=colend;col++)
          {
              cout<<a[rowst][col]<<" ";
          }
          rowst++;
          for(int row=rowst;row<=rowend;row++)
          {
              cout<<a[row][colend]<<" ";
          }
          colend--;
          for(int col=colend;col>=colst;col--)
          {
              cout<<a[rowend][col]<<" ";
          }
          rowend--;
          for(int row=rowend;row>=rowst;row--)
          {
              cout<<a[row][colst]<<" ";
          }
          colst++;
        
          
      }
      return 0;

}