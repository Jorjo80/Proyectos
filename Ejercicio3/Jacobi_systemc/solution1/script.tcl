############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Jacobi_systemc
set_top main
add_files Jacobi_systemc/consumer.cpp
add_files Jacobi_systemc/consumer.h
add_files Jacobi_systemc/producer.cpp
add_files Jacobi_systemc/producer.h
add_files Jacobi_systemc/top.h
add_files -tb Jacobi_systemc/main.cpp
open_solution "solution1"
set_part {xc7z020clg400-1} -tool vivado
create_clock -period 10 -name default
#source "./Jacobi_systemc/solution1/directives.tcl"
csim_design -O
csynth_design
cosim_design
export_design -format ip_catalog
