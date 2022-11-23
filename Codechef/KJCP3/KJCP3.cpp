#include <iostream>
#include<cstdio>
#include<set>
using namespace std;
 
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
	    set <int> set1,set2; 
	    int n;
	    scanf("%d",&n);
	    for(int i=0;i<n;i++) {
	        int temp;
	        scanf("%d",&temp);
	        set1.insert(temp);
	    }
	    for(int i=0;i<n;i++) {
	        int temp;
	        scanf("%d",&temp);
	        set2.insert(temp);
	    }
	    set <int>::iterator it2 = set2.begin();
	    for(set <int>::iterator it1 = set1.begin();it1!=set1.end() && it2!=set2.end();it1++,it2++) {
            cout<<*it1<<" "<<*it2<<" ";	        
	    }
	    cout<<"\n";
	}
	return 0;
}