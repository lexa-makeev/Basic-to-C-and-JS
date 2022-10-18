.SILENT:

project:
	gcc -std=c99 -Wall -Wpedantic -o  dist/project.exe project.c 
	./dist/project.exe
server:
	npm i http-server -g
	http-server
