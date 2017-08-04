#define MODULE_LICENSE(X)
#define MODULE_AUTHOR(X)
#define MODULE_DESCRIPTION(X)
#define module_init(X) int (*global_module_init) () = X;
#define module_exit(X) void (*global_module_exit) () = X;


