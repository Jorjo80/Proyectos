############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Jacobi
set_top jacobi_HLS
add_files Jacobi/jacobi.h
add_files Jacobi/main.c
add_files -tb Jacobi/testbench.c -cflags "-Wno-unknown-pragmas"
open_solution "solution2"
set_part {xc7z020clg400-1}
create_clock -period 10 -name default
source "./Jacobi/solution2/directives.tcl"
csim_design -O
csynth_design
cosim_design
export_design -format ip_catalog
