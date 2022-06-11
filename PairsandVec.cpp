#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
    cout << "size: " <<  v.size() << endl;
    // time complexity of v.size() - O(1)
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}


int main(){
    /*
    //pair<1, 2>
    pair<int, string> p, p1, s; 
    //enter values in pair
    p = make_pair(13, "Minakshi"); // using make_pair()
    // cout first and second values of pair
    cout << p.first << " " << p.second << endl;
    // make pair using syntax {}
    p1 = {20, "Swati"};
    cout << p1.first << " " << p1.second << endl;
    // copy one pair into another i.e. p into s
    s = p; // does not follow by reference passing
    s.first = 20;
    cout << p.first << " @ " << p.second << endl;
    cout << s.first << " @ " << s.second << endl;
    // make a call by refernce by passing p into &s
    // application of pairs
    // given two arrays, suppose there is some relation btw elements of same indices of both the arrays
    // now swap elements at first and third index of array 
    int a[] = {1, 2, 3}, b[] = {2, 3, 4};
    // create an array of pairs and add elements to it
    pair<int, int> pa[3];
    pa[0] = {1, 2};
    pa[1] = {2, 3};
    pa[2] = {3, 4};
    // printing array of pairs alike normal array
    for(int i = 0; i < 3; i++){
        cout << pa[i].first << " " << pa[i].second << endl;
    }
    // swap first and last pair
    swap(pa[0], pa[2]);
    for(int i = 0; i < 3; i++){
        cout << pa[i].first << " " << pa[i].second << endl;
    }
    // write a program to form pairs by taking input from user and print them onto the console
    pair<string, string> m1, m2;
    cin >> m1.first >> m1.second >> m2.first >> m2.second;
    cout << m1.first << " " << m1.second << endl << m2.first << " " << m2.second;
    
    // Vectors
    // initialization of vectors
    vector<int> v; // empty vector, no values
    // inserting values in a vector via input from user
    int n; cin >> n; // input size from user
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x); // push_back function adds value to the end of vector; time complexity - O(1)
    }
    // write a function printVec to print any vector
    printVec(v); 
    // to declare a vector of predefined size use ()
    vector<int> x(3); // vector x declared of size 3
    // the above vector has all elements = 0 until modified
    printVec(x);
    // if we now add an element to x it gets added at x[4] onwards i.e. at the end of the vector
    // to fill a vector with a particular element declare it in the initialisation itself
    vector<int> a1(5, 13);
    printVec(a1);
    // pop_back function; returns the last element of the vector and removes it from the vector
    a1.pop_back();
    printVec(a1);
    // arrays can't be copied, pointers become same; vectors can be
    vector<int> b1 = v; // copies the entire vector; time complexity O(n)
    printVec(b1);
    */
}