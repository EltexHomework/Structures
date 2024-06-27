# Задание №4 - Структуры 
## Сборщик проекта
В качестве сборщика проекта используется Makefile. Для компиляции проекта необходимо ввести следующую команду в корне проекта:
``` bash
make
```

Для очистки бинарных файлов можно воспользоваться командой:
``` bash
make clean
```

## Задание
Написать программу абонентский справочник. Список абонентов представляет собой статический массив (100 элементов) из структур следующего в вида:
``` c
struct abonent {
    char name[10];
    char second_name[10];
    char tel[10];
};
```
При запуске на экран выводится текстовое меню:
1) Добавить абонента
2) Удалить абонента
3) Поиск абонентов по имени
4) Вывод всех записей
5) Выход
и пользователю предлагается ввести пункт меня с клавиатуры. Добавление абонента в массив реализуется простым заполнением свободной структуры, при выходе за 100 абонентов уведомить пользователя о переполнении справочника и не позволять больше добавлять абонентов. При удалении структура заполняется нулями. При поиске пользователь вводит с клавиатуры имя абонентов и на экран выводится список всех абонентов с таким же именем. Программа продолжает выполняться пока пользователь не введет пункт 5.
## Результаты тестирования программы
- Создание абонента
```
___MENU___
1) Add abonent
2) Delete abonent
3) Find abonent by name
4) Print all abonents
5) Exit
Enter option: 1
Enter name: danil
Enter second name: gorshkov
Enter tel: 222
```
- Удаление абонента
```
___MENU___
1) Add abonent
2) Delete abonent
3) Find abonent by name
4) Print all abonents
5) Exit
Enter option: 2
Enter name: danil


___MENU___
1) Add abonent
2) Delete abonent
3) Find abonent by name
4) Print all abonents
5) Exit
Enter option: 4
```
- Поиск абонента
```
___MENU___
1) Add abonent
2) Delete abonent
3) Find abonent by name
4) Print all abonents
5) Exit
Enter option: 3
Enter name: danil

___Abonent___
Abonent name: danil
Abonent second_name: gorshkov
Abonent tel: 222
```
- Вывод всех записей
```
___MENU___
1) Add abonent
2) Delete abonent
3) Find abonent by name
4) Print all abonents
5) Exit
Enter option: 4

___Abonent___
Abonent name: danil
Abonent second_name: gorshkov
Abonent tel: 222

___Abonent___
Abonent name: danil
Abonent second_name: petrow
Abonent tel: 333
```
- Выход
```
___MENU___
1) Add abonent
2) Delete abonent
3) Find abonent by name
4) Print all abonents
5) Exit
Enter option: 5 
```
## Демонстрация работы программ

