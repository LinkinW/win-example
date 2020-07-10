#define _UNICODE
#define UNICODE

#include <windows.h>

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
               PWSTR szCmdLine, int CmdShow) {
               
    MessageBoxW(NULL, szCmdLine, L"我的GUI", MB_OK);

    return 0;
}