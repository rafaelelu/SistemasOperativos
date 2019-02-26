## Objetivo
Modificar el programa sh.c para ejecutar al comando anterior

## Herramientas
git \
make \
gcc

## Conceptos
1) Cómo se crean nuevos procesos
+ Un programa padre (sh.c) ejecuta llamada a sistema fork
+ La llamada a sistema fork clona al proceso padre
+ El proceso hijo manda a llamar a exec para ejecutar otro código

## ¿Qué aprendí
+ Cómo funcionan los procesos padres, hijos y zombies.
+ Que el comando "cd" es uno especial.
+ Cómo guardar el historial de comandos ejecutados.


## URL del commit
https://github.com/rafaelelu/SistemasOperativos/commit/6fe9fe66f72c891af991769cdfd15590f0473bf1

## Cómo se relaciona con los conceptos anteriores
+ Antes habíamos hablado cómo funciona el kernel y las llamadas a sistema.
+ Vimos cómo modificar los archivos del kernel, en este caso fue el "sh.c" y porqué ese en específico.
