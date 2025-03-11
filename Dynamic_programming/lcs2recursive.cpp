//give two string we have to find longest common subsequences

#include<iostream>
#include<cstring>
using namespace std;

int lcs(char *str1,char *str2,int m,int n)
{
    if(m==0||n==0)
    return 0;

    else if(str1[m-1]==str2[n-1])
    return 1+lcs(str1,str2,m-1,n-1);

    else{
        return max(lcs(str1,str2,m-1,n),lcs(str1,str2,m,n-1));
    }
}

int main()
{
    char str1[]="shahid";
    char str2[]="fahad";
    int m= strlen(str1);
    int n= strlen(str2);
    cout<<"longest subsequence is:"<<lcs(str1,str2,m,n);


}