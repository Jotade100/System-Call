#include <linux/kernel.h>

asmlinkage long sys_so(int arg0)
{
  printk("%d", arg0);

  return((long) arg0);
}
