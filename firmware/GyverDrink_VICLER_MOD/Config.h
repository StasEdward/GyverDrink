
//╞════════════════════════════════════════════════════════════════════════════════════╣ Настройки ⚒ ╠════════════════════════════════════════════════════════════════════════════════════╡

/*■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■ Основные настройки ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■*/

// выбор дисплея
#define TM1637               // 4-х значный 7-ми сегментный дисплей
//#define OLED           0     // 0 для SSD1306(0.96") и SSD1309(1.5" или 2.42"), 1 для SH1106(1.3")
//#define ANALOG_METER         // стрелочный индикатор

#define NUM_SHOTS      5     // количество рюмок (оно же кол-во светодиодов и кнопок!)
#define SWITCH_LEVEL   0     // кнопки 1 → высокий сигнал при замыкании, 0 → низкий
#define MAX_VOLUME     50    // ограничение максимального объёма
#define INVERSE_SERVO  0     // инвертировать направление вращения серво
#define ENCODER_TYPE   1     // тип энкодера. 0 или 1. Отличаются количеством делений на оборот
#define ENCODER_DIR    1     // направление вращения энкодера. 0 или 1

/*■■■■■■■■■■■■■■■■■■■■■ Параметры, изменяемые в сервис режиме ■■■■■■■■■■■■■■■■■■■■■■*/

#define TIME_50ML      5000  // время заполнения 50 мл
#define PARKING_POS    0     // угол серво для парковочной позиции

// позиции серводвигателя над рюмками. От первой к последней
#define SHOT_POSITIONS       30, 60, 90, 120, 150, 180

/*■■■■■■■■■■■■■■■■■■■■■■■■■■ Дополнительные настройки ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■*/

#define TIMEOUT_STBY   10    // таймаут входа в режим ожидания в секундах. В режиме ожидания сохраняется последний объём и приглушается яркость подсветки
#define TIMEOUT_OFF    5     // таймаут входа в енергосберегающий режим в минутах. В этом режиме отключается дисплей и все светодиоды. Если 0 → режим не активен
#define KEEP_POWER     0     // интервал поддержания питания от повербанка в секундах. Через этот интервал происходит скачёк потребления енергии светодиодами. 0 → функция отключена
#define SERVO_SPEED    40    // скорость серво в процентах (100 → максимум)
#define AUTO_PARKING   1     // парковка в авто режиме: 1 → вкл, 0 → выкл
#define SAVE_MODE      0     // 1 → сохранение последнего активного режима в памяти, 0 → не сохраняется
#define STBY_LIGHT     20    // яркость подсветки в режиме ожидания. 255 → максимум, 0 → выкл
#define RAINBOW_FLOW   1     // 1 → динамическая подсветка налитых рюмок, 0 → статическая
#define STATUS_LED     0     // яркость статус-светодиода. 255 → максимум, 0 → не подключен
#define MANUAL_MODE_STATUS_COLOR 140, 255 // цвет статусного светодиода в ручном режиме (цвет, насыщенность HS).    // Онлайн конвертер цветов https://bit.ly/34WSaig Используем значения H и S из HSV. 
#define AUTO_MODE_STATUS_COLOR 100, 255  // цвет статусного светодиода в авто режиме (цвет, насыщенность HS)       // Вычисляем H:(H * 255 / 360). Вычисляем S:(S * 2.55)

/*■■■■■■■■■■■■■■■■■■■■■■■■■■■ Настройки OLED дисплея ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■*/

#define INVERT_DISPLAY 0     // инверсия цветов OLED дисплея
#define OLED_CONTRAST  100   // яркость дисплея. Макс 255
#define MENU_LANG      1     // язык меню. 1 → русский, 0 → english
#define MENU_SELECT    1     // 0 → выбор пункта меню стрелкой, 1 → инверсией
#define NUM_FONT       0     // выбор шрифта для отображения объёма (0 или 1)
#define WIRE_SPEED     800   // частота передачи данных OLED дисплею в kHz (min 100, mid 400, max 900). Понизьте частоту, при проблемах с дисплеем.
#define BOOTSCREEN     "Der Наливатор"  // текст на OLED дисплее при старте устройства


//╞════════════════════════════════════════════════════════════════════════════════════╣ Соединения ╠════════════════════════════════════════════════════════════════════════════════════╡

#define PUMP_POWER  3        // управляющий сигнал драйвера помпы (обычно обозначен как IN на драйверах моторов, либо GATE/BASE, если используется транзистор)
#define SERVO_POWER 4        // управляющий сигнал драйвера для питания серводвигателя (обычно обозначен как IN на драйверах моторов, либо GATE/BASE, если используется транзистор)
//#define BATTERY_PIN A7       // + аккумулятора (максимум 5 вольт без делителя). Убрать // если подключен
#define SERVO_PIN   5        // сигнальный провод серводвигателя
#define LED_PIN     6        // сигнал DIO/DI первого светодиода (WS2812b)
#define BTN_PIN     7        // сигнал с основной кнопки для разлива и смены режимов
#define ENC_SW      8        // сигнал центральной кнопки на энкодере для прокачки и настройки различных обьёмов. Обозначен как SW или BTN
#define ENC_DT      9        // сигнал DT или А с энкодера
#define ENC_CLK     10       // сигнал CLK или B с энкодера

/*■■■■■■■■■■■■■■■■■■■■■■■■■■■ Версия с дисплеем TM1639 ■■■■■■■■■■■■■■■■■■■■■■■■■■■*/
#ifdef TM1637

#define DISP_DIO    11       // сигнал DIO на дисплее TM1637
#define DISP_CLK    12       // сигнал CLK на дисплее TM1637
#define SW_PINS     A0, A1, A2, A3, A4, A5    // сигналы с датчиков наличия рюмок на ТМ1637 версии: от первой к последней рюмке

/*■■■■■■■■■■■■■■■■■■■■■■■■■■■■ Версия с OLED дисплеем ■■■■■■■■■■■■■■■■■■■■■■■■■■■■*/
#elif defined OLED

#define DISP_SDA    A4       // сигнал SDA OLED дисплея
#define DISP_SCK    A5       // сигнал SCK OLED дисплея
#define SW_PINS     A0, A1, A2, A3, 11, 12  // сигналы с датчиков наличия рюмок на OLED версии: от первой к последней рюмке

/*■■■■■■■■■■■■■■■■■■■■■■■ Версия со стрелочным индикатором ■■■■■■■■■■■■■■■■■■■■■■■*/
#elif defined ANALOG_METER

#define ANALOG_METER_PIN 11  // + с индикатора
#define SW_PINS     A0, A1, A2, A3, A4, A5    // сигналы с датчиков наличия рюмок на ANALOG_METER версии: от первой к последней рюмке
#endif
