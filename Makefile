TARGETS		= \
	uninitialized-variable \
	read-nullptr \
	read-unallocated-memory \
	write-nullptr \
	write-unallocated-memory \
	buffer-overflow-stack \
	buffer-overflow-heap
CC		= gcc
CFLAGS		= -Wall
CXX		= g++
CXXFLAGS	= -Wall

.PHONY: all
all: $(TARGETS)

%: %.c
	${CC} ${CFLAGS} -o $@ $<

%: %.cpp
	${CXX} ${CXXFLAGS} -o $@ $<

.PHONY: clean
clean:
	rm -f $(TARGETS)
