# Implementación de Convolución de Matrices en MARIE

Este proyecto implementa operaciones de convolución de matrices en lenguaje ensamblador MARIE, con implementaciones de referencia adicionales en C++. El proyecto demuestra los conceptos fundamentales de la convolución de imágenes, una operación clave en el procesamiento de imágenes y visión por computadora.

## Descripción del Proyecto

El proyecto implementa la convolución entre dos matrices:
- Una matriz Kernel de tamaño 3x3 (tamaño fijo)
- Una matriz de entrada Imagen de tamaño máximo 16x16
- Genera una matriz de resultado Resultado del mismo tamaño que Imagen

La operación de convolución calcula cada elemento de la matriz de salida Resultado aplicando el Kernel al vecindario correspondiente en la matriz de entrada Imagen.

## Detalles de Implementación

### Implementación en Ensamblador MARIE
- Implementa convolución completa de matrices sin padding
- Maneja condiciones de borde de la matriz
- Incluye funciones para:
  - Multiplicación de matrices
  - Impresión de resultados
  - Cálculos de índices para operaciones de convolución

### Características
- Cálculo dinámico de índices para recorrido de matrices
- Manejo adecuado de números negativos
- Formateo de salida ASCII para visualización de resultados
- Diseño modular con funciones separadas para diferentes operaciones

## Ejemplo de Entrada/Salida

### Matrices de Entrada
```
Matriz de Entrada Imagen:
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

Matriz Kernel:
-5 -6 -7
-8 -9 -10
-11 -12 -13
```

### Salida
El programa produce una matriz convolucionada Resultado con valores calculados correctamente basados en la aplicación del kernel.

```
-67 -130 -193 -141
-87 -168 -249 -180
-87 -168 -249 -180
-49 -94 -139 -99
```

## Estructura del Proyecto

- `Convolucion_final_con_comentarios.mas`: Implementación principal en ensamblador MARIE
- `convolucion_sin_padding.cpp`: Implementación de referencia en C++
- [Convertor matrices en Marie.js](https://colab.research.google.com/drive/14mL9GB3exb8W38aBRe4dbNCXeFQ2S37I?usp=sharing): Código python para facilitar el ingreso de matrices en Marie.js
- Documentación incluyendo explicación del algoritmo y detalles de implementación

## Cómo Ejecutar

1. Cargar el código ensamblador MARIE en un simulador MARIE
2. El programa incluye matrices de prueba predefinidas
3. Ejecutar el programa para ver los resultados de la convolución
4. Los resultados se mostrarán en una salida de matriz formateada

## Detalles Técnicos

### Organización de Memoria
- La matriz de entrada comienza en la ubicación de memoria 0x006
- La matriz kernel comienza en la ubicación de memoria 0x01B
- La matriz de resultado comienza en la ubicación de memoria 0x028

Estos valores se deben cambiar dependiendo del tamaño de las matrices y es recomendable utilizar el código python para no cometer errores.

### Funciones Principales
- `FMult`: Maneja la multiplicación de matrices
- `PrintFunc`: Gestiona la salida formateada
- `Modulo`: Maneja la aritmética modular para cálculos de índices

## Referencia Adicional

El proyecto incluye una implementación en C++ (`convolucion_sin_padding.cpp`) que puede usarse como referencia para entender el algoritmo de convolución y verificar resultados.

Además se incluye [Convertor matrices en marie.js](https://colab.research.google.com/drive/14mL9GB3exb8W38aBRe4dbNCXeFQ2S37I?usp=sharing) que simplifica el proceso de crear las matrices para marie.js

## Notas

- La implementación asume tamaños de matriz predefinidos
- Las matrices de entrada están hardcodeadas en el código ensamblador
- El programa incluye manejo integral de errores para los límites de las matrices

## Nota del Autor

Este proyecto fue desarrollado como parte de un curso de organización de computadores para demostrar la implementación a bajo nivel de operaciones matriciales y conceptos de procesamiento de imágenes.

---
*Nota: Este proyecto está destinado a fines educativos y demuestra la implementación de operaciones de convolución a nivel de ensamblador.*
