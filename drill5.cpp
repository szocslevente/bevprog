#include "std_lib_facilities.h"

int main(){
try {
	//(1) Cout<<"Success!\n"; HIBÁS (case-sensitive "Cout")
	cout<<"(1) Success!\n";
	//(2) cout<<"Success!\n; HIBÁS ("Success\n; ---> "Success\n";)
	cout<<"(2) Success!\n";
	//(3) cout<<"Success"<<!\n" HIBÁS ("Success"<<!\n" ----> "Success"<<"\n";)
	cout<<"(3) Success!\n";
	//(4) cout<<success<<'\n'; HIBÁS (success<<'\n'; ---> "Success"<<"\n";)
	cout<<"(4) Success!"<<"\n";
	//(5) string res=7;vector<int> v(10);v[5]=res;cout<<"Success!\n"; HIBÁS (string helyett int)
	int res=7; vector<int> v(10);v[5]=res;cout<<"(5) Success!\n";
	//(6) vector<int> v(10);v(5)=7;if (v(5)!=7) cout<<'Success!\n"; HIBÁS, 
	vector<int> v1(10); v1[5]=7; if (v1[5]==7) cout<<"(6) Success!\n";
	//(7) if (cond) cout<<"Success!\n"; else cout<<"Fail!\n";
	if (5!=3) cout<<"(7) Success!\n"; else cout<<"Fail!\n";
	//(8)bool c=false; if(c) cout<<"Success!\n";else cout<<"Fail!\n";
	bool c=false; if(!c) cout<<"(8) Success!\n"; else cout<<"Fail!\n";
	//(9)string s="ape"; boo c="fool"<s;if(c) cout<<"Success!\n";
	string s="ape"; bool c1="fool">s;if(c1) cout<<"(9) Success\n";
	//(10) string s="ape"; if(s=="fool") cout<<"Success!\n";
	string s1="ape";if(s1!="fool") cout<<"(10) Success!\n";
	//(11) string s="ape";if(s=="fool") cout<"Success!\n";
	string s2="ape";if (s2!="fool") cout<<"(11) Success!\n";
	//(12) string s="ape"; if(s+"fool") cout<"Success\n";
	string s3="ape"; if(s3!="fool") cout<<"(12) Success!\n";
	//(13) vector<char> v(5); for (int i=0; 0<v.size();++i);cout<<"Success!\n";
	vector<char> v2(5); for (int i=0; i<v2.size();++i);cout<<"(13) Success!\n";
	//(14) vector<char> v(5); for(int i=0;i<=v.size();++i);cout<<"Success!\n";
	vector<char> v3(5); for(int i=0; i<=v3.size();++i);cout<<"(14) Success!\n";
	//(15)string s="Success!\n"; for(int i=0; i<6; ++i) cout<<s[i];
	string s4="(15) Success!\n"; for (int i=0;i<6;++i); cout<<s4;
	//(16) if(true) then cout<<"Success!\n";else cout<<"Fail!\n";
	if(true)cout<<"(16) Success'\n";else cout<<"Fail!\n";
	//(17)int x=2000; char c=x; if(c==2000) cout<<"Success!\n";
	int x=2000; int c2=x; if(c2==2000) cout<<"(17) Success!\n";
	//(18) string í="Success!\n";for (int i=0;i<10;++i) cout<<s[i];
	string k="(18) Success!\n";for (int i=0;i<10;++i); cout<<k;
	//(19)vector v(5);for (int i=0;i<=v.size();++i);cout<<"Success!\n";
	vector<int> v4(5);for (int i=0;i<=v4.size();++i);cout<<"(19) Success!\n";
	//(20)int i=0; int j=9; while(i<10)++j;if(j<i) cout<<"Success!\n";
	int i=0; int j=9; while(i<10)++i; if (j<=i) cout<<"(20) Success!\n";
	//(21)int x=2;double d=5/(x-2);if(d==2*x+0.5)cout<<"Success!\n";
	int x1=2; double d=5/(x1-1); if(d==2*x1+1) cout<<"(21) Success!\n";
	//(22)string<char> s="Success!\n"; for(int i=0;i<=10;++i) cout<<s[i];
	string s5="(22) Succes!\n"; for(int i=0;i<=10;++i); cout<<s5;
	//(23)int i=0;while(i<10)++j;if(j<i) cout<<"Success!\n";
	int i1=0; int j1=0; while(i1<10) ++i1; if(i1>j1) cout<<"(23) Success!\n";
	//(24)int x=4; double d=5/(x-2);if(d=2*x/0.5) cout<<"Success!\n";
	int x2=4; double d1=5/(x2-3); if(d1=2*x2/1+1) cout<<"(24) Success!\n";
	//(25)cin>>Success!\n";
	cout<<"(25) Success!\n";
	keep_window_open();
	return 0;
}
catch(exception& e) {
	cerr<<"error: "<<e.what()<<'n';
	keep_window_open();
	return 1;
}
catch (...) {
	cerr<<"Oops:unknown exception!\n";
	keep_window_open();
	return 2;
}
}
