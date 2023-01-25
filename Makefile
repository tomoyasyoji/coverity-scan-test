TARGETS		= \
	uninitialized-variable \
	read-nullptr \
	read-unallocated-memory \
	write-nullptr \
	write-unallocated-memory \
	buffer-overflow-stack \
	buffer-overflow-heap \
	deadlock-mutex
CXX		= g++
CXXFLAGS	= -Wall -lpthread

.PHONY: all
all: $(TARGETS)

%: %.cpp
	${CXX} ${CXXFLAGS} -o $@ $<

.PHONY: clean
clean:
	rm -f $(TARGETS)
