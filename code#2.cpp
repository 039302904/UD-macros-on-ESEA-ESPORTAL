#include <windows.h>

//extern "C" __int64 my_ntui(_int64, int*);
extern "C" __int64 my_ntui(UINT cInputs, LPINPUT pInputs, int cbSize)
extern "C" void my_me(DWORD dwFlags, DWORD dx, DWORD dy, DWORD dwData, ULONG_PTR, dwExtraInfo);

 int main()
 {
  
   while(true)
   {
        if(GetAsyncKeyState(VK_MENU))
        {
    
           INPUT  Input = { 0 };
           Input_type = INPUT_MOUSE;
           Input.mi.dwFlags = MOUSEEVENTF_move | MOUSEEVENTF_ABSOLUTE;
           Input.mi.dx = rand() % 10000;
           Input.mi.dy = rand() % 10000;
           my_ntui(1, &Input, sizeof(INPUT));
           
           //my_me(MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE, rand() % 10000, rand() % 10000, 0, 0);
           Sleep(500);
          
         }
      
       }
    
    }
           
 
   
