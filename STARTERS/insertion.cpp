#include<bits/stdc++.h>
using namespace std;


void func(vector<int> v){

	int i = 0;
	
	for(int j = 1;j < v.size();j++){
		
		int k = v[j];
		int i = j-1;
		while(i >= 0){
			if(k < v[i]){
				v[i+1] = v[i];
			}else{
				break;
			}
			i--;
		}
		v[i+1] = k;
	}


	printf("After Sorting ::\n");
	for(auto &q:v){
		cout<<q<<" ";
	}

}


int main(){

	vector<int> v = {4,67,23,1,4,464,456,45,5,-1,3,4,36};

	printf("Before Sorting ::\n");
	for(auto &q:v){
		cout<<q<<" ";
	}
	cout<<"\n";
	
	func(v);

	return 0;


}