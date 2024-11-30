EXE=main
OBJS=Average.o Recovery.o Del_list.o help.o main.o Sort.o Delete.o Find_id.o List.o Search.o Type.o
CC=gcc
CFLAGS=-c -g -Wall
$(EXE):$(OBJS)
	$(CC) $^ -o $@
%.o:%.c
	$(CC) $(CFLAGS) $< -o $@
.PHONY:clean
clean:
	$(RM) $(OBJS) $(EXE)