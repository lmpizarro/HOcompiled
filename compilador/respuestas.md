# Compilador

1. Pre-procesador: `make preprocessing`

La salida del prepro es una salida legible.
La salida del procesador es el archivo .c con las directivas # 
expandidas. La directiva #include <file>, reemplaza esa línea por el
contenido del file 
Los archivos indicados en el #include, también son
preprocesados. 


2. Compilacion I: `make assembler`

En esta etapa se crea el código assembler propio de la máquina para
la que se compila


3. Compilacion II: `make object`

Genera el código máquina sin tener en cuenta las funcionas a las que llama
el programa.

4. Linkeo: `make executable`

Genera el programa que va a correr incluyendo información que le permite
llamar a funciones definidas en otros archivos o librerías.

