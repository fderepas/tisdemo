#include <linux/fs.h>
#include <asm/uaccess.h>
#include <stdlib.h>

extern int (*global_module_init)(void);
extern void (*global_module_exit)(void);

int main() {
  global_module_init();
#define BUF_SZ 101
  char buf[BUF_SZ];
  global_file_ops.open(NULL,NULL);
  global_file_ops.release(NULL,NULL);
  global_file_ops.read(NULL,buf,BUF_SZ,NULL);
  global_file_ops.write(NULL,buf,BUF_SZ,NULL);
  global_module_exit();
  return 0;
}
