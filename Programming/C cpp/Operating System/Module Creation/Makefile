obj-m +=basic.o

KDIR = /usr/src/linux-headers-5.8.0-44-generic

all:
 $(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules
clean:
 rm -rf *.o *.ko *.mod.* *.symvers *.order
