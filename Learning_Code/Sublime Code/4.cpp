#include<bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N,a;
	int res1 = 0;
	cin>>N;
	while(N--){
		int ans = 0;
	    cin>>a;
		vector<int>vec(a,0);
	    for(int i=0; i<a; i++){
	        int temp;
	        cin>>temp;
	        vec.push_back(temp);
	    }
		sort(vec.begin(), vec.end());
	    vec.erase(unique(vec.begin(),vec.end()),vec.end());
	    ans = vec.size()-1;
	    cout<<ans<<endl;
	}
	return 0;
}
	   
