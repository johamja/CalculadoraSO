#!/bin/bash
ruta="$(pwd)/Calculadora"
cd $ruta
find . -type f ! -name '*.c','*.h' -delete
echo "Borrado Finalizado"