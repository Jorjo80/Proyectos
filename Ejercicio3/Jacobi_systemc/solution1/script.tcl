############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Jacobi_systemc
add_files Jacobi_systemc/consumer.c
add_files Jacobi_systemc/consumer.h
add_files Jacobi_systemc/fifo_tb.cpp
add_files Jacobi_systemc/producer.c
add_files Jacobi_systemc/producer.h
add_files Jacobi_systemc/stack.h
add_files Jacobi_systemc/stack_tb.cpp
add_files Jacobi_systemc/top.h
open_solution "solution1"
set_part {xc7z020clg400-1} -tool vivado
create_clock -period 10 -name default
#source "./Jacobi_systemc/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -format ip_catalog
