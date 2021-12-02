elabora : elabora.o					#elabora <-- è il nostro target GENERALE
	gcc -o elabora elabora.o
	
elabora.o : elabora.c				#elabora.o <-- è il nostro target in questa parte
	gcc -c -o elabora.o elabora.c

install : elabora
	cp elabora ..					#copy