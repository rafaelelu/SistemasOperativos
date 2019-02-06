## Objetivo
Crear dos llamadas a sistema, una para apagar y otra para reiniciar.
Y crear sus respectivos programas

## Herramientas
git \
make \
gcc

## Conceptos
1) Llamadas a sistema 
+ La forma que el kernel (SO) da acceso al HW 
+ Se implementa mediante interrupciones de software (trap), ie, 
la aplicación se interrumpe para el kernel se ejecute. 

2) Modo kernel 
+ Es bit/registro que activa el CPU para acceder al HW 
+ Sólo hay un programa que se ejecuta con este bit, es el kernel 

3) Interrupciones 
+ Es la forma que el HW interactúa con el CPU. 

## ¿Qué aprendí?
Aprendimos todos los pasos que tomar para dar instrucciones al ACPI desde el kernel. Hicimos dos instrucciones: una para apagar y otra para reiniciar.


## URL del commit
https://github.com/rafaelelu/SistemasOperativos/commit/81a4ef2642a26c4ff8c67b3683d5317073e3fe08
