TARGET=bakko_01
OBJS=test.o data_tranceiver.o 
CC=gcc
CFLAGS=-Wall

.SUFFIXES: .c .o

$(TARGET) : $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(CFLAGS)

.c.o : $<
	$(CC) -c $(CFLAGS) $<