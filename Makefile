.SILENT:

project:
	gcc -std=c99 -Wall -Wpedantic -o  dist/project.exe project.c 
	./dist/project.exe
serverinstall:
	npm i http-server -g
runserver:
	http-server
