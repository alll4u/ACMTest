#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

string repr(string& str){
	string ans = str;
	for (int i = 0; i < ans.length(); i++)
		ans[i] = tolower(ans[i]);
	sort(ans.begin(), ans.end());
	return ans;
}

vector<string> words;
map<string, int> cnt;
int main(){

	string s;

	//讲输入循环读入到vector中，将格式化的字符串加入到map中，顺便统计字符个数
	while (cin >> s){
		if (s[0] == '#') break;
		words.push_back(s);
		string r = repr(s);
		//添加一个新的map项目
		if (!cnt.count(r)) cnt[r] = 0;
		cnt[r]++;
	}

	vector<string> ans;
	for (int i = 0; i < words.size();i++)
		if (cnt[repr(words[i])] == 1) 
			ans.push_back(words[i]);
	sort(ans.begin(), ans.end());
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << endl;

	system("pause");
	return 0;
}