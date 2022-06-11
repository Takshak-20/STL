#include <bits/stdc++.h>
using namespace std;



// void printVec(vector<pair<int, int>> &v){
// 	cout << "size: " << v.size() << endl;
// 	for(int i = 0; i < v.size(); i++){
// 		cout << v[i].first << " " << v[i].second << endl;
// 	}
// 	cout << endl;
// }




void printVec(vector<int> &v){
	cout << "size: " << v.size() << endl;
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}





int main(){
	vector<pair<int, int>> z;



	// direct initialization
	//vector<pair<int, int>> m = {{1, 2}, {4, 5}, {8, 9}};



	// making vector of pair by taking input from user
	// cout << "Enter size of vector: " << endl;
	// int n; // number of elements in the vector
	// cin >> n; //this number can be modified at any point in time
	// for(int i = 0; i < n; i++){
	// 	pair<int, int> p; 
	// 	cout << "Enter first element of the pair: " << endl;
	// 	cin >> p.first;
	// 	cout << "Enter second element of the pair: " << endl;
	// 	cin >> p.second;
	// 	z.push_back(p); 


		// can be executed using {} and make_pair function as well.
		// Try your hands-on!


	// } 


	//array of vectors
	// cout << "Enter size of array:  " << endl;
	// int n; cin >> n; // size of array
	// vector<int> b[n]; // an array of vector of size n
	// for(int i = 0; i < n; i++){
	// 	cout << "Enter size of vector " << i + 1 << endl;
	// 	int k; cin >> k;
	// 	cout << "Enter the elements of vector: " << endl;
	// 	for(int j = 0; j < k; j++){
	// 		int l; cin >> l;
	// 		b[i]. push_back(l);	
	// 	}
	// }
	// for(int g = 0; g < n; g++){
	// 	printVec(b[g]);
	// }



	// vector of vectors
	cout << "Enter size of vector:  " << endl;
	int n; cin >> n; // size of vector
	vector<vector<int>> b; // a vector of vectors of size n
	for(int i = 0; i < n; i++){
		vector<int> t;
		cout << "Enter size of vector " << i + 1 << endl;
		int k; cin >> k;
		cout << "Enter the elements of vector: " << endl;
		for(int j = 0; j < k; j++){
			int l; cin >> l;
			t. push_back(l);	
		}
		b.push_back(t);
	}
	for(int g = 0; g < n; g++){
		printVec(b[g]);
	}
  


	// write a line to insert an empty vector in b

}