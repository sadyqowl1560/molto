// App Link : https://apkpure.com/lock-screen/com.idev.app.security.lockscreen
// Thanks for phhusson ;because helping to reduce cpu usage
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void main(void)
{
  int run_or_no;
  int works_or_stopped;
  while( 1 ) 
  {
    run_or_no = system("pidof com.idev.app.security.lockscreen");
    works_or_stopped = system("dumpsys activity services | grep com.idev.app.security.lockscreen/idev.lockscreen.control.LockScreenService");
    if (run_or_no == 0) {
      if (works_or_stopped != 0) {
        system("pm enable com.idev.app.security.lockscreen");
        system("pm enable com.idev.app.security.lockscreen/idev.lockscreen.activity.MainActivity");
        system("input keyevent 26");
        system("lockscreen");
        system("am startservice com.idev.app.security.lockscreen/idev.lockscreen.activity.MainActivity");
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

