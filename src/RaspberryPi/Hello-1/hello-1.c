/*
* Linux Kernel Module Hello World
*
*@Author: Aaron Earl
*
* Tutorial from lksmpg. Was for kernel
* ver 2.7 but process should be similar.
*
* Special Note: All of these tutorials
* were done on a RaspberryPi Zero W
* V1.3 w/ARM Cortex V6
*/

#include <linux/module.h> /*Needed by all modules*/
#include <linux/kernel.h> /*Needed for KERN_INFO*/

int init_module(void)
{
	printk(KERN_INFO "Hello World! 1\n");

	/*
	* A non 0 return means init_module failed; module can't be loaded
	*/
	return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO "Goodbye World! 1\n");
}
