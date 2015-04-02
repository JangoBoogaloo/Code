SRC := main.c
PROG := less_more
LDFLAG :=  #e.g. -lpthread

all:
	clang -Wall $(LDFLAG) -o $(PROG) $(SRC)

clean:
	rm -f $(PROG)

run: all
	./$(PROG)

again: clean all run
