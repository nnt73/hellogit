#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> hello ={1,2,3};
	cout<<"hello bob" << endl;// test
	for (auto i=0u; i<hello.size(); i++)
		{
			cout << hello[i]<< " "<< endl;
		}
	
}	
