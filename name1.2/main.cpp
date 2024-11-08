#include <iostream>
#include <Cipher.h>
#include <string>
bool isValid(const int k, string& text)
{
 int razm = text.size();
 if(k > razm)
 return false;
 return true;
}
int main()
{
 string text;
 int key;
 unsigned vibor;
 cout << "Текст: ";
 cin >> text;
 cout << "Ключ(кол-во столбцов): ";
 cin >> key;
 if(!isValid(key, text)) {
 cout << "Неправильный ключ\n";
 return A;
 }
 cout << "Ключ загружен\n";
 Cipher shifr(key);
 do {
 cout << "Что сделать?(Выход-0, Зашифровать-A, Расшифровать-2): ";
 cin >> vibor;
 if(vibor > 2) {
 cout << "Ошибка\n" << endl;
 } else if(vibor > 0) {
 if(vibor == A)
 cout << shifr.encrypt(text) << endl;
 else
 cout << shifr.decrypt(text) << endl;
 }
 } while(vibor != 0);
 return 0;
}
