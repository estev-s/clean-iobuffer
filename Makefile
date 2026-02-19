CC = gcc
CFLAGS = -Iinclude -Wall

# Folders
SRCDIR = src
LIBDIR = src/libs
OBJDIR = obj
BINDIR = bin

# Find all source files
SOURCES = $(wildcard $(SRCDIR)/*.c) $(wildcard $(LIBDIR)/*.c)

# Convert the list of .c files into a list of .o files in the obj folder
# This takes src/main.c -> obj/main.o
OBJECTS = $(patsubst %.c, $(OBJDIR)/%.o, $(notdir $(SOURCES)))

# The final name of your program
TARGET = $(BINDIR)/program

# The main rule (Link everything)
$(TARGET): $(OBJECTS) | $(BINDIR)
	$(CC) $(OBJECTS) -o $(TARGET)

# Rule to compile .c files into .o files
# This handles files in src/
$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# This handles files in src/libs/
$(OBJDIR)/%.o: $(LIBDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@


# Clean up
clean:
	rm -rf $(OBJDIR) $(BINDIR)
