#@Author: Aaron Earl
#
# Makefile for hello-1.c
#
# Based on tutorial lkmpg
#
# Note: Different from the orginal tutorial.
# I couldn't have the the system grab my kernel
# version because the header files were missing.
# I googled the issue and added them by
# using sudo apt-get install linux-headers.
# I then picked a relevant version.
# The online help said to symbolically
# link the new folder using the sudo ln -s
# command but I opted not to because of
# other projects I was working on.
# I later used the symbolic link
# and it didn't fix anything. Later
# after I compiled by using absolute
# path to build, insmod couldn't load
# the module. Error wrong file format?
# Further search results haven't proved
# helpful. May have to completely
# re-compile a linux kernel from scratch.
#
# Special Note: This entire project was
# done on a RaspberryPi Zero W V1.3
# w/ARM Cortex V6

obj-m += hello-1.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
