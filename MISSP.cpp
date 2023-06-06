#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<N;i++)
	    {
	       for(int j=i+1;j<N;j++)
	       {
	           if(arr[i]==arr[j])
	           {
	               arr[i] = -1;
	               int k=j;
	               arr[k] = -1;
	           }
	       }
	      
	    }
	    for(int i=0;i<N;i++)
	    {
	       if(arr[i]>0)
	       {
	           cout<<arr[i]<<endl;
	           i=N;
	       }
	    }
	}
	return 0;
}
