//## 腾讯会议点名器 ##
//version:1.0
//author:Find_NICK(括号)
//usage：参见演示视频
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<queue>
#include<stack>
#include<vector>
#include<set>
#include<map>
#include<ios>
#include<iosfwd>
#include<istream>
#include<bitset>
#include<cctype>
#include<cerrno>
#include<clocale>
#include<complex>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include<functional>
#include<limits>
#include<list>
#include<ostream>
#include<queue>
#include<sstream>
#include<csignal>
#include<fstream>
#include<functional>
#include<windows.h>
#define INF 0x3f3f3f3f
#define REAL_INF 2147483647
#define MAXN 100
#define BUGOUT printf("Here for the No.%d BUG!\n",bug_count++)
#define CRASH raise(SIGSEGV)
#define CRASH_WITH_ABORT abort()
#define CLOSE ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
#define isd(c) ('0'<=(c)&&(c)<='9')
#define isa(c) ('a'<=(c)&&(c)<='z')
#define isA(c) ('A'<=(c)&&(c)<='Z')
#define endl "\n"
#define PI acos(-1)
using namespace std;
int bug_count = 1;
char ID[100];
int num = 4;
void NUMBER(int x) {
	BYTE key = x + 0x30;
	keybd_event(key, 0, 0 , 0);
	Sleep(5);
	keybd_event(key, 0, KEYEVENTF_KEYUP, 0);
	Sleep(5);
}
void nextgroup(int i) {
	ID[0] = '0';
	ID[1] =  '7';
	ID[2] = i + '0';
}
void clr() {
	int len = strlen(ID);
	for (int i = 0; i < len; i++) {
		keybd_event(VK_BACK, 0, 0 , 0);
		Sleep(10);
		keybd_event(VK_BACK, 0, KEYEVENTF_KEYUP, 0);
		Sleep(10);
	}
}
void run() {
	int len = strlen(ID);
	for (int i = 0; i < len; i++) {
		NUMBER(ID[i] - '0');
	}
}
int main() {
	//
	//codes here !
	//
	Sleep(3000);
	for (int i = 0; i <= num; i++) {
		nextgroup(i);
		run();
		Sleep(4000);
		clr();
	}
	return 0;
}
// 0123456789



