#include <linux/fs.h>

struct file_operations global_file_ops;

int register_chrdev
(unsigned int major,
 const char*name,
 struct file_operations*ops)
{
  global_file_ops=*ops;
  return 1;
}
void printk(char*s,...) {
  return;
}
int unregister_chrdev(unsigned int major, const char *name) {
  return 0;
}
void put_user(unsigned char s, void*p) {
  return;
}


