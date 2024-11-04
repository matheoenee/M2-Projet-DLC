CC = gcc
CFLAGS = -Wall
SRC = main.c controller.c view.c banner.c model/aes.c
TARGET = crypto_calculator

all: $(TARGET)

$(TARGET):
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

