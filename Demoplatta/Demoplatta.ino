    #include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {


  //   Set up the LED-display
  lcd.begin(16, 2);
  lcd.setCursor(3, 0);
  lcd.print("This is my");
  lcd.setCursor(2, 1);
  lcd.print("Arduino DEMO!");

  // Set up the Aruino Digital PMM
  // LED 7-segment display
  pinMode(2, OUTPUT); /* Top vertical */
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  // Single LED
  pinMode(13, OUTPUT);
}

void loop() {
  // Blink the LEDs
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)

  // Blink the 7-LED Display dots
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);              // wait for 50 milliseconds
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  delay(50);              // wait for 50 milliseconds
  
  delay(1000);              // wait for 1 second
  // Blink the 7-LED Display
  // 6-top
  // 5-
  // 4-E
  // 3-
  // 2-
  
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOWW
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  
  digitalWrite(13, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for 350 milliseconds
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(6, LOW);   // turn the LED on (HIGH is the voltage level)
 
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
