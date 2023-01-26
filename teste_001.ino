/*
Piscar

Liga um LED por um segundo, depois desliga por um segundo, repetidamente.

A maioria dos Arduinos possui um LED embutido que você pode controlar. No UNO, MEGA e ZERO,
ele está conectado ao pino digital 13, no MKR1000 no pino 6. O LED_BUILTIN está configurado para
o pino de LED correto independentemente do modelo de placa usado.
Se você quiser saber em qual pino o LED embutido está conectado em seu modelo Arduino, verifique as Especificações Técnicas de sua placa em:
https://www.arduino.cc/en/Main/Products

modificado em 8 de maio de 2014
por Scott Fitzgerald
modificado em 2 de setembro de 2016
por Arturo Guadalupi
modificado em 8 de setembro de 2016
por Colby Newman

Este código de exemplo está no domínio público.

https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// a função de configuração é executada uma vez quando você pressiona o reset ou alimenta a placa
void setup() {
// inicializa o pino digital LED_BUILTIN como saída.
pinMode(LED_BUILTIN, OUTPUT);
}

// a função loop é executada continuamente
void loop() {
digitalWrite(LED_BUILTIN, HIGH); // liga o LED (HIGH é o nível de tensão)
delay(1000); // espera por um segundo
digitalWrite(LED_BUILTIN, LOW); // desliga o LED tornando a tensão baixa
delay(1000); // espera por um segundo
}