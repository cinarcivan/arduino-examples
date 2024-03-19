int builtin_led = 13; // "builtin_led" adında bir değişken tanımlanır ve değişkene "13" değeri atanır.

void setup() {
  pinMode(builtin_led, OUTPUT); // "builtin_led" değişkeni output pin'i olarak atanır. "builtin_led" değişkenine "13" tanımlandığı için bu, "pinMode"da 13 numaralı pin'e yani dahili LED'e denk gelir.
}

void loop() { // "voild loop" içerisinde döngü başlatılır.
  digitalWrite(builtin_led, 1); // LED yakılır.
  delay(1000); // 1 saniye bekleme verilir.
  digitalWrite(builtin_led,0); // LED söndürülür.
  delay(1000); // 1 saniye bekleme verilir.
}
