// Дамп байтов памяти в шестнадцатеричном виде и с разделителями
void dump(const unsigned char *data_buffer, const unsigned int length)
{
  unsigned char byte;
  unsigned int i, j;
  for(i=0; i < length; i++) 
  {
      byte = data_buffer[i];
      printf("%02x ", data_buffer[i]);// Вывести в шестнадцатеричном виде.
    if(((i%16)==15) || (i==length-1)) 
    {
      for(j=0; j < 15-(i%16); j++)
          printf(" ");
	  printf("| ");
	for(j=(i-(i%16)); j <= i; j++)
        { // Показать отображаемые символы.
    byte = data_buffer[j];
        if((byte > 31) && (byte < 127)) // Вне диапазона
           // отображаемых символов
           printf("%c", byte);
        else
           printf(".");
        }
        printf("\n"); // Конец строки дампа (в строке 16 байт)
    } // Конец if
  } // Конец for
}
