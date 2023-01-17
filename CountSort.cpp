/*
	Count Sort Algorithm
	**Time Complexity: O(n)
	**Space Complexity: O(max_number-min_number) //no additional space is required
*/

#include <bits/stdc++.h>
using namespace std;

//a function that will print the vector passed to it, elements seprated by space
void printVector(vector<int>A)
{
	//traverse all the element and print them
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";	
	}
	cout<<"\n";
}

//the vector A will be sorted inplace and that's why passed with refrence
void sort(vector<int>&A)
{
	//write the code for count sort
    int max_number = INT_MIN;
    int min_number = INT_MAX;
    for(int i=0;i<A.size();i++)
    {
        max_number = max(max_number,A[i]);
        min_number = min(min_number,A[i]);
    }
    int range = max_number - min_number + 1;
    vector<int>count(range,0);
    for(int i=0;i<A.size();i++)
    {
        count[A[i]-min_number]++;
    }
    int j=0;
    for(int i=0;i<range;i++)
    {
        while(count[i]--)
        {
            A[j++] = i + min_number;
        }
    }

}



int main() {
	vector<int>A= {6,1,2,3,4,6,1,5,3,4,8};
	// your code goes here
	sort(A);
	cout<<"sorted vector: ";
	printVector(A);
	
	return 0;
}