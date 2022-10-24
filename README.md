# Проектная работа по разработке кроссплатформенных программных систем
 Видео по запуску на React можно увидеть [тут](https://youtu.be/mae2xPlVDa8)
## Оглавление
1. [Си](#Си)
2. [React](#React)

## Си
Папка `c_project`
### Windows CLI
Для тестирования кода на Windows CLI, требуется в папке запустить CLI и вписать команду `make project`, после ввести любые заглавные буквы для выполнения игры.

![win](https://user-images.githubusercontent.com/74838417/197536961-e5f08ecd-e767-411f-bf72-c3a8143975f3.png)



### Linux
Для тестирование можно запустить в любом компиляторе Linux C

![linux](https://user-images.githubusercontent.com/74838417/197536989-bfa83cbe-594e-44bb-bc6b-f618b1991fa2.png)



### Web
Для тестирования кода на Web приложении, требуется установить Node.js, после в папке запустить CLI и вписать команду `make installemsdk` для установки необходимых пакетов, далее вписать команду `make runserver`, после зайти по предложенным серверам и открыть `project.html`, далее ввести любые заглавные буквы в alert для выполнения игры.

![web](https://user-images.githubusercontent.com/74838417/197537006-5b436ddf-f12c-4c0a-bb50-06b2c33f45d7.png)

## React
React позволяет делать кроссплатформенные приложения. Данный проект поддерживает билд под Web, Linux, Windows и MacOS, также с помощью React Native под Android приложение.
### Web
Папка `react_app`
Чтобы отобразить Веб-приложение в браузере следует в CLI ввести в проекте команду `npm install` для установок всех зависимостей проекта. После вы можете вписать `npm run electron:start` и перейти на локальный адрес, где у вас отобразится игра.

![ReactWeb](https://user-images.githubusercontent.com/74838417/197547350-9dbc2339-d324-4301-ab46-a29354d6e517.png)


### Windows App
Папка `react_app`
Чтобы забилдить приложение следует в CLI ввести в проекте команду `npm install` для установок всех зависимостей проекта. После вы можете вписать `npm run electron:package:win` и перейти в папку dist, где хранится .exe файл.

![win_app](https://user-images.githubusercontent.com/74838417/197540277-f7071fdd-0d7a-4f40-ab4e-5b43fc98b13c.png)

### Mobile App
Папка `react_native`
Чтобы забилдить приложение следует установить expo, для этого в CLI введите `npm install -g expo`. Далее в проекте введите команду `npm install` для установок всех зависимостей проекта. После вы можете запустить проект `npm start`. Далее с помощью виртуального телефона (Android Studio), можно запустить игру на телефоне.

![Android_app](https://user-images.githubusercontent.com/74838417/197540403-16b0afdb-6cbb-4aab-88a1-68b3045910a5.jpg)

