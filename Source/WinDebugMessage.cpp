#include <windows.h>
#include <stdio.h>

void FFDebugMessage(const char *_msg)
{
  char msg[2048];
  _snprintf_s(msg, sizeof(msg), "%s\n",_msg);
  
  OutputDebugString(msg);
}