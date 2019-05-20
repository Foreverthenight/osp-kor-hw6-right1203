CC = gcc
CFLAGS = -Wall -g -c
INCLUDE = -I.
LIBS = -L. -lm

OBJS = phoneBookMain.o register.o print.o search.o delete.o
all: phoneBookMain
%.o: %.c
	$(CC) $(INCLUDE) $(CFLAGS) $<
phoneBookMain: $(OBJS)
	$(CC) -o phoneBookMain $(OBJS) $(LIBS)
clean:
	rm -f phoneBookMain $(OBJS)

