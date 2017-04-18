#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include <functional>
#include <set>
using namespace std;
typedef long long ntype;
const int coeff[3] = { 2, 3, 5 };

//ugly number即是只能被2，3，5整除的数字
//
//int main(){
//
//
//	priority_queue<ntype, vector<ntype>, greater<ntype> > pq;
//	set<ntype> ans;
//
//	pq.push(1);
//	ans.insert(1);
//	for (int i = 1;; i++){
//		ntype var = pq.top();
//		pq.pop();
//		if (i == 1500) {
//			cout << "ok!" << "num is" << var << endl;
//			break;
//		}
//		
//		for (int i = 0; i < 3; i++){
//			ntype num = var * coeff[i];
//			if (!ans.count(num)){
//				ans.insert(num);
//				pq.push(num);
//				cout << "num is " << num << endl;
//			}
//		}
//	}
//
//
//	system("pause");
//	return 0;
//}