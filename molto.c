// App Link : https://play.google.com/store/apps/details?id=dev.ukanth.ufirewall
// Thanks for phhusson ;because helping to reduce cpu usage
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void main(void)
{
  while( 1 ) 
  {
    if (system("pidof dev.ukanth.ufirewall") != 0) {
      system("pm enable dev.ukanth.ufirewall || log -p e Molto : app is not installed");
      system("am startservice dev.ukanth.ufirewall/dev.ukanth.ufirewall.service.FirewallService");
      system("log -p i Molto : Do not worry , I am here sir");
    }
    sleep(10);
  } 
}
