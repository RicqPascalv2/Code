#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm32.lib")

int main()
{
	PlaySound("audio.mp3", NULL, SND_FILENAME | SND_ASYNC);
	system("PAUSE");
	return 0;
}