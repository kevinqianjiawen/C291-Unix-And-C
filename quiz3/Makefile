all: importexport 

importexport: main.c names.c
	gcc -g -o importexport names.c main.c

clean:
	rm -rf importexport

test: importexport
	./importexport phone_list_in.csv phone_list_out.csv Kenn
	diff phone_list_in.csv phone_list_out.csv
