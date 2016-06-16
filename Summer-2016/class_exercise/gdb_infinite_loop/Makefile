all: importexport 

importexport: main.c names.c
	gcc -Wall -g -pg -o importexport main.c names.c

clean:
	rm -rf importexport
	rm -rf gmon.out gprof.txt phone_list_out.csv valgrind.txt
	rm -rf names.splint main.splint

test: importexport
	./importexport phone_list_in.csv phone_list_out.csv
	diff phone_list_in.csv phone_list_out.csv

valgrind: main.c names.c
	gcc -Wall -g -o importexport main.c names.c
	valgrind --log-file="valgrind.txt" --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./importexport  phone_list_in.csv phone_list_out.csv 

gprof: importexport
	./importexport phone_list_in.csv phone_list_out.csv	
	gprof importexport gmon.out > gprof.txt

splint: main.c names.c
	- splint main.c > main.splint 2>&1
	- splint names.c > names.splint 2>&1

