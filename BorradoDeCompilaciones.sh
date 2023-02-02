#!/bin/bash
ruta="$(pwd)/Calculadora"
cd $ruta
find . -type f ! -name '*.c'  ! -name '*.h' -delete
echo "Borrado Finalizado"