SRC := $(wildcard *.c)

OBJ := $(patsubst %.c, %.o, $(SRC))
c-operator.exe: $(OBJ)
	gcc -o $@ $(OBJ)

clean:
	rm *.o *.exe
