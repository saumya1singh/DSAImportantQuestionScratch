#include<bits/stdc++.h>
using namespace std;

Question Link- https://www.hackerrank.com/challenges/newyear-present/problem

const int maxN=2*1e7+5;

long long dp1[maxN],dp2[maxN],dp3[maxN];
long long ans,ans1,ans2,ans3,pom;
int n,idx,l[5000];

int main()
{
    scanf("%d",&n);

    for (int i=0;i<n;i++)
    scanf("%d",&l[i]);

    sort(l,l+n);

    for (int i=0;i<n;i++)
       dp1[l[i]]++;

    for (int i=0;i<n-1;i++)
         for (int j=i+1;j<n;j++)
          dp2[l[i]+l[j]]++;

     for (int i=0;i<n;i++)
        for (int j=0;j<i;j++)
         if (l[i]!=l[i-1])
          {
            dp3[l[i]]+=dp2[l[i]-l[j]];
            if (3*l[j]==l[i])
            dp3[l[i]]-=(dp1[l[j]]-1); else
            if (2*l[j]<l[i]) dp3[l[i]]-=dp1[l[i]-2*l[j]];
          }

     for (int i=1;i<n;i++)
       if (l[i]!=l[i-1])
        dp3[l[i]]=dp3[l[i]]/3;

    ans=0;

    for (int i=1;i<n;i++)
        if (l[i]!=l[i-1])
        ans+=(dp1[l[i]]*(dp1[l[i]]-1)*(dp1[l[i]]-2)*dp3[l[i]])/6;

        for (int i=1;i<n;i++)
         if (l[i]!=l[i-1])
         {
             idx=0;
             pom=0;
             ans2=0;
             ans3=0;
             while (2*l[idx]<l[i])
             {
                 if (pom !=l[idx])
                 {
                     pom=l[idx];
                     ans3+=(dp1[l[idx]]*(dp1[l[idx]]-1)*dp1[l[i]-l[idx]]*(dp1[l[i]-l[idx]]-1))/4;
                     if (l[i]%2==0)
                     {
                        ans3+=(dp1[l[idx]]*(dp1[l[i]-l[idx]])*dp1[l[i]/2]*(dp1[l[i]/2]-1))/2;
                        ans2+=dp1[l[idx]]*dp1[l[i]-l[idx]]*(dp2[l[i]]-(dp1[l[idx]]*dp1[l[i]-l[idx]])-(dp1[l[i]/2]*(dp1[l[i]/2]-1))/2);
                     }
                     else
                        ans2+=(dp1[l[idx]]*dp1[l[i]-l[idx]])*(dp2[l[i]]-(dp1[l[idx]]*dp1[l[i]-l[idx]]));
                 }
                 idx++;
              }
              ans2=ans2/2;
             ans2+=ans3;
              if (2*l[idx]==l[i])
                ans2+=(dp1[l[idx]]*(dp1[l[idx]]-1)*(dp1[l[idx]]-2)*(dp1[l[idx]]-3))/24;

             ans1+=ans2*(dp1[l[i]]*(dp1[l[i]]-1))/2;
         }
    ans+=ans1;
    printf("%lld",ans);

    return 0;
}
