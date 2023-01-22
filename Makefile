TARGETS		= \
	uninitialized-variable \
	read-nullptr \
	read-unallocated-memory \
	write-nullptr \
	write-unallocated-memory \
	buffer-overflow-stack \
	buffer-overflow-heap
CXX		= g++
CXXFLAGS	= -Wall

.PHONY: all
all: $(TARGETS)

%: %.cpp
	${CXX} ${CXXFLAGS} -o $@ $<

.PHONY: clean
clean:
	rm -f $(TARGETS)
