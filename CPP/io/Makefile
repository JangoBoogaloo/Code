PROJECT := program
SCRIPT :=$(PROJECT) #add arguments

#set the compiler option
CFLAGS := -Wall \
				  -pedantic \
				  -Wextra \
				  -Wno-missing-field-initializers \
				  -g

CC := g++

OBJECT_DIR :=obj/
SOURCE_DIR :=src/

#header include
INCLUDES := -I./$(SOURCE_DIR)#\ 
#library link
LD_LIBS := #-lpthread #\ 

SOURCES :=$(wildcard $(SOURCE_DIR)*.cpp) 
OBJECTS :=$(SOURCES:$(SOURCE_DIR)%.c=$(OBJECT_DIR)%.o)

$(PROJECT): $(OBJECTS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(PROJECT) $(OBJECTS) $(LD_LIBS)

$(OBJECT_DIR)%.o: $(SOURCE_DIR)%.c
	$(CC) $(CFLAGS) -c -o $@ $<

all: $(PROJECT) $(OBJECTS)

run: all
	./$(SCRIPT)

clean:
		rm -rf $(OBJECT_DIR)*.o $(PROJECT) $(PROJECT).dSYM
