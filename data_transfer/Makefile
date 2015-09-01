TARGET=data_tranceiver_test
OBJS=test.o data_tranceiver.o 
TESTOBJS=test_b3.o data_tranceiver_b.o
CC=gcc
CFLAGS=-Wall

.SUFFIXES: .c .o

$(TARGET) : $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(CFLAGS)

test: $(TESTOBJS)
	$(CC) $(TESTOBJS) -o test $(CFLAGS)

.c.o : $<
	$(CC) -c $(CFLAGS) $<