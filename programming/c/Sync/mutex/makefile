CMP	=	gcc
CMPFLAGS=	-g
LIB	=	-pthread
EXENAME1=	startApp.e

INCLS	=	commonDefs.h
FILES	=	startApp.o coffeeTeller.o customer.o

do:
		@make --no-print-directory clean
		@make --no-print-directory coffeeTeller

coffeeTeller:	$(FILES)
		$(CMP) $(CMPFLAGS) $(FILES) $(LIB) -o $(EXENAME1)

.c.o:		$(INCLS)
		$(CMP) -c $(CMPFLAGS) $<

.cc.o:		$(INCLS)
		$(CMP) -c $(CMPFLAGS) $<

all:
		@make clean
		make doit

clean:		
		@rm -f *.e *.o

purge:
		@make clean
