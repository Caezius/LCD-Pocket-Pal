#include <LiquidCrystal.h>


// reassuring left eyebrow frames 
byte reassuring_l_eyebrow_0[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b11111,
	0b00000,
	0b00000,
	0b00000
};

byte reassuring_l_eyebrow_1[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b10000,
	0b01000,
	0b00100,
	0b00011
};

byte reassuring_l_eyebrow_2[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00111,
	0b01000,
	0b10000
};

byte reassuring_l_eyebrow_3[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b10000,
	0b01100,
	0b00011,
	0b00000
};

byte reassuring_l_eyebrow_4[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b10000,
	0b01100,
	0b00011,
	0b00000
};

byte reassuring_l_eyebrow_5[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b10000,
	0b01100,
	0b00011,
	0b00000
};


// reassuring right eyebrow frames

byte reassuring_r_eyebrow_0[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b11111,
	0b00000,
	0b00000,
	0b00000
};

byte reassuring_r_eyebrow_1[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00001,
	0b00010,
	0b00100,
	0b11000
};

byte reassuring_r_eyebrow_2[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b11100,
	0b00010,
	0b00001,
	0b00000
};

byte reassuring_r_eyebrow_3[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b10000,
	0b01100,
	0b00011,
	0b00000
};

byte reassuring_r_eyebrow_4[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b10000,
	0b01100,
	0b00011,
	0b00000
};

byte reassuring_r_eyebrow_5[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b10000,
	0b01100,
	0b00011,
	0b00000
};

// reassuring face left eye

byte reassuring_l_eye_0[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b01110,
	0b01110,
	0b01110,
	0b00000,
	0b00000
};

byte reassuring_l_eye_1[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b01110,
	0b00000
};
byte reassuring_l_eye_2[8] = {
	0b01110,
	0b01110,
	0b01110,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000
};

byte reassuring_l_eye_3[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b01110,
	0b01110,
	0b01110,
	0b00000,
	0b00000
};

byte reassuring_l_eye_4[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b01110,
	0b01110,
	0b01110,
	0b00000,
	0b00000
};

byte reassuring_l_eye_5[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b01110,
	0b01110,
	0b01110,
	0b00000,
	0b00000
};

// reassuring right eye frames


byte reassuring_r_eye_0[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b01110,
	0b01110,
	0b01110,
	0b00000,
	0b00000
};

byte reassuring_r_eye_1[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b01110,
	0b00000
};
byte reassuring_r_eye_2[8] = {
	0b01110,
	0b01110,
	0b01110,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000
};

byte reassuring_r_eye_3[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b01110,
	0b01110,
	0b01110,
	0b00000,
	0b00000
};

byte reassuring_r_eye_4[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b01110,
	0b01110,
	0b01110,
	0b00000,
	0b00000
};

byte reassuring_r_eye_5[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b01110,
	0b01110,
	0b01110,
	0b00000,
	0b00000
};

// reassuring mouth frame 
byte reassuring_mouth_0[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b01110,
	0b00000,
	0b00000
};

byte reassuring_mouth_1[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b01110
};

byte reassuring_mouth_2[8] = {
	0b00000,
	0b01110,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000
};

byte reassuring_mouth_3[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b10101,
	0b01010,
	0b00000
};

byte reassuring_mouth_4[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b10101,
	0b01010,
	0b00000
};

byte reassuring_mouth_5[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b10101,
	0b01010,
	0b00000
};

// reassuring glint frames

byte reassuring_glint_0[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000
};

byte reassuring_glint_1[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000
};

byte reassuring_glint_2[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000
};

byte reassuring_glint_3[8] = {
	0b00000,
	0b00000,
	0b00100,
	0b01110,
	0b00100,
	0b00000,
	0b00000,
	0b00000
};

byte reassuring_glint_4[8] = {
	0b00100,
	0b00100,
	0b01110,
	0b11111,
	0b01110,
	0b00100,
	0b00100,
	0b00000
};

byte reassuring_glint_5[8] = {
	0b00000,
	0b00000,
	0b00100,
	0b01110,
	0b00100,
	0b00000,
	0b00000,
	0b00000
};


//https://stackoverflow.com/questions/17625759/how-do-i-create-an-array-of-byte-arrays
byte* reassuring_frames[6][6][8] = {{reassuring_l_eyebrow_0, reassuring_l_eyebrow_1, reassuring_l_eyebrow_2, reassuring_l_eyebrow_3, reassuring_l_eyebrow_4, reassuring_l_eyebrow_5}, 
{reassuring_r_eyebrow_0, reassuring_r_eyebrow_1, reassuring_r_eyebrow_2, reassuring_r_eyebrow_3, reassuring_r_eyebrow_4, reassuring_r_eyebrow_5},
{reassuring_l_eye_0, reassuring_l_eye_1, reassuring_l_eye_2, reassuring_l_eye_3, reassuring_l_eye_4, reassuring_l_eye_5},
{reassuring_r_eye_0, reassuring_r_eye_1, reassuring_r_eye_2, reassuring_r_eye_3, reassuring_r_eye_4, reassuring_r_eye_5},
{reassuring_mouth_0, reassuring_mouth_1, reassuring_mouth_2, reassuring_mouth_3, reassuring_mouth_4, reassuring_mouth_5},
{reassuring_glint_0, reassuring_glint_1, reassuring_glint_2, reassuring_glint_3, reassuring_glint_4, reassuring_glint_5} 
};

void printFace(LiquidCrystal lcd_obj, int mouth_x, int mouth_y, int eye_distance){
  
  int l_eyebrow_x = mouth_x - (eye_distance-1)/2;
  int l_eyebrow_y = mouth_y - 1;
  
  int r_eyebrow_x = mouth_x + (eye_distance-1)/2;
  int r_eyebrow_y = mouth_y - 1;
  
  int l_eye_x = mouth_x - (eye_distance-1)/2;
  int l_eye_y = mouth_y;
  
  int r_eye_x = mouth_x + (eye_distance-1)/2;
  int r_eye_y = mouth_y;
  
  int glint_x = r_eyebrow_x + 1;
  int glint_y = mouth_y;
  
  byte* r_eyebrow;
  byte* l_eyebrow;
  byte* l_eye;
  byte* r_eye;
  byte* mouth;
  byte* glint;
  
  for (int i = 0; i < sizeof(reassuring_frames)/sizeof(reassuring_frames[0]); i++){
    r_eyebrow = *reassuring_frames[0][5];
    l_eyebrow = *reassuring_frames[1][1];
    l_eye = *reassuring_frames[2][1];
    r_eye = *reassuring_frames[3][1];
    mouth = *reassuring_frames[4][1];
    glint = *reassuring_frames[5][1];
    
    lcd_obj.createChar(0, l_eyebrow);
    lcd_obj.createChar(1, r_eyebrow);
    lcd_obj.createChar(2, l_eye);
    lcd_obj.createChar(3, r_eye);
    lcd_obj.createChar(4, mouth);
    lcd_obj.createChar(5, glint);
    
    lcd_obj.setCursor(l_eyebrow_x, l_eyebrow_y);
    lcd_obj.write((uint8_t)0);
    
    lcd_obj.setCursor(r_eyebrow_x, r_eyebrow_y);
    lcd_obj.write((uint8_t)1);
    
    lcd_obj.setCursor(l_eye_x, l_eye_y);
    lcd_obj.write((uint8_t)2);
    
    lcd_obj.setCursor(r_eye_x, r_eye_y);
    lcd_obj.write((uint8_t)3);
    
    lcd_obj.setCursor(mouth_x, mouth_y);
    lcd_obj.write((uint8_t)4);
    
    lcd_obj.setCursor(glint_x, glint_y);
    lcd_obj.write((uint8_t)5);
    
    delay(500);
    
    lcd_obj.clear();
    delay(500);
  }
  
    
  
}

const int rs_pin = 12;
const int e_pin = 11;

const int d7_pin = 2;
const int d6_pin = 3; 
const int d5_pin = 4;
const int d4_pin = 5;

const int num_columns = 16;
const int num_rows = 2;

LiquidCrystal lcd(rs_pin, e_pin, d4_pin, d5_pin, d6_pin, d7_pin);
void setup() {
  // put your setup code here, to run once:

  lcd.begin(num_columns, num_rows);
  
  //lcd.print("my name is Rutherford Blingers.");
  //lcd.print("This is exactly forty characters indeed.");
}

void loop() {
  // put your main code here, to run repeatedly:
  printFace(lcd, 8, 1, 5);
}
