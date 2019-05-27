set moduleName jacobi_HLS
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {jacobi_HLS}
set C_modelType { double 64 }
set C_modelArgList {
	{ J int 32 regular {array 16 { 1 3 } 1 1 }  }
	{ b int 32 regular {array 4 { 1 3 } 1 1 }  }
	{ x int 32 regular {array 16 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "J", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "J","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]}]}]} , 
 	{ "Name" : "b", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "b","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 3,"step" : 1}]}]}]} , 
 	{ "Name" : "x", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "x","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 15,"step" : 1}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 64,"bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "return","cData": "double","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 17
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ J_address0 sc_out sc_lv 4 signal 0 } 
	{ J_ce0 sc_out sc_logic 1 signal 0 } 
	{ J_q0 sc_in sc_lv 32 signal 0 } 
	{ b_address0 sc_out sc_lv 2 signal 1 } 
	{ b_ce0 sc_out sc_logic 1 signal 1 } 
	{ b_q0 sc_in sc_lv 32 signal 1 } 
	{ x_address0 sc_out sc_lv 4 signal 2 } 
	{ x_ce0 sc_out sc_logic 1 signal 2 } 
	{ x_we0 sc_out sc_logic 1 signal 2 } 
	{ x_d0 sc_out sc_lv 32 signal 2 } 
	{ ap_return sc_out sc_lv 64 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "J_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "J", "role": "address0" }} , 
 	{ "name": "J_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "J", "role": "ce0" }} , 
 	{ "name": "J_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "J", "role": "q0" }} , 
 	{ "name": "b_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "b", "role": "address0" }} , 
 	{ "name": "b_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b", "role": "ce0" }} , 
 	{ "name": "b_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "b", "role": "q0" }} , 
 	{ "name": "x_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "x", "role": "address0" }} , 
 	{ "name": "x_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x", "role": "ce0" }} , 
 	{ "name": "x_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x", "role": "we0" }} , 
 	{ "name": "x_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x", "role": "d0" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8"],
		"CDFG" : "jacobi_HLS",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "5866", "EstimateLatencyMax" : "5866",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state70", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1231"},
			{"State" : "ap_ST_fsm_state137", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1231"},
			{"State" : "ap_ST_fsm_state204", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1231"},
			{"State" : "ap_ST_fsm_state271", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1231"},
			{"State" : "ap_ST_fsm_state338", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1231"},
			{"State" : "ap_ST_fsm_state405", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1231"},
			{"State" : "ap_ST_fsm_state472", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1231"},
			{"State" : "ap_ST_fsm_state539", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1231"},
			{"State" : "ap_ST_fsm_state606", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1231"},
			{"State" : "ap_ST_fsm_state673", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1231"},
			{"State" : "ap_ST_fsm_state740", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1231"},
			{"State" : "ap_ST_fsm_state807", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1231"},
			{"State" : "ap_ST_fsm_state874", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1231"},
			{"State" : "ap_ST_fsm_state941", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1231"},
			{"State" : "ap_ST_fsm_state1008", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1231"},
			{"State" : "ap_ST_fsm_state1075", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1231"}],
		"Port" : [
			{"Name" : "J", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "x", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_prev_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_new_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_p_hls_fptosi_double_s_fu_1231", "Parent" : "0",
		"CDFG" : "p_hls_fptosi_double_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.jacobi_HLS_dadddsbkb_U2", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.jacobi_HLS_dmul_6cud_U3", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.jacobi_HLS_ddiv_6dEe_U4", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.jacobi_HLS_sitodpeOg_U5", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.jacobi_HLS_dsqrt_fYi_U6", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	jacobi_HLS {
		J {Type I LastRead 34 FirstWrite -1}
		b {Type I LastRead 43 FirstWrite -1}
		x {Type O LastRead -1 FirstWrite 36}}
	p_hls_fptosi_double_s {
		x {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "5866", "Max" : "5866"}
	, {"Name" : "Interval", "Min" : "5867", "Max" : "5867"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
]}

set Spec2ImplPortList { 
	J { ap_memory {  { J_address0 mem_address 1 4 }  { J_ce0 mem_ce 1 1 }  { J_q0 mem_dout 0 32 } } }
	b { ap_memory {  { b_address0 mem_address 1 2 }  { b_ce0 mem_ce 1 1 }  { b_q0 mem_dout 0 32 } } }
	x { ap_memory {  { x_address0 mem_address 1 4 }  { x_ce0 mem_ce 1 1 }  { x_we0 mem_we 1 1 }  { x_d0 mem_din 1 32 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}