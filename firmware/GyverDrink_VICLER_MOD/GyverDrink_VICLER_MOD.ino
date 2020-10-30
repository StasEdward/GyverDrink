//GyverDrink VICLER_MOD
#define VERSION 6.51
//30.10.2020
/*
  ==============================================================================================
  Модифицированная версия прошивки к проекту "Наливатор by AlexGyver" с расширенным функционалом
  ==============================================================================================

   ⚠ Все настройки в файле Config.h ⚠
   ! Все схемы подключений находятся в файле Config.h в секции Соединения !


   ⚫ Arduino Nano в качестве управляющего микроконтроллера (ATmega 328P).

   ⚫ Поддержка двух типов дисплея:
        OLED на контроллере SSD1306 (0.96"), SH1106(1.3") или SSD1309 (2.42").
        Подключение по I2C:  SCK -> A5
                             SDA -> A4
                             RES -> RST
                             DC  -> подтянуть к GND
                             CS  -> подтянуть к GND
        Подключение по SPI:  CLK -> A5
                             SDA -> A4
                             RES -> RST
                             DC  -> 13
                             CS  -> 2

        4х символьный, 7-сегментный на контроллере TM1637.
        Подключение:  DIO -> 11
                      CLK -> 12

   ⚫ Прокачка. Поставьте рюмку, нажмите и удерживайте кнопку энкодера.
        Прокачка проводится только в ручном режиме и только при наличии рюмки.
        Возврат крана в домашнее положение и сброс счётчика объёма жидкости происходит после снятия рюмки.

   ⚫ Режим изменяется удержанием основной кнопки в течении полусекунды.
        Ручной режим: разлив начинается только после однократного нажатия на основную кнопку.
        Авто режим: разлив начинается автоматически сразу после установки рюмки.

   ⚫ Возможность настроить объём для каждой рюмки отдельно:
        Функция активна только если количество поставленных рюмок > 1
        При однократном нажатии на энкодер подсвечивается место рюмки, объём которой изменяется вращением энкодера. При повторном нажатии подсвечивается следующая установленная рюмка.
        Если же ни одна рюмка не подсвечивается белым, вращение энкодера изменяет объём для всех рюмок одновременно (как в обычном ручном режиме).

   ⚫ Разлив можно остановить в любое время нажатием на основную кнопку.

   ⚫ Последний выбранный объём сохраняется сразу после налива первой рюмки.

   ⚫ Дополнительный статус-светодиод подключается к светодиоду последней рюмки, активируется в STATUS_LED. Служит для индикации режимов работы.

   ⚫ Индикация заряда аккумулятора и слежение за напряжением.
        Активируется раскоментированием строки #define BATTERY_PIN ...
        При напряжении, меньшем чем BATTERY_LOW (по умолчанию 3.3В), устройство перестаёт реагировать на внешние воздействия и на дисплее мигает иконка батареи.
        Если при первом включении мигает иконка аккумулятора, но напряжение в порядке(больше, чем BATTERY_LOW) -> нажмите и удерживайте кнопку до появления меню калибровки аккумулятора.

   ⚫ Стартовая анимация и динамическая подсветка рюмок во время и после налива.


  ================================================
  ■■■■■ Особенности версии на TM1637 дисплее ■■■■■
  ================================================
  Сервис режим.
   ⚫ Вход в сервис режим осуществляется удержанием основной кнопки выбора режима во время стартовой анимации до появления на дисплее надписи "SerViCE". После отпускания кнопки на дисплее появится номер этапа калибровки:

      -1-   На этом этапе производится настройка положений сервопривода над рюмками.
          1. Уберите все рюмки. На дисплее отобразится положение парковочной позиции в градусах. При этом по краям дисплея будут отображенны штрихи (при градусе > 99, штрих только с правой стороны).
          2. Вращением энкодера измените положение парковочной позиции
          3. Поставьте рюмку. На дисплее отобразится номер рюмки и позиция в градусах. Вращением энкодера подстройте положение точно над рюмкой. Уберите рюмку.
          4. Повторите предыдущий пункт для всех остальных рюмок.
          5. После настройки позиций для всех рюмок нажмите основную кнопку изменения режима пока на дисплее не появится номер следующего этапа калибровки.

      -2-   На этом этапе производится калибровка таймера для налития 50мл.
          1. Поставьте рюмку в любое положение. Кран встанет над этой рюмкой.
          2. Нажатием на кнопку энкодера включится помпа. Удерживайте до тех пор, пока не польётся жидкость.
          3. Снимите рюмку и поставьте пустую в любое положение.
          4. Удерживайте кнопку энкодера, пока не нальётся ровно 50мл.
          5. Снимите рюмку. Нажмите основную кнопку изменения режима. Если мониторинг АКБ активен, на дисплее отобразится следующий номер этапа калибровки. В обратном случае калибровка оконченна. На дисплее отобразится основной объём.

      -3-   На этом этапе производится калибровка напряжения аккумулятора.
          1. На дисплее отобразится напряжение аккумулятора в [mV].
          3. Вращением энкодера подстройте отображаемое напряжение до измеренного вольтметром.
          4. Нажмите основную кнопку изменения режима. Калибровка оконченна. На дисплее отобразится основной объём.

   ⚫ При зажатии кнопки выбора режима более 5 секунд, происходит сброс настроек из памяти (TIME_50ML, SHOT_POSITIONS, PARKING_POS и BATTERY_CAL) до первоначальных, прописанных в Config.h.


  ==============================================
  ■■■■■ Особенности версии на OLED дисплее ■■■■■
  ==============================================

   ⚫ Наличие полноценного, графического меню. Вход/Выход зажатием основной кнопки более полусекунды. Выход из подменю в основное однократным нажатием.

   ⚫ Калибровка объёма за единицу времени, калибровка углов сервопривода для рюмок и калибровка напряжения аккумулятора осуществляется в сервисном меню. Вход в сервисное меню осуществляется зажатием основной кнопки во время стартовой анимации.

   ⚫ Возможность изменять настройки прошивки прямо в меню. Для этого нажмите на кнопку энкодера на параметре и вращением измените его значение.

   ⚫ Ведение статистики. Количество налитых рюмок и общий объём. При нажатии на кнопку энкодера, выбранное значение сбрасывается.


  =====================================================================================================

   ₽$€ На чашечку кофе автору:        http://paypal.me/vicler или viktorglekler@googlemail.com (PayPal)

   ★ Исходники на GitHub:             https://github.com/VICLER/GyverDrink

   ★ Оригинальный проект AlexGyver:   https://alexgyver.ru/GyverDrink/

   ====================================================================================================
*/

#ifndef __AVR_ATmega328P__
#error "Not ATmega328P board!"
#endif

//╞══════════════════════════════════════════════════════════════════════════════╡LIBS╞══════════════════════════════════════════════════════════════════════════════╡

//#define USE_TICOSERVO   // использование библиотеки Adafruit_TiCoServo вместо стандартной Servo. При использовании серводвигатель подключать к пину 9 или 10!

#include "Config.h"
#ifdef TM1637
#include "src/GyverTM1637/GyverTM1637.h"
#elif defined OLED
#if (OLED == 3)
#include <SPI.h>
#include "src/SSD1306Ascii/src/SSD1306Ascii.h"
#include "src/SSD1306Ascii/src/SSD1306AsciiSoftSpi.h"
#else
#include "src/microWire/microWire.h"
#include "src/SSD1306Ascii/src/SSD1306Ascii.h"
#include "src/SSD1306Ascii/src/SSD1306AsciiWire.h"
#endif
#endif
#include "src/ServoSmoothMinim.h"
#include "src/microLED/microLED.h"
#include "src/encUniversalMinim.h"
#include "src/buttonMinim.h"
#include "src/timer2Minim.h"
#include <EEPROM.h>

//╞══════════════════════════════════════════════════════════════════════════════╡DATA╞══════════════════════════════════════════════════════════════════════════════╡

#if (STATUS_LED)
#define statusLed 1
#else
#define statusLed 0
#endif
LEDdata leds[NUM_SHOTS + statusLed];                  // буфер ленты типа LEDdata
microLED strip(leds, NUM_SHOTS + statusLed, LED_PIN); // объект лента
ServoSmoothMinim servo;
encMinim enc(ENC_CLK, ENC_DT, ENC_SW, ENCODER_DIR, ENCODER_TYPE); // пин clk, пин dt, пин sw, направление (0/1), тип (0/1)

buttonMinim btn(BTN_PIN);
buttonMinim encBtn(ENC_SW);
timerMinim LEDtimer(30);
timerMinim FLOWdebounce(15);
timerMinim FLOWtimer(2000);
timerMinim WAITtimer(500);
timerMinim TIMEOUTtimer(TIMEOUT_STBY * 1000L); // таймаут режима ожидания
timerMinim POWEROFFtimer(TIMEOUT_OFF * 60000L);
timerMinim KEEP_POWERtimer(KEEP_POWER * 1000L);

#define BATTERY_LOW    3.3   // минимальное напряжение аккумулятора

#define INIT_VOLUME 25
bool LEDchanged = false;
bool pumping = false;
int8_t curPumping = -1;
int8_t curSelected = -1;
int8_t selectShot = -1;
uint8_t shotCount = 0;
enum { NO_GLASS, EMPTY, IN_PROCESS, READY } shotStates[NUM_SHOTS];
enum { SEARCH, MOVING, WAIT, PUMPING } systemState;
enum serviceStates { SERVO, VOLUME, BATTERY } serviceState;
enum workModes { ManualMode, AutoMode } workMode;
uint16_t time50ml = TIME_50ML;
uint8_t thisVolume = INIT_VOLUME;
uint8_t shotVolume[NUM_SHOTS];
uint8_t initShotPos[] = {SHOT_POSITIONS};
uint8_t shotPos[] = {SHOT_POSITIONS};
const byte SW_pins[] = {SW_PINS};
float volumeTick = 15.0f * 50.0f / time50ml;
float volumeCount = 0.0f;
bool systemON = false;
bool timeoutState = false;
bool parking = true;
bool LEDbreathingState = false;
bool LEDblinkState = false;
float battery_voltage = 4.2;
float battery_cal = 1.0;
bool keepPowerState = false;
bool volumeChanged = false;
uint8_t parking_pos = PARKING_POS;
uint8_t animCount = 7;
bool showMenu = 0;
uint8_t menuItem = 1;
byte volumeColor[NUM_SHOTS];
const int ledsColor = LEDS_COLOR / 360.0 * 255;
const int manualModeStatusColor = MANUAL_MODE_STATUS_COLOR / 360.0 * 255;
const int autoModeStatusColor = AUTO_MODE_STATUS_COLOR / 360.0 * 255;
bool firstStartUp = false;


#ifdef OLED
uint16_t shots_overall = 0, volume_overall = 0;
char bootscreen[] = {BOOTSCREEN};
#endif

// названия параметров в меню настроек OLED
enum
{
  timeout_off = 0,
  stby_time,
  stby_light,
  leds_color,
  rainbow_flow,
  invert_display,
  oled_contrast,
  max_volume,
  // доступны из сервисного меню
  inverse_servo,
  servo_speed,
  auto_parking,
  keep_power
};
// массив параметров в меню настроек OLED
uint8_t parameterList[] = {
  TIMEOUT_OFF,
  TIMEOUT_STBY,
  STBY_LIGHT,
  ledsColor,
  RAINBOW_FLOW,
  INVERT_DISPLAY,
  OLED_CONTRAST,
  MAX_VOLUME,
  // доступны из сервисного меню
  INVERSE_SERVO,
  SERVO_SPEED,
  AUTO_PARKING,
  KEEP_POWER
};


// расчёт адрессных ячеек для сохранения параметров
struct EEPROMAddress
{
  const byte _thisVolume = 0;
  const byte _time50ml = _thisVolume + sizeof(thisVolume);
  const byte _shotPos = _time50ml + sizeof(time50ml);
  const byte _parking_pos = _shotPos + sizeof(byte) * NUM_SHOTS;
  const byte _workMode = _parking_pos + sizeof(parking_pos);
  const byte _battery_cal = _workMode + sizeof(byte);
  const byte _animCount = _battery_cal + sizeof(battery_cal);
#ifdef OLED
  const byte _timeout_off = _animCount + sizeof(animCount);
  const byte _stby_time = _timeout_off + sizeof(parameterList[timeout_off]);
  const byte _keep_power = _stby_time + sizeof(parameterList[stby_time]);
  const byte _inverse_servo = _keep_power + sizeof(parameterList[keep_power]);
  const byte _servo_speed = _inverse_servo + sizeof(parameterList[inverse_servo]);
  const byte _auto_parking = _servo_speed + sizeof(parameterList[servo_speed]);
  const byte _max_volume = _auto_parking + sizeof(parameterList[auto_parking]);
  const byte _stby_light = _max_volume + sizeof(parameterList[max_volume]);
  const byte _rainbow_flow = _stby_light + sizeof(parameterList[stby_light]);
  const byte _invert_display = _rainbow_flow + sizeof(parameterList[rainbow_flow]);
  const byte _leds_color = _invert_display + sizeof(parameterList[invert_display]);
  const byte _oled_contrast = _leds_color + sizeof(parameterList[leds_color]);
#endif
} eeAddress;

//╞══════════════════════════════════════════════════════════════════════════════╡MACROS╞══════════════════════════════════════════════════════════════════════════════╡

#define servoON() digitalWrite(SERVO_POWER, 1)
#define servoOFF() digitalWrite(SERVO_POWER, 0)
#define pumpON() digitalWrite(PUMP_POWER, 1)
#define pumpOFF() digitalWrite(PUMP_POWER, 0)

#if (STATUS_LED)
#define LED leds[NUM_SHOTS]
#endif
