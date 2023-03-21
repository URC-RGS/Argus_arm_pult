# Argus_arm_pult
Проект построен на двух микроконтроллерах RP2040, первый расположен в основном пульте укправления, а второй в внешнем пульте. 

Алгоритм работы: 
    По умолчанию у нас включен микроконтроллер расположенный в основном пульте, он опрашивает кнопку и в зависимости от того, нажата она или нет происходят следующие действия:
        1) если кнопка не нажата, то мы опрашиваем родные кнопки и в зависимости от их показаний открываем мосфеты, индикаторный светодиод при этом отключен. 
        2) если кнопка нажата, то включаем индикаторный светодиод читаем данные из сериал порта, а зависимости от того есть или данные происходят следующие действия:
            a) если буфере есть что-то, то пытаемся это расшифровать и преобразовать к массиву для включения мосфетов
            b) если буфер пустой, то ничего не делаем и ожидаем данные 


main_Argus_arm_pult - проект PlatformIO микроконтроллера расположенного в основном 

main_Argus_arm_pult/srt/main.cpp - код основного пульта

main_Argus_arm_pult/srt/Config.h - конфиг файл с указанием пинов для подключения кнопок и для подключения мосфетов

main_Argus_arm_pult/platformio.ini - конфиг файл проекта PlatformIO в котором указываются используемое ядно и список используемых библиотек 


slawe_Argus_arm_pult - проект PlatformIO микроконтроллера расположенного в внешнем пульте 

slawe_Argus_arm_pult/srt/main.cpp - код внешнего пульта 

slawe_Argus_arm_pult/srt/Config.h - конфиг файл с указание пинов для кнопок 

slave_Argus_arm_pult/platformio.ini - конфиг файл проекта PlatformIO в котором указываются используемое ядно и список используемых библиотек 
