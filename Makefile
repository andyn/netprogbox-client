CC = gcc
CFLAGS = -std=c99 -pedantic -Wall -Wextra -I./include -g -Icommon
CPP = g++
CPPFLAGS = -std=c++98 -pedantic -Wall -Wextra -I./include -g -Icommon

PRODUCTION_BINARIES = npbclient

all: $(PRODUCTION_BINARIES)

npbclient: client/npbclient.oo client/filedescriptor.oo client/url.oo
	$(CPP) $(CPPFLAGS) -o $@ $^

clean:
	# Removing temporary source code files
	-rm rf *~
	-rm -f client/*~
	-rm -f common/*~
	# Removing intermediate build results
	-rm -f client/*.oo
	-rm -f client/*.o
	-rm -f common/*.oo
	-rm -f common/*.o
	# Removing executables
	-rm $(PRODUCTION_BINARIES)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

%.oo : %.cc
	$(CPP) $(CCFLAGS) -o $@ -c $<


.PHONY: all test clean
	
