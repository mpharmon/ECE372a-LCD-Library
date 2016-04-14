/*  
 *  Class: ECE372a
 * 
 *  Group: 209
 * 
 *  LCD Library
 *
 *  File: lcd.h
 *
 *  Member: Michael Harmon (Software)
 *          Abdul Rana (Hardware)
 *          James Beulke (System Integration)
 *          Ali Hassan (Quality Control)
 */

#ifndef LCD_H_
#define LCD_H_

#define TRISx_INPUT   1
#define TRISx_OUTPUT  0

#define LCD_RS        LATCbits.LATC4
#define LCD_RS_TRIS   TRISCbits.TRISC4
//#define LCD_RS_ANSEL  

#define LCD_E         LATCbits.LATC2
#define LCD_E_TRIS    TRISCbits.TRISC2
//#define LCD_E_ANSEL   

#define LCD_D4        LATEbits.LATE1
#define LCD_D4_TRIS   TRISEbits.TRISE1
//#define LCD_D4_ANSEL

#define LCD_D5        LATEbits.LATE3
#define LCD_D5_TRIS   TRISEbits.TRISE3
//#define LCD_D5_ANSEL

#define LCD_D6        LATEbits.LATE5
#define LCD_D6_TRIS   TRISEbits.TRISE5
//#define LCD_D6_ANSEL

#define LCD_D7        LATEbits.LATE7
#define LCD_D7_TRIS   TRISEbits.TRISE7
#define LCD_D7_ANSEL  ANSELEbits.ANSE7
  
//Used by other LCD_* functions to write to the LCD Screen
void LCD_Write(unsigned char word, unsigned int commandType, unsigned int delayAfter);

//Initializes the LCD Screen
void LCD_Init(void);

//Clears the LCD Screen
void LCD_Clear(void);

//Moves the Cursor to the given position
//  x is the horizontal (starting from 1)
//  y is the line (1 is the top line, 2 is the bottom line)
void LCD_MoveCursor(unsigned char x, unsigned char y);

//Prints a single Character on the LCD in the current cursor position
void LCD_PrintChar(char c);

//Prints a String on the LCD at the current cursor position
void LCD_PrintString(const char* s);

#endif // LCD_H_