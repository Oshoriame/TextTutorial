#include<iostream>
#include<vector> // for vector
#include<algorithm>// for copy() and assign()
#include<iterator>// for back_inserter
using namespace std;
int main() {
	vector<int> v1 {7,6,4,5};
	vector<int> v2;
	v2=v1 ;
	cout << "v1 vector elements are : ";
	for (int i=0; i<v1.size(); i++)
		cout << v1[i] << " ";
	cout << endl;
	cout << "v2 vector elements are : ";
	for (int i=0; i<v2.size(); i++)
		cout << v2[i] << " ";
	cout<< endl;
	return 0;
}
