CC = gcc
CFLAGS = -W -Wall
TARGET = main
DTARGET = main_debug
OBJECTS = main.o product.o manager.o 
all : $(TARGET)
$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
$(DTARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -DDEBUG -o $@ $^
clean:
	rm *.o main
