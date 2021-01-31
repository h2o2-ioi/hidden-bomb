#include<windows.h>
#include<cstdio>
int t;
int main(){
	SetConsoleTitle("bombhider");
	system("color 10");
	printf("time:");
	scanf("%d",&t);
	HWND hwnd;
	hwnd=FindWindow(NULL,"bombhider");
	if(hwnd){
		ShowWindow(hwnd,SW_HIDE);
	}
	LONG GetWindowLong(HWND hWnd,int nIndex);
	LONG SetWindowLong(HWND hWnd,int nIndex,LONG dwNewLong);
	Sleep(t*1000);
	ShellExecute(NULL,NULL,"bombdetonator.exe",NULL,NULL,SW_HIDE);
	return 0;
}
