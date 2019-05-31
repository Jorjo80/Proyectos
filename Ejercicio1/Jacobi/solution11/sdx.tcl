# ==============================================================
# File generated on Fri May 31 12:03:32 +0200 2019
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../testbench.c -cflags { -Wno-unknown-pragmas}
add_files Jacobi/jacobi.h
add_files Jacobi/main.c
set_part xc7z020clg400-1
create_clock -name default -period 10
set_directive_pipeline jacobi_HLS/Iteracciones 
set_directive_unroll jacobi_HLS/Columnas 
set_directive_unroll jacobi_HLS/filas 
set_directive_pipeline jacobi_HLS/inicializacion 
set_directive_pipeline jacobi_HLS/calculo_error 
set_directive_unroll jacobi_HLS/Iteracciones 
set_directive_pipeline jacobi_HLS/filas 
