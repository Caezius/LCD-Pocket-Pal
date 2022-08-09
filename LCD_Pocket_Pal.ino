#include <LiquidCrystal.h>
const int rs_pin = 12;
const int e_pin = 11;

const int d7_pin = 2;
const int d6_pin = 3; 
const int d5_pin = 4;
const int d4_pin = 5;

const int num_columns = 16;
const int num_rows = 2;

int eye_center_x = 8;
int eye_distance = 4;

int l_eye_x = eye_center_x - (eye_distance / 2);
int r_eye_x = eye_center_x + (eye_distance / 2);
int eyes_y = 1;

int mouth_x = eye_center_x;
int mouth_y = 1;

byte open_eye[8] = {
  0b01110,
  0b10001,  
  0b10001,
  0b10001,
  0b01110,
  0b00000,
  0b00000,
  0b00000
};

byte open_mouth[8] = {
  0b11111,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b11111
};

byte closed_mouth[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b11111,
  0b00000,
  0b00000
};

byte closed_eye[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b11111,
  0b11111,
  0b00000,
  0b00000,
  0b00000  
};

byte happy_eye[8] = {
  0b10000,
  0b11111,
  0b00000,
  0b00100,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};


byte srsly_eye[8] = {
  0b10000,
  0b11111,
  0b00000,
  0b01110,
  0b01110,
  0b01110,
  0b00000,
  0b00000  
};

byte happy_mouth[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b10001,
  0b11111,
  0b00000,
  0b00000,
  0b00000  
};

void load_srsly_face(LiquidCrystal lcd_obj){
  lcd_obj.createChar(0, srsly_eye);
  lcd_obj.createChar(1, closed_mouth);

  lcd_obj.setCursor(l_eye_x, eyes_y);
  lcd_obj.write((uint8_t)0);

  lcd_obj.setCursor(r_eye_x, eyes_y);
  lcd_obj.write((uint8_t)0);
  
  lcd_obj.setCursor(mouth_x, mouth_y);
  lcd_obj.write((uint8_t)1);
  
};



LiquidCrystal lcd(rs_pin, e_pin, d4_pin, d5_pin, d6_pin, d7_pin);
void setup() {
  // put your setup code here, to run once:

  lcd.begin(num_columns, num_rows);
  
  //lcd.print("my name is Rutherford Blingers.");
  //lcd.print("This is exactly forty characters indeed.");
}

void loop() {
  // put your main code here, to run repeatedly:
  load_srsly_face(lcd);
  delay(1000);
  
  lcd.clear();
  delay(1000);
}
