SRCS = main.cpp book.cpp
OBJS = main.o book.o

all: test

test: $(OBJS)
	g++ -o test $(OBJS)

main.o: main.cpp

book.o: book.cpp book.h

clean:
	rm -f $(OBJS)

distclean: clean
	rm -f test
