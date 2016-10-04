
** following commands used to create sharedobjects files and link to the binary
gcc -c -Wall -Werror -fPIC udp6.c
gcc -shared -o libudp6.so udp6.o
gcc -L/home/acklio/Desktop/Trial/udp6sh -Wall test.c -o test -ludp6
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:`pwd`
sudo ldconfig `pwd`
ldconfig -p | grep udp
sudo ./test 

