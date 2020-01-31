#include <linux/kernel.h>

asmlinkage long sys_so(int arg0)
{
  printk(" Juan Diego S. M. AMDGSDGDOG");
  printk("--syscall arg %d", arg0);

  return((long) arg0);
}
