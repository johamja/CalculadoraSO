#!/bin/bash
ruta="$(pwd)/Calculadora"
cd $ruta
find . -type f ! -name '*.c' -delete
echo "Borrado Finalizado"