//week11-3.cpp SOIT108_Advence_-9
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> a(N);
	for(int i=0; i<N; i++){
		cin >> a[i];
	}
	for(int i=N-1; i>=0; i--){
		if(a[i]%2==1) cout << a[i] << " ";
	}
}
