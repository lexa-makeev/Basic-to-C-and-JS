# Для работы с файлами данного формата необходимо
# установить утилиту make. На Windows это можно
# сделать при помощи пакетного менеджера Chocolatey:
# https://chocolatey.org/install

# После установки утилиты choco для установки
# утилиты make достаточно выполнить следующую
# команду: choco install make

# Инструкция для выключения отладочных сообщений.
.SILENT:

# Название команды. Использование: make pract1
# Вызов компилятора GCC. Установка на Windows:
# https://osdn.net/projects/mingw/
project:
	gcc -std=c99 -Wall -Wpedantic -o  dist/project.exe project.c 
	./dist/project.exe
server:
	npm i http-server -g
	http-server
