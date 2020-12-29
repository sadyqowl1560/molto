// App Link : https://apkpure.com/lock-screen/com.idev.app.security.lockscreen
// Thanks for phhusson ;because helping to reduce cpu usage
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void main(void)
{
  while( 1 ) 
  {
    if (system("pidof com.idev.app.security.lockscreen") == 0) {
      if (system("dumpsys activity services | grep com.idev.app.security.lockscreen/idev.lockscreen.control.LockScreenService") != 0) {
        system("pm enable com.idev.app.security.lockscreen");
        system("pm enable com.idev.app.security.lockscreen/idev.lockscreen.activity.MainActivity");
        system("input keyevent 26");
        system("lockscreen");
        system("am startservice com.idev.app.security.lockscreen/idev.lockscreen.activity.MainActivity");
        system("log -p i Molto : Do not worry , I am here sir");
      }
    }
    else {
      system("pm enable com.idev.app.security.lockscreen");
      system("input keyevent 26");
      system("lockscreen");
    }
    sleep(10);
  } 
}

