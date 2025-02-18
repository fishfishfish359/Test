#include<bits/stdc++.h>
using namespace std;
int N;

int main()
{
	cin >> N;
	vector<int> numbers(N);
    for (int i = 0; i < N; ++i) 
        cin >> numbers[i];
 	
	unordered_set<int> numSet;
    int Count = 0;
 
    for (int num : numbers) {
        if (numSet.find(-num) != numSet.end()) 
            ++Count;
        numSet.insert(num);
    }
 
    cout << Count << endl;
	return 0;
 } 

