#include<bits/stdc++.h>
using namespace std;


signed main(){
	
	string s, t;
	for(fstream cin("./in.txt", ios::in); !cin.eof(); cin >> t) s += t;
//	cout << s.size() << '\n';
	
	printf("保存文件名: ");
	string name; cin >> name;
	
	fstream cout("./out/"+name+".txt", ios::out);
	for(int i; (i=s.find("/song?id=", i))<s.size(); ){
		i += 9;
		int j = s.find('\"', i);
		cout << "https://music.163.com/song/media/outer/url?id=" + s.substr(i, j-i) + ".mp3" << '\n';
		std::cout << "https://music.163.com/song/media/outer/url?id=" + s.substr(i, j-i) + ".mp3" << '\n';
		i = j + 4;
	}
}
