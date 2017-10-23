#DA COSTA MOCRET



but : projet


OFILES = menu.o \
	 jouer.o \
	 jouersolo.o \
	 game.o \
	 main.o \


CC = gcc

CFLAGS = -Wall -ansi -pedantic -g -lgraph


menu.o : jouer.h jouersolo.h

jouer.o : game.h

jouersolo.o: game.h

game.o : menu.h

main.o : menu.h


projet : $(OFILES)
	  $(CC) $(CFLAGS) -o projet $(OFILES)


clean :
	-rm -f $(OFILES) projet

.PHONY : but clean
