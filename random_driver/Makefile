CFLAGS:=-Wall -I. -nostdlib -Itisstub


default :
	gcc -Wall -I. myrandom.c linux/fs.c main.c



default2 :
	gcc -Wall -c -I. -Itisstub myrandom.c 
	gcc -Wall -c -I. -Itisstub linux/fs.c 
	gcc -Wall -c -I. -Itisstub main.c

tis:
	tis-analyzer-gui -slevel 200 -val -cpp-extra-args="-I." myrandom.c main.c linux/fs.c 

clean:
	rm -rf `find . -name \*\~` *.o a.out
