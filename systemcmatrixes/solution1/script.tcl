############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project systemcmatrixes
set_top top
add_files systemcmatrixes/hardware.h
add_files systemcmatrixes/software.cpp
add_files systemcmatrixes/software.h
add_files systemcmatrixes/top.h
add_files -tb systemcmatrixes/main.cpp
open_solution "solution1"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./systemcmatrixes/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
