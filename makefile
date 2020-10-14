CC = gcc
CFLAGS = -Wall 
LDFLAGS = -lm
OBJFILES = main.o utils.o
TARGET = Programowanie_strukturalne_w_C_UKSW

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET) *~