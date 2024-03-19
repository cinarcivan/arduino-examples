/*

Değişken Türleri
Değişkenler, sakladıkları veri türüne göre farklılık gösterir. Bu veri türleri, değişkenin saklayabileceği değer aralığını belirler. Ayrıca, bellekte kapladıkları alanı da belirlerler. Bu nedenle, değişken türünü seçerken, saklayacağınız verinin türüne göre uygun olanı seçmelisiniz. Aşağıda, Arduino'da kullanılan değişken türleri ve saklayabilecekleri değer aralıkları verilmiştir:

int: -32.768 ile 32.767 arası sayısal değerleri saklayabilir. (2 bayt alan kaplar.)
unsigned int: 0 ile 65.535 arası sayısal değerleri saklayabilir. (2 bayt alan kaplar.)

long: -2.147.483.648 ile 2.147.483.647 arası sayısal değerleri saklayabilir. (4 bayt alan kaplar.)
unsigned long: 0 ile 4.294.967.295 arası değerleri saklayabilir. (4 bayt alan kaplar.)

float: -3,4*10^38 ile 3,4*10^38 arası ondalıklı değerleri saklayabilir. (4 bayt alan kaplar.)
bool: "true" (1) veya "false" (0) değerlerini saklayabilir. (1 bayt alan kaplar.)
char: ASCII karakter setindeki karakterleri saklayabilir. (1 bayt alan kaplar.)

*/

//Aşağıda, yukarıda belirtilen değişkenlerin hepsinin kullanıldığı ve serial monitor üzerinden ekrana yazdırıldığı bir örneği görebilirsiniz:

int variable_1 = 32767;
unsigned int variable_2 = 65535;

long variable_3 = -2147483648;
unsigned long variable_4 = 4294967295;

float variable_5 = 3.14;
bool variable_6 = 1;
bool variable_7 = 0;
char variable_8 = '?'; //ASCII tablosunda desimal değeri "63" olan bir char tanımlanmış.
char variable_9 = 'g'; //ASCII tablosunda desimal değeri "103" olan bir char tanımlanmış.

void setup() {
  Serial.begin(9600);

  Serial.println(variable_1);
  Serial.println(variable_2);
  Serial.println(variable_3);
  Serial.println(variable_4);
  Serial.println(variable_5);
  Serial.println(variable_6);
  Serial.println(variable_7);
  Serial.println(variable_8); // Char doğrudan ekrana bastırılıyor, desimal değeri istenmiyor.
  Serial.println(variable_9); // Char doğrudan ekrana bastırılıyor, desimal değeri istenmiyor.
  Serial.println(variable_8, DEC); // "DEC" ile char'ın ASCII tablosundaki desimal değeri yazdırılıyor.
  Serial.println(variable_9, DEC); // "DEC" ile char'ın ASCII tablosundaki desimal değeri yazdırılıyor.
  
}

void loop () {
  
}