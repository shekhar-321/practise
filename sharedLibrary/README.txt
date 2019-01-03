We create here shared library or dynamic linked library 
run make 
it will create a.out 
ldd a.out 
strings -a l.so > a.txt 
We will find defination of foo and puts from this a.txt  
Put sleep in driver.c
ps ax | grep a.out 
get the process id 
assume process id is 19274
cat /proc/19274/maps
cat /proc/19274/map_files
cat /proc/19274/status

