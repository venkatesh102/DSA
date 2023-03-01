// array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> m;
vector<int> v1;
void tree(vector<int>& v, int index)
{
	if (index >= v.size()) {
		m.push_back(v1);
		return;
	}
	v1.push_back(v[index]);
	tree(v, index + 1);
	if (v1.size() > 0) {
		v1.pop_back();
		tree(v, index+1);
	}

}
int main()
{
	int a;
	vector<int> v;
	v = { 1,2,3,4,5 ,6};
	 tree(v, 0);
	 for (int i = 0; i < m.size(); i++) {
		 for (int j = 0; j < m[i].size(); j++) {
			 cout << m[i][j] << " ";
		 }
		 cout << endl;
	 }

}

