CC = gcc
CFLAGS = -std=gnu11 -O2 -Wall -Wextra -Werror -pedantic -Wshadow -Wuninitialized -Wformat -Wconversion
OBJ = tests.o two-sum-ii.o
TARGET = tests

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
