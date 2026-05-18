CC = gcc
CFLAGS = -Wall -g -I/opt/homebrew/include
LIBS = -L/opt/homebrew/lib -lsqlite3 -lhpdf
TARGET = app

all:
	@echo "==================================="
	@echo "  Third-party Libraries"
	@echo "==================================="
	@echo "  SQLite3: /opt/homebrew/lib/libsqlite3.dylib"
	@echo "  libharu: /opt/homebrew/lib/libhpdf.dylib"
	@echo "==================================="
	@echo ""
	@echo "Compiling..."
	$(CC) $(CFLAGS) main.c $(LIBS) -o $(TARGET)
	@echo "Done!"

clean:
	rm -f $(TARGET)

.PHONY: all clean

