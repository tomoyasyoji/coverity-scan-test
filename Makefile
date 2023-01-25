TARGETS		= \
	uninitialized-variable \
	uninitialized-memory \
	read-nullptr \
	read-unallocated-memory \
	write-nullptr \
	write-unallocated-memory \
	buffer-overflow-stack \
	buffer-overflow-heap \
	deadlock-mutex
CXX		= g++
CXXFLAGS	= -Wall -pthread

.PHONY: all
all: $(TARGETS)

%: %.cpp
	${CXX} ${CXXFLAGS} -o $@ $<

.PHONY: clean
clean:
	rm -f $(TARGETS)
