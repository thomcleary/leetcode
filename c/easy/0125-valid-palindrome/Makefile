CC = gcc
CFLAGS = -std=gnu11 -O2 -Wall -Wextra -Werror -pedantic -Wshadow -Wuninitialized -Wformat -Wconversion
OBJ = test.o valid-palindrome.o
TARGET = test

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
