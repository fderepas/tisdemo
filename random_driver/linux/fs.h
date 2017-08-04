#ifndef __FS_H__
#define __FS_H__

#include <stddef.h>
#define KERN_ALERT
#define EBUSY 1

struct file { int foo;};
struct inode { int foo;};
typedef long loff_t;
typedef long ssize_t;
//typedef long size_t;

void printk(char*,...);
struct file_operations {
  loff_t (*llseek) (struct file *, loff_t, int);
  ssize_t (*read) (struct file *, char *, size_t, loff_t *);
  ssize_t (*write) (struct file *, const char *, size_t, loff_t *);
  int (*open) (struct inode *, struct file *);
  int (*release) (struct inode *, struct file *);
};
int register_chrdev(unsigned int major, const char*name, struct file_operations*ops);
int unregister_chrdev(unsigned int major, const char *name);
void put_user(unsigned char, void*);
extern struct file_operations global_file_ops;

#endif
