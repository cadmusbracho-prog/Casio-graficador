cmake_minimum_required(VERSION 3.15)
project(casio_graficador C)

find_package(Gint 2.9 REQUIRED)

set(SOURCES src/main.c)

fxsdk_target(
    NAME casio_graficador
    FX9860G
    SOURCES ${SOURCES}
)
