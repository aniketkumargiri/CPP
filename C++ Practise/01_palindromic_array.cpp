#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}// } Driver Code Ends

bool isPalindromic(const string s)
{
	int n = s.size();
	for (int i = 0; i < s.size() / 2; i++)
	{
		if (s[i] != s[n - i - 1])
			return 0;
	}
	return 1;
}

/*Complete the function below*/
int PalinArray(int a[], int n)
{ //add code here
	for (int i = 0; i < n; i++)
	{
		if (!isPalindromic(to_string(a[i])))
			return 0;
	}
	return 1;
}