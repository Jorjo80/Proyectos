; ModuleID = 'C:/Users/USER1/AppData/Roaming/Xilinx/Vivado/systemcmatrixes/solution1/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@ssdm_ins_software_0_5 = constant i32 0           ; [#uses=0 type=i32*]
@ssdm_ins_software_0_4 = constant i32 0           ; [#uses=0 type=i32*]
@ssdm_ins_software_0_3 = constant [4 x i32] [i32 2, i32 3, i32 4, i32 5] ; [#uses=0 type=[4 x i32]*]
@ssdm_ins_software_0_1 = constant [16 x i32] [i32 0, i32 0, i32 0, i32 0, i32 1, i32 1, i32 2, i32 3, i32 2, i32 3, i32 4, i32 6, i32 3, i32 4, i32 7, i32 9] ; [#uses=0 type=[16 x i32]*]
@ssdm_ins_software_0_s = constant i32 0           ; [#uses=0 type=i32*]
@software_ssdm_thread_M_senddata = external global i1 ; [#uses=1 type=i1*]
@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a] ; [#uses=0 type=[1 x void ()*]*]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535] ; [#uses=0 type=[1 x i32]*]
@p_str3 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=45 type=[1 x i8]*]
@p_str2 = private unnamed_addr constant [10 x i8] c"SC_METHOD\00", align 1 ; [#uses=2 type=[10 x i8]*]
@p_str12 = private unnamed_addr constant [8 x i8] c"ap_fifo\00", align 1 ; [#uses=6 type=[8 x i8]*]
@p_str1 = private unnamed_addr constant [9 x i8] c"senddata\00", align 1 ; [#uses=2 type=[9 x i8]*]
@p_str = private unnamed_addr constant [9 x i8] c"software\00", align 1 ; [#uses=4 type=[9 x i8]*]

; [#uses=0]
define weak void @"software::software"([16 x i32]* %software_A, [4 x i32]* %software_b, i32* %software_matrixA_m_if_Val, i32* %software_matrixb_m_if_Val, i32* %software_matrixx_m_if_Val) noinline {
  call void (...)* @_ssdm_op_SpecBitsMap([16 x i32]* %software_A), !map !47
  call void (...)* @_ssdm_op_SpecBitsMap([4 x i32]* %software_b), !map !53
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %software_matrixA_m_if_Val), !map !58
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %software_matrixb_m_if_Val), !map !62
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %software_matrixx_m_if_Val), !map !66
  call void @llvm.dbg.value(metadata !{[16 x i32]* %software_A}, i64 0, metadata !70), !dbg !270 ; [debug line = 15:3] [debug variable = software.A]
  call void @llvm.dbg.value(metadata !{[4 x i32]* %software_b}, i64 0, metadata !271), !dbg !270 ; [debug line = 15:3] [debug variable = software.b]
  call void @llvm.dbg.value(metadata !{i32* %software_matrixA_m_if_Val}, i64 0, metadata !275), !dbg !270 ; [debug line = 15:3] [debug variable = software.matrixA.m_if.Val]
  call void @llvm.dbg.value(metadata !{i32* %software_matrixb_m_if_Val}, i64 0, metadata !285), !dbg !270 ; [debug line = 15:3] [debug variable = software.matrixb.m_if.Val]
  call void @llvm.dbg.value(metadata !{i32* %software_matrixx_m_if_Val}, i64 0, metadata !286), !dbg !270 ; [debug line = 15:3] [debug variable = software.matrixx.m_if.Val]
  call void @llvm.dbg.value(metadata !{i32* %software_matrixA_m_if_Val}, i64 0, metadata !296), !dbg !300 ; [debug line = 239:47@272:68@303:71@303:73@16:2] [debug variable = sc_fifo_out_if<int>.Val]
  call void @llvm.dbg.value(metadata !{i32* %software_matrixA_m_if_Val}, i64 0, metadata !308), !dbg !311 ; [debug line = 239:47@242:9@272:68@303:71@303:73@16:2] [debug variable = sc_fifo_out_if<int>.Val]
  call void (...)* @_ssdm_op_SpecInterface(i32* %software_matrixA_m_if_Val, [8 x i8]* @p_str12, i32 0, i32 0, [1 x i8]* @p_str3, i32 0, i32 0, [1 x i8]* @p_str3, [1 x i8]* @p_str3, [1 x i8]* @p_str3, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str3, [1 x i8]* @p_str3) nounwind, !dbg !313 ; [debug line = 240:13@242:9@272:68@303:71@303:73@16:2]
  call void (...)* @_ssdm_op_SpecPort([1 x i8]* @p_str3, i32 5, [1 x i8]* @p_str3, [1 x i8]* @p_str3, i32 0, i32 0, i32* %software_matrixA_m_if_Val) nounwind, !dbg !315 ; [debug line = 241:13@242:9@272:68@303:71@303:73@16:2]
  call void @llvm.dbg.value(metadata !{i32* %software_matrixb_m_if_Val}, i64 0, metadata !296), !dbg !300 ; [debug line = 239:47@272:68@303:71@303:73@16:2] [debug variable = sc_fifo_out_if<int>.Val]
  call void @llvm.dbg.value(metadata !{i32* %software_matrixb_m_if_Val}, i64 0, metadata !308), !dbg !311 ; [debug line = 239:47@242:9@272:68@303:71@303:73@16:2] [debug variable = sc_fifo_out_if<int>.Val]
  call void (...)* @_ssdm_op_SpecInterface(i32* %software_matrixb_m_if_Val, [8 x i8]* @p_str12, i32 0, i32 0, [1 x i8]* @p_str3, i32 0, i32 0, [1 x i8]* @p_str3, [1 x i8]* @p_str3, [1 x i8]* @p_str3, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str3, [1 x i8]* @p_str3) nounwind, !dbg !313 ; [debug line = 240:13@242:9@272:68@303:71@303:73@16:2]
  call void (...)* @_ssdm_op_SpecPort([1 x i8]* @p_str3, i32 5, [1 x i8]* @p_str3, [1 x i8]* @p_str3, i32 0, i32 0, i32* %software_matrixb_m_if_Val) nounwind, !dbg !315 ; [debug line = 241:13@242:9@272:68@303:71@303:73@16:2]
  call void @llvm.dbg.value(metadata !{i32* %software_matrixx_m_if_Val}, i64 0, metadata !316), !dbg !320 ; [debug line = 216:47@272:68@303:71@303:73@16:2] [debug variable = sc_fifo_in_if<int>.Val]
  call void @llvm.dbg.value(metadata !{i32* %software_matrixx_m_if_Val}, i64 0, metadata !327), !dbg !330 ; [debug line = 216:47@219:9@272:68@303:71@303:73@16:2] [debug variable = sc_fifo_in_if<int>.Val]
  call void (...)* @_ssdm_op_SpecInterface(i32* %software_matrixx_m_if_Val, [8 x i8]* @p_str12, i32 0, i32 0, [1 x i8]* @p_str3, i32 0, i32 0, [1 x i8]* @p_str3, [1 x i8]* @p_str3, [1 x i8]* @p_str3, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str3, [1 x i8]* @p_str3) nounwind, !dbg !332 ; [debug line = 217:12@219:9@272:68@303:71@303:73@16:2]
  call void (...)* @_ssdm_op_SpecPort([1 x i8]* @p_str3, i32 4, [1 x i8]* @p_str3, [1 x i8]* @p_str3, i32 0, i32 0, i32* %software_matrixx_m_if_Val) nounwind, !dbg !334 ; [debug line = 218:12@219:9@272:68@303:71@303:73@16:2]
  call void (...)* @_ssdm_op_SpecTopModule([9 x i8]* @p_str, [9 x i8]* @p_str) nounwind, !dbg !335 ; [debug line = 17:5]
  %software_ssdm_thr = load i1* @software_ssdm_thread_M_senddata, align 1, !dbg !337 ; [#uses=1 type=i1] [debug line = 18:5]
  br i1 %software_ssdm_thr, label %1, label %._crit_edge, !dbg !337 ; [debug line = 18:5]

; <label>:1                                       ; preds = %0
  call void @senddata([16 x i32]* %software_A, [4 x i32]* %software_b, i32* %software_matrixA_m_if_Val, i32* %software_matrixb_m_if_Val, i32* %software_matrixx_m_if_Val), !dbg !338 ; [debug line = 18:35]
  br label %._crit_edge, !dbg !338                ; [debug line = 18:35]

._crit_edge:                                      ; preds = %1, %0
  call void (...)* @_ssdm_op_SpecProcessDecl([9 x i8]* @p_str, i32 0, [9 x i8]* @p_str1) nounwind, !dbg !339 ; [debug line = 18:47]
  call void @llvm.dbg.value(metadata !{[16 x i32]* %software_A}, i64 0, metadata !340), !dbg !345 ; [debug line = 3:16@19:3] [debug variable = software.A]
  call void @llvm.dbg.value(metadata !{[4 x i32]* %software_b}, i64 0, metadata !346), !dbg !345 ; [debug line = 3:16@19:3] [debug variable = software.b]
  call void @llvm.dbg.value(metadata !{i32* %software_matrixA_m_if_Val}, i64 0, metadata !347), !dbg !345 ; [debug line = 3:16@19:3] [debug variable = software.matrixA.m_if.Val]
  call void @llvm.dbg.value(metadata !{i32* %software_matrixb_m_if_Val}, i64 0, metadata !348), !dbg !345 ; [debug line = 3:16@19:3] [debug variable = software.matrixb.m_if.Val]
  call void @llvm.dbg.value(metadata !{i32* %software_matrixx_m_if_Val}, i64 0, metadata !349), !dbg !345 ; [debug line = 3:16@19:3] [debug variable = software.matrixx.m_if.Val]
  br label %.loopexit, !dbg !350                  ; [debug line = 4:14@19:3]

.loopexit.loopexit:                               ; preds = %3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %._crit_edge
  %j_0_i = phi i3 [ 0, %._crit_edge ], [ %j, %.loopexit.loopexit ] ; [#uses=7 type=i3]
  %j_0_i_cast4_cast = zext i3 %j_0_i to i4, !dbg !350 ; [#uses=1 type=i4] [debug line = 4:14@19:3]
  %exitcond1_i = icmp eq i3 %j_0_i, -4, !dbg !350 ; [#uses=1 type=i1] [debug line = 4:14@19:3]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  %j = add i3 %j_0_i, 1, !dbg !353                ; [#uses=1 type=i3] [debug line = 4:19@19:3]
  call void @llvm.dbg.value(metadata !{i3 %j}, i64 0, metadata !354), !dbg !353 ; [debug line = 4:19@19:3] [debug variable = j]
  br i1 %exitcond1_i, label %initialization.exit, label %2, !dbg !350 ; [debug line = 4:14@19:3]

; <label>:2                                       ; preds = %.loopexit
  %tmp = add i3 %j_0_i, 2, !dbg !355              ; [#uses=1 type=i3] [debug line = 5:3@19:3]
  %tmp_cast = zext i3 %tmp to i32, !dbg !355      ; [#uses=1 type=i32] [debug line = 5:3@19:3]
  %tmp_1 = zext i3 %j_0_i to i64, !dbg !355       ; [#uses=1 type=i64] [debug line = 5:3@19:3]
  %tmp_2 = call i5 @_ssdm_op_BitConcatenate.i5.i3.i2(i3 %j_0_i, i2 0) ; [#uses=1 type=i5]
  %tmp_5_cast1 = zext i5 %tmp_2 to i6, !dbg !355  ; [#uses=1 type=i6] [debug line = 5:3@19:3]
  %software_b_addr = getelementptr [4 x i32]* %software_b, i64 0, i64 %tmp_1, !dbg !355 ; [#uses=1 type=i32*] [debug line = 5:3@19:3]
  store i32 %tmp_cast, i32* %software_b_addr, align 4, !dbg !355 ; [debug line = 5:3@19:3]
  br label %3, !dbg !357                          ; [debug line = 6:14@19:3]

; <label>:3                                       ; preds = %4, %2
  %k_0_i = phi i3 [ 0, %2 ], [ %k, %4 ]           ; [#uses=3 type=i3]
  %phi_mul = phi i4 [ 0, %2 ], [ %next_mul, %4 ]  ; [#uses=2 type=i4]
  %phi_mul_cast = zext i4 %phi_mul to i5, !dbg !357 ; [#uses=1 type=i5] [debug line = 6:14@19:3]
  %exitcond_i = icmp eq i3 %k_0_i, -4, !dbg !357  ; [#uses=1 type=i1] [debug line = 6:14@19:3]
  %empty_3 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) ; [#uses=0 type=i32]
  %k = add i3 %k_0_i, 1, !dbg !359                ; [#uses=2 type=i3] [debug line = 7:4@19:3]
  br i1 %exitcond_i, label %.loopexit.loopexit, label %4, !dbg !357 ; [debug line = 6:14@19:3]

; <label>:4                                       ; preds = %3
  %next_mul = add i4 %j_0_i_cast4_cast, %phi_mul  ; [#uses=1 type=i4]
  %tmp_4 = sdiv i3 %j_0_i, %k, !dbg !359          ; [#uses=1 type=i3] [debug line = 7:4@19:3]
  %tmp_8 = sext i3 %tmp_4 to i4, !dbg !359        ; [#uses=1 type=i4] [debug line = 7:4@19:3]
  %tmp_5_cast = zext i4 %tmp_8 to i5, !dbg !359   ; [#uses=1 type=i5] [debug line = 7:4@19:3]
  %tmp_6 = add i5 %tmp_5_cast, %phi_mul_cast, !dbg !359 ; [#uses=1 type=i5] [debug line = 7:4@19:3]
  %tmp_6_cast = zext i5 %tmp_6 to i32, !dbg !359  ; [#uses=1 type=i32] [debug line = 7:4@19:3]
  %tmp_7_cast = zext i3 %k_0_i to i6, !dbg !359   ; [#uses=1 type=i6] [debug line = 7:4@19:3]
  %tmp_9 = add i6 %tmp_5_cast1, %tmp_7_cast, !dbg !359 ; [#uses=1 type=i6] [debug line = 7:4@19:3]
  %tmp_9_cast = zext i6 %tmp_9 to i64, !dbg !359  ; [#uses=1 type=i64] [debug line = 7:4@19:3]
  %software_A_addr = getelementptr [16 x i32]* %software_A, i64 0, i64 %tmp_9_cast, !dbg !359 ; [#uses=1 type=i32*] [debug line = 7:4@19:3]
  store i32 %tmp_6_cast, i32* %software_A_addr, align 4, !dbg !359 ; [debug line = 7:4@19:3]
  call void @llvm.dbg.value(metadata !{i3 %k}, i64 0, metadata !360), !dbg !361 ; [debug line = 6:19@19:3] [debug variable = k]
  br label %3, !dbg !361                          ; [debug line = 6:19@19:3]

initialization.exit:                              ; preds = %.loopexit
  ret void, !dbg !362                             ; [debug line = 20:1]
}

; [#uses=1]
define internal void @senddata([16 x i32]* %software_A, [4 x i32]* %software_b, i32* %software_matrixA_m_if_Val, i32* %software_matrixb_m_if_Val, i32* %software_matrixx_m_if_Val) noinline {
_ZN7_ap_sc_7sc_core4waitEi.exit.0:
  %software_A_addr = getelementptr [16 x i32]* %software_A, i64 0, i64 0, !dbg !363 ; [#uses=1 type=i32*] [debug line = 15:5]
  %software_A_addr_1 = getelementptr [16 x i32]* %software_A, i64 0, i64 1, !dbg !363 ; [#uses=1 type=i32*] [debug line = 15:5]
  %software_A_addr_2 = getelementptr [16 x i32]* %software_A, i64 0, i64 2, !dbg !363 ; [#uses=1 type=i32*] [debug line = 15:5]
  %software_A_addr_3 = getelementptr [16 x i32]* %software_A, i64 0, i64 3, !dbg !363 ; [#uses=1 type=i32*] [debug line = 15:5]
  %software_A_addr_4 = getelementptr [16 x i32]* %software_A, i64 0, i64 4, !dbg !363 ; [#uses=1 type=i32*] [debug line = 15:5]
  %software_A_addr_5 = getelementptr [16 x i32]* %software_A, i64 0, i64 5, !dbg !363 ; [#uses=1 type=i32*] [debug line = 15:5]
  %software_A_addr_6 = getelementptr [16 x i32]* %software_A, i64 0, i64 6, !dbg !363 ; [#uses=1 type=i32*] [debug line = 15:5]
  %software_A_addr_7 = getelementptr [16 x i32]* %software_A, i64 0, i64 7, !dbg !363 ; [#uses=1 type=i32*] [debug line = 15:5]
  %software_A_addr_8 = getelementptr [16 x i32]* %software_A, i64 0, i64 8, !dbg !363 ; [#uses=1 type=i32*] [debug line = 15:5]
  %software_A_addr_9 = getelementptr [16 x i32]* %software_A, i64 0, i64 9, !dbg !363 ; [#uses=1 type=i32*] [debug line = 15:5]
  %software_A_addr_10 = getelementptr [16 x i32]* %software_A, i64 0, i64 10, !dbg !363 ; [#uses=1 type=i32*] [debug line = 15:5]
  %software_A_addr_11 = getelementptr [16 x i32]* %software_A, i64 0, i64 11, !dbg !363 ; [#uses=1 type=i32*] [debug line = 15:5]
  %software_A_addr_12 = getelementptr [16 x i32]* %software_A, i64 0, i64 12, !dbg !363 ; [#uses=1 type=i32*] [debug line = 15:5]
  %software_A_addr_13 = getelementptr [16 x i32]* %software_A, i64 0, i64 13, !dbg !363 ; [#uses=1 type=i32*] [debug line = 15:5]
  %software_A_addr_14 = getelementptr [16 x i32]* %software_A, i64 0, i64 14, !dbg !363 ; [#uses=1 type=i32*] [debug line = 15:5]
  %software_A_addr_15 = getelementptr [16 x i32]* %software_A, i64 0, i64 15, !dbg !363 ; [#uses=1 type=i32*] [debug line = 15:5]
  call void (...)* @_ssdm_op_SpecInterface(i32* %software_matrixx_m_if_Val, [8 x i8]* @p_str12, i32 0, i32 0, [1 x i8]* @p_str3, i32 0, i32 0, [1 x i8]* @p_str3, [1 x i8]* @p_str3, [1 x i8]* @p_str3, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str3, [1 x i8]* @p_str3)
  call void (...)* @_ssdm_op_SpecInterface(i32* %software_matrixb_m_if_Val, [8 x i8]* @p_str12, i32 0, i32 0, [1 x i8]* @p_str3, i32 0, i32 0, [1 x i8]* @p_str3, [1 x i8]* @p_str3, [1 x i8]* @p_str3, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str3, [1 x i8]* @p_str3)
  call void (...)* @_ssdm_op_SpecInterface(i32* %software_matrixA_m_if_Val, [8 x i8]* @p_str12, i32 0, i32 0, [1 x i8]* @p_str3, i32 0, i32 0, [1 x i8]* @p_str3, [1 x i8]* @p_str3, [1 x i8]* @p_str3, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str3, [1 x i8]* @p_str3)
  call void (...)* @_ssdm_op_SpecBitsMap([16 x i32]* %software_A), !map !47
  call void (...)* @_ssdm_op_SpecBitsMap([4 x i32]* %software_b), !map !53
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %software_matrixA_m_if_Val), !map !58
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %software_matrixb_m_if_Val), !map !62
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %software_matrixx_m_if_Val), !map !66
  call void @llvm.dbg.value(metadata !{[16 x i32]* %software_A}, i64 0, metadata !369), !dbg !371 ; [debug line = 10:16] [debug variable = software.A]
  call void @llvm.dbg.value(metadata !{[4 x i32]* %software_b}, i64 0, metadata !372), !dbg !371 ; [debug line = 10:16] [debug variable = software.b]
  call void @llvm.dbg.value(metadata !{i32* %software_matrixA_m_if_Val}, i64 0, metadata !373), !dbg !371 ; [debug line = 10:16] [debug variable = software.matrixA.m_if.Val]
  call void @llvm.dbg.value(metadata !{i32* %software_matrixb_m_if_Val}, i64 0, metadata !374), !dbg !371 ; [debug line = 10:16] [debug variable = software.matrixb.m_if.Val]
  call void @llvm.dbg.value(metadata !{i32* %software_matrixx_m_if_Val}, i64 0, metadata !375), !dbg !371 ; [debug line = 10:16] [debug variable = software.matrixx.m_if.Val]
  call void (...)* @_ssdm_op_SpecProcessDef([9 x i8]* @p_str, i32 0, [9 x i8]* @p_str1) nounwind, !dbg !376 ; [debug line = 11:4]
  %tmp = call i32 (...)* @_ssdm_op_SpecRegionBegin([10 x i8]* @p_str2), !dbg !377 ; [#uses=1 type=i32] [debug line = 11:155]
  call void (...)* @_ssdm_op_SpecProtocol(i32 1) nounwind, !dbg !378 ; [debug line = 11:228]
  call void (...)* @_ssdm_op_Wait(i32 1) nounwind, !dbg !379 ; [debug line = 808:19@12:4]
  %software_b_addr = getelementptr [4 x i32]* %software_b, i64 0, i64 0, !dbg !386 ; [#uses=1 type=i32*] [debug line = 13:4]
  call void @llvm.dbg.value(metadata !{i32* %software_matrixb_m_if_Val}, i64 0, metadata !387), !dbg !394 ; [debug line = 140:95@244:73@13:4] [debug variable = P]
  %software_b_load = load i32* %software_b_addr, align 4, !dbg !398 ; [#uses=1 type=i32] [debug line = 179:115@244:73@13:4]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixb_m_if_Val, i32 %software_b_load), !dbg !398 ; [debug line = 179:115@244:73@13:4]
  call void @llvm.dbg.value(metadata !{i32* %software_matrixA_m_if_Val}, i64 0, metadata !387), !dbg !401 ; [debug line = 140:95@244:73@15:5] [debug variable = P]
  %software_A_load = load i32* %software_A_addr, align 4, !dbg !403 ; [#uses=1 type=i32] [debug line = 179:115@244:73@15:5]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixA_m_if_Val, i32 %software_A_load), !dbg !403 ; [debug line = 179:115@244:73@15:5]
  %software_A_load_1 = load i32* %software_A_addr_1, align 4, !dbg !403 ; [#uses=1 type=i32] [debug line = 179:115@244:73@15:5]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixA_m_if_Val, i32 %software_A_load_1), !dbg !403 ; [debug line = 179:115@244:73@15:5]
  %software_A_load_2 = load i32* %software_A_addr_2, align 4, !dbg !403 ; [#uses=1 type=i32] [debug line = 179:115@244:73@15:5]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixA_m_if_Val, i32 %software_A_load_2), !dbg !403 ; [debug line = 179:115@244:73@15:5]
  %software_A_load_3 = load i32* %software_A_addr_3, align 4, !dbg !403 ; [#uses=1 type=i32] [debug line = 179:115@244:73@15:5]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixA_m_if_Val, i32 %software_A_load_3), !dbg !403 ; [debug line = 179:115@244:73@15:5]
  call void (...)* @_ssdm_op_Wait(i32 1) nounwind, !dbg !379 ; [debug line = 808:19@12:4]
  %software_b_addr_1 = getelementptr [4 x i32]* %software_b, i64 0, i64 1, !dbg !386 ; [#uses=1 type=i32*] [debug line = 13:4]
  %software_b_load_1 = load i32* %software_b_addr_1, align 4, !dbg !398 ; [#uses=1 type=i32] [debug line = 179:115@244:73@13:4]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixb_m_if_Val, i32 %software_b_load_1), !dbg !398 ; [debug line = 179:115@244:73@13:4]
  %software_A_load_4 = load i32* %software_A_addr_4, align 4, !dbg !403 ; [#uses=1 type=i32] [debug line = 179:115@244:73@15:5]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixA_m_if_Val, i32 %software_A_load_4), !dbg !403 ; [debug line = 179:115@244:73@15:5]
  %software_A_load_5 = load i32* %software_A_addr_5, align 4, !dbg !403 ; [#uses=1 type=i32] [debug line = 179:115@244:73@15:5]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixA_m_if_Val, i32 %software_A_load_5), !dbg !403 ; [debug line = 179:115@244:73@15:5]
  %software_A_load_6 = load i32* %software_A_addr_6, align 4, !dbg !403 ; [#uses=1 type=i32] [debug line = 179:115@244:73@15:5]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixA_m_if_Val, i32 %software_A_load_6), !dbg !403 ; [debug line = 179:115@244:73@15:5]
  %software_A_load_7 = load i32* %software_A_addr_7, align 4, !dbg !403 ; [#uses=1 type=i32] [debug line = 179:115@244:73@15:5]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixA_m_if_Val, i32 %software_A_load_7), !dbg !403 ; [debug line = 179:115@244:73@15:5]
  call void (...)* @_ssdm_op_Wait(i32 1) nounwind, !dbg !379 ; [debug line = 808:19@12:4]
  %software_b_addr_2 = getelementptr [4 x i32]* %software_b, i64 0, i64 2, !dbg !386 ; [#uses=1 type=i32*] [debug line = 13:4]
  %software_b_load_2 = load i32* %software_b_addr_2, align 4, !dbg !398 ; [#uses=1 type=i32] [debug line = 179:115@244:73@13:4]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixb_m_if_Val, i32 %software_b_load_2), !dbg !398 ; [debug line = 179:115@244:73@13:4]
  %software_A_load_8 = load i32* %software_A_addr_8, align 4, !dbg !403 ; [#uses=1 type=i32] [debug line = 179:115@244:73@15:5]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixA_m_if_Val, i32 %software_A_load_8), !dbg !403 ; [debug line = 179:115@244:73@15:5]
  %software_A_load_9 = load i32* %software_A_addr_9, align 4, !dbg !403 ; [#uses=1 type=i32] [debug line = 179:115@244:73@15:5]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixA_m_if_Val, i32 %software_A_load_9), !dbg !403 ; [debug line = 179:115@244:73@15:5]
  %software_A_load_10 = load i32* %software_A_addr_10, align 4, !dbg !403 ; [#uses=1 type=i32] [debug line = 179:115@244:73@15:5]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixA_m_if_Val, i32 %software_A_load_10), !dbg !403 ; [debug line = 179:115@244:73@15:5]
  %software_A_load_11 = load i32* %software_A_addr_11, align 4, !dbg !403 ; [#uses=1 type=i32] [debug line = 179:115@244:73@15:5]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixA_m_if_Val, i32 %software_A_load_11), !dbg !403 ; [debug line = 179:115@244:73@15:5]
  call void (...)* @_ssdm_op_Wait(i32 1) nounwind, !dbg !379 ; [debug line = 808:19@12:4]
  %software_b_addr_3 = getelementptr [4 x i32]* %software_b, i64 0, i64 3, !dbg !386 ; [#uses=1 type=i32*] [debug line = 13:4]
  %software_b_load_3 = load i32* %software_b_addr_3, align 4, !dbg !398 ; [#uses=1 type=i32] [debug line = 179:115@244:73@13:4]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixb_m_if_Val, i32 %software_b_load_3), !dbg !398 ; [debug line = 179:115@244:73@13:4]
  %software_A_load_12 = load i32* %software_A_addr_12, align 4, !dbg !403 ; [#uses=1 type=i32] [debug line = 179:115@244:73@15:5]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixA_m_if_Val, i32 %software_A_load_12), !dbg !403 ; [debug line = 179:115@244:73@15:5]
  %software_A_load_13 = load i32* %software_A_addr_13, align 4, !dbg !403 ; [#uses=1 type=i32] [debug line = 179:115@244:73@15:5]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixA_m_if_Val, i32 %software_A_load_13), !dbg !403 ; [debug line = 179:115@244:73@15:5]
  %software_A_load_14 = load i32* %software_A_addr_14, align 4, !dbg !403 ; [#uses=1 type=i32] [debug line = 179:115@244:73@15:5]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixA_m_if_Val, i32 %software_A_load_14), !dbg !403 ; [debug line = 179:115@244:73@15:5]
  %software_A_load_15 = load i32* %software_A_addr_15, align 4, !dbg !403 ; [#uses=1 type=i32] [debug line = 179:115@244:73@15:5]
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %software_matrixA_m_if_Val, i32 %software_A_load_15), !dbg !403 ; [debug line = 179:115@244:73@15:5]
  %empty = call i32 (...)* @_ssdm_op_SpecRegionEnd([10 x i8]* @p_str2, i32 %tmp), !dbg !404 ; [#uses=0 type=i32] [debug line = 16:4]
  ret void, !dbg !405                             ; [debug line = 16:43]
}

; [#uses=25]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=20]
define weak void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32*, i32) {
entry:
  %empty = call i32 @_autotb_FifoWrite_i32(i32* %0, i32 %1) ; [#uses=0 type=i32]
  ret void
}

; [#uses=4]
define weak void @_ssdm_op_Wait(...) nounwind {
entry:
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) nounwind {
entry:
  ret void
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

; [#uses=1]
define weak void @_ssdm_op_SpecProtocol(...) nounwind {
entry:
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecProcessDef(...) nounwind {
entry:
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecProcessDecl(...) nounwind {
entry:
  ret void
}

; [#uses=3]
define weak void @_ssdm_op_SpecPort(...) nounwind {
entry:
  ret void
}

; [#uses=2]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=6]
define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

; [#uses=10]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=1]
define weak i5 @_ssdm_op_BitConcatenate.i5.i3.i2(i3, i2) nounwind readnone {
entry:
  %empty = zext i3 %0 to i5                       ; [#uses=1 type=i5]
  %empty_4 = zext i2 %1 to i5                     ; [#uses=1 type=i5]
  %empty_5 = shl i5 %empty, 2                     ; [#uses=1 type=i5]
  %empty_6 = or i5 %empty_5, %empty_4             ; [#uses=1 type=i5]
  ret i5 %empty_6
}

; [#uses=1]
declare i32 @_autotb_FifoWrite_i32(i32*, i32)

; [#uses=1]
declare void @_GLOBAL__I_a() nounwind

!opencl.kernels = !{!0, !7, !13, !19, !7, !23, !23, !28, !28, !7, !7, !7, !30, !30, !7, !7, !7, !7, !7, !30, !30, !32}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!35, !42}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"int [4]*", metadata !"int*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"A", metadata !"b"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space"}
!9 = metadata !{metadata !"kernel_arg_access_qual"}
!10 = metadata !{metadata !"kernel_arg_type"}
!11 = metadata !{metadata !"kernel_arg_type_qual"}
!12 = metadata !{metadata !"kernel_arg_name"}
!13 = metadata !{null, metadata !14, metadata !15, metadata !16, metadata !17, metadata !18, metadata !6}
!14 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!15 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!16 = metadata !{metadata !"kernel_arg_type", metadata !"const int &"}
!17 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!18 = metadata !{metadata !"kernel_arg_name", metadata !"t"}
!19 = metadata !{null, metadata !20, metadata !2, metadata !21, metadata !4, metadata !22, metadata !6}
!20 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0}
!21 = metadata !{metadata !"kernel_arg_type", metadata !"volatile int &", metadata !"const int &"}
!22 = metadata !{metadata !"kernel_arg_name", metadata !"P", metadata !"val"}
!23 = metadata !{null, metadata !24, metadata !15, metadata !25, metadata !26, metadata !27, metadata !6}
!24 = metadata !{metadata !"kernel_arg_addr_space", i32 1}
!25 = metadata !{metadata !"kernel_arg_type", metadata !"char*"}
!26 = metadata !{metadata !"kernel_arg_type_qual", metadata !"const"}
!27 = metadata !{metadata !"kernel_arg_name", metadata !""}
!28 = metadata !{null, metadata !14, metadata !15, metadata !29, metadata !17, metadata !27, metadata !6}
!29 = metadata !{metadata !"kernel_arg_type", metadata !"::sc_core::sc_module_name"}
!30 = metadata !{null, metadata !24, metadata !15, metadata !25, metadata !26, metadata !31, metadata !6}
!31 = metadata !{metadata !"kernel_arg_name", metadata !"name_"}
!32 = metadata !{null, metadata !14, metadata !15, metadata !33, metadata !17, metadata !34, metadata !6}
!33 = metadata !{metadata !"kernel_arg_type", metadata !"int"}
!34 = metadata !{metadata !"kernel_arg_name", metadata !"n"}
!35 = metadata !{metadata !36, i1* @software_ssdm_thread_M_senddata}
!36 = metadata !{metadata !37}
!37 = metadata !{i32 0, i32 0, metadata !38}
!38 = metadata !{metadata !39}
!39 = metadata !{metadata !"software::__ssdm_thread_M_senddata", metadata !40, metadata !"bool", i32 0, i32 0}
!40 = metadata !{metadata !41}
!41 = metadata !{i32 0, i32 0, i32 1}
!42 = metadata !{metadata !43, [1 x i32]* @llvm_global_ctors_0}
!43 = metadata !{metadata !44}
!44 = metadata !{i32 0, i32 31, metadata !45}
!45 = metadata !{metadata !46}
!46 = metadata !{metadata !"llvm.global_ctors.0", metadata !40, metadata !"", i32 0, i32 31}
!47 = metadata !{metadata !48}
!48 = metadata !{i32 0, i32 31, metadata !49}
!49 = metadata !{metadata !50}
!50 = metadata !{metadata !"software.A", metadata !51, metadata !"int", i32 0, i32 31}
!51 = metadata !{metadata !52, metadata !52}
!52 = metadata !{i32 0, i32 3, i32 1}
!53 = metadata !{metadata !54}
!54 = metadata !{i32 0, i32 31, metadata !55}
!55 = metadata !{metadata !56}
!56 = metadata !{metadata !"software.b", metadata !57, metadata !"int", i32 0, i32 31}
!57 = metadata !{metadata !52}
!58 = metadata !{metadata !59}
!59 = metadata !{i32 0, i32 31, metadata !60}
!60 = metadata !{metadata !61}
!61 = metadata !{metadata !"software.matrixA.m_if.Val", metadata !40, metadata !"int", i32 0, i32 31}
!62 = metadata !{metadata !63}
!63 = metadata !{i32 0, i32 31, metadata !64}
!64 = metadata !{metadata !65}
!65 = metadata !{metadata !"software.matrixb.m_if.Val", metadata !40, metadata !"int", i32 0, i32 31}
!66 = metadata !{metadata !67}
!67 = metadata !{i32 0, i32 31, metadata !68}
!68 = metadata !{metadata !69}
!69 = metadata !{metadata !"software.matrixx.m_if.Val", metadata !40, metadata !"int", i32 0, i32 31}
!70 = metadata !{i32 790531, metadata !71, metadata !"software.A", null, i32 15, metadata !267, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!71 = metadata !{i32 786689, metadata !72, metadata !"this", metadata !73, i32 16777231, metadata !266, i32 64, i32 0} ; [ DW_TAG_arg_variable ]
!72 = metadata !{i32 786478, i32 0, null, metadata !"software", metadata !"software", metadata !"_ZN8softwareC2EN7_ap_sc_7sc_core14sc_module_nameE", metadata !73, i32 15, metadata !74, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !254, metadata !103, i32 16} ; [ DW_TAG_subprogram ]
!73 = metadata !{i32 786473, metadata !"systemcmatrixes/software.h", metadata !"C:\5CUsers\5CUSER1\5CAppData\5CRoaming\5CXilinx\5CVivado", null} ; [ DW_TAG_file_type ]
!74 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !75, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!75 = metadata !{null, metadata !76, metadata !255}
!76 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !77} ; [ DW_TAG_pointer_type ]
!77 = metadata !{i32 786434, null, metadata !"software", metadata !73, i32 6, i64 736, i64 32, i32 0, i32 0, null, metadata !78, i32 0, null, null} ; [ DW_TAG_class_type ]
!78 = metadata !{metadata !79, metadata !84, metadata !87, metadata !179, metadata !180, metadata !246, metadata !251, metadata !254}
!79 = metadata !{i32 786445, metadata !77, metadata !"A", metadata !73, i32 9, i64 512, i64 32, i64 0, i32 0, metadata !80} ; [ DW_TAG_member ]
!80 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 512, i64 32, i32 0, i32 0, metadata !81, metadata !82, i32 0, i32 0} ; [ DW_TAG_array_type ]
!81 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!82 = metadata !{metadata !83, metadata !83}
!83 = metadata !{i32 786465, i64 0, i64 3}        ; [ DW_TAG_subrange_type ]
!84 = metadata !{i32 786445, metadata !77, metadata !"b", metadata !73, i32 9, i64 128, i64 32, i64 512, i32 0, metadata !85} ; [ DW_TAG_member ]
!85 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 128, i64 32, i32 0, i32 0, metadata !81, metadata !86, i32 0, i32 0} ; [ DW_TAG_array_type ]
!86 = metadata !{metadata !83}
!87 = metadata !{i32 786445, metadata !77, metadata !"matrixA", metadata !73, i32 10, i64 32, i64 32, i64 640, i32 0, metadata !88} ; [ DW_TAG_member ]
!88 = metadata !{i32 786434, metadata !89, metadata !"sc_port<_ap_sc_::sc_core::sc_fifo_out_if<int>, 1>", metadata !91, i32 297, i64 32, i64 32, i32 0, i32 0, null, metadata !92, i32 0, null, metadata !177} ; [ DW_TAG_class_type ]
!89 = metadata !{i32 786489, metadata !90, metadata !"sc_core", metadata !91, i32 163} ; [ DW_TAG_namespace ]
!90 = metadata !{i32 786489, null, metadata !"_ap_sc_", metadata !91, i32 160} ; [ DW_TAG_namespace ]
!91 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado/2018.1/common/technology/autopilot/ap_sysc/ap_sc_core.h", metadata !"C:\5CUsers\5CUSER1\5CAppData\5CRoaming\5CXilinx\5CVivado", null} ; [ DW_TAG_file_type ]
!92 = metadata !{metadata !93, metadata !170, metadata !174}
!93 = metadata !{i32 786460, metadata !88, null, metadata !91, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !94} ; [ DW_TAG_inheritance ]
!94 = metadata !{i32 786434, metadata !89, metadata !"sc_port_b<_ap_sc_::sc_core::sc_fifo_out_if<int> >", metadata !91, i32 268, i64 32, i64 32, i32 0, i32 0, null, metadata !95, i32 0, null, metadata !168} ; [ DW_TAG_class_type ]
!95 = metadata !{metadata !96, metadata !105, metadata !140, metadata !144, metadata !147, metadata !151, metadata !152, metadata !158, metadata !159, metadata !163, metadata !164}
!96 = metadata !{i32 786460, metadata !94, null, metadata !91, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !97} ; [ DW_TAG_inheritance ]
!97 = metadata !{i32 786434, metadata !89, metadata !"sc_port_base", metadata !91, i32 265, i64 8, i64 8, i32 0, i32 0, null, metadata !98, i32 0, null, null} ; [ DW_TAG_class_type ]
!98 = metadata !{metadata !99}
!99 = metadata !{i32 786478, i32 0, metadata !97, metadata !"sc_port_base", metadata !"sc_port_base", metadata !"", metadata !91, i32 265, metadata !100, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 265} ; [ DW_TAG_subprogram ]
!100 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !101, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!101 = metadata !{null, metadata !102}
!102 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !97} ; [ DW_TAG_pointer_type ]
!103 = metadata !{metadata !104}
!104 = metadata !{i32 786468}                     ; [ DW_TAG_base_type ]
!105 = metadata !{i32 786445, metadata !94, metadata !"m_if", metadata !91, i32 270, i64 32, i64 32, i64 0, i32 0, metadata !106} ; [ DW_TAG_member ]
!106 = metadata !{i32 786434, metadata !89, metadata !"sc_fifo_out_if<int>", metadata !91, i32 235, i64 32, i64 32, i32 0, i32 0, null, metadata !107, i32 0, null, metadata !138} ; [ DW_TAG_class_type ]
!107 = metadata !{metadata !108, metadata !115, metadata !117, metadata !124, metadata !129, metadata !133}
!108 = metadata !{i32 786460, metadata !106, null, metadata !91, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !109} ; [ DW_TAG_inheritance ]
!109 = metadata !{i32 786434, metadata !89, metadata !"sc_interface", metadata !91, i32 165, i64 8, i64 8, i32 0, i32 0, null, metadata !110, i32 0, null, null} ; [ DW_TAG_class_type ]
!110 = metadata !{metadata !111}
!111 = metadata !{i32 786478, i32 0, metadata !109, metadata !"sc_interface", metadata !"sc_interface", metadata !"", metadata !91, i32 165, metadata !112, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 165} ; [ DW_TAG_subprogram ]
!112 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !113, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!113 = metadata !{null, metadata !114}
!114 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !109} ; [ DW_TAG_pointer_type ]
!115 = metadata !{i32 786445, metadata !106, metadata !"Val", metadata !91, i32 237, i64 32, i64 32, i64 0, i32 0, metadata !116} ; [ DW_TAG_member ]
!116 = metadata !{i32 786485, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !81} ; [ DW_TAG_volatile_type ]
!117 = metadata !{i32 786478, i32 0, metadata !106, metadata !"sc_fifo_out_if", metadata !"sc_fifo_out_if", metadata !"", metadata !91, i32 239, metadata !118, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 239} ; [ DW_TAG_subprogram ]
!118 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !119, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!119 = metadata !{null, metadata !120, metadata !121}
!120 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !106} ; [ DW_TAG_pointer_type ]
!121 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !122} ; [ DW_TAG_pointer_type ]
!122 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !123} ; [ DW_TAG_const_type ]
!123 = metadata !{i32 786468, null, metadata !"char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!124 = metadata !{i32 786478, i32 0, metadata !106, metadata !"write", metadata !"write", metadata !"_ZN7_ap_sc_7sc_core14sc_fifo_out_ifIiE5writeERKi", metadata !91, i32 244, metadata !125, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 244} ; [ DW_TAG_subprogram ]
!125 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !126, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!126 = metadata !{null, metadata !120, metadata !127}
!127 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !128} ; [ DW_TAG_reference_type ]
!128 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !81} ; [ DW_TAG_const_type ]
!129 = metadata !{i32 786478, i32 0, metadata !106, metadata !"nb_write", metadata !"nb_write", metadata !"_ZN7_ap_sc_7sc_core14sc_fifo_out_ifIiE8nb_writeERKi", metadata !91, i32 246, metadata !130, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 246} ; [ DW_TAG_subprogram ]
!130 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !131, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!131 = metadata !{metadata !132, metadata !120, metadata !127}
!132 = metadata !{i32 786468, null, metadata !"bool", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 2} ; [ DW_TAG_base_type ]
!133 = metadata !{i32 786478, i32 0, metadata !106, metadata !"num_free", metadata !"num_free", metadata !"_ZNK7_ap_sc_7sc_core14sc_fifo_out_ifIiE8num_freeEv", metadata !91, i32 249, metadata !134, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 249} ; [ DW_TAG_subprogram ]
!134 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !135, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!135 = metadata !{metadata !132, metadata !136}
!136 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !137} ; [ DW_TAG_pointer_type ]
!137 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !106} ; [ DW_TAG_const_type ]
!138 = metadata !{metadata !139}
!139 = metadata !{i32 786479, null, metadata !"T", metadata !81, null, i32 0, i32 0} ; [ DW_TAG_template_type_parameter ]
!140 = metadata !{i32 786478, i32 0, metadata !94, metadata !"sc_port_b", metadata !"sc_port_b", metadata !"", metadata !91, i32 272, metadata !141, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 272} ; [ DW_TAG_subprogram ]
!141 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !142, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!142 = metadata !{null, metadata !143}
!143 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !94} ; [ DW_TAG_pointer_type ]
!144 = metadata !{i32 786478, i32 0, metadata !94, metadata !"sc_port_b", metadata !"sc_port_b", metadata !"", metadata !91, i32 273, metadata !145, i1 false, i1 false, i32 0, i32 0, null, i32 384, i1 false, null, null, i32 0, metadata !103, i32 273} ; [ DW_TAG_subprogram ]
!145 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !146, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!146 = metadata !{null, metadata !143, metadata !121}
!147 = metadata !{i32 786478, i32 0, metadata !94, metadata !"bind", metadata !"bind", metadata !"_ZN7_ap_sc_7sc_core9sc_port_bINS0_14sc_fifo_out_ifIiEEE4bindERS3_", metadata !91, i32 277, metadata !148, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 277} ; [ DW_TAG_subprogram ]
!148 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !149, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!149 = metadata !{null, metadata !143, metadata !150}
!150 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !106} ; [ DW_TAG_reference_type ]
!151 = metadata !{i32 786478, i32 0, metadata !94, metadata !"operator()", metadata !"operator()", metadata !"_ZN7_ap_sc_7sc_core9sc_port_bINS0_14sc_fifo_out_ifIiEEEclERS3_", metadata !91, i32 280, metadata !148, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 280} ; [ DW_TAG_subprogram ]
!152 = metadata !{i32 786478, i32 0, metadata !94, metadata !"bind", metadata !"bind", metadata !"_ZN7_ap_sc_7sc_core9sc_port_bINS0_14sc_fifo_out_ifIiEEE4bindERNS0_15sc_prim_channelE", metadata !91, i32 281, metadata !153, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 281} ; [ DW_TAG_subprogram ]
!153 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !154, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!154 = metadata !{null, metadata !143, metadata !155}
!155 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !156} ; [ DW_TAG_reference_type ]
!156 = metadata !{i32 786434, metadata !89, metadata !"sc_prim_channel", metadata !91, i32 166, i64 8, i64 8, i32 0, i32 0, null, metadata !157, i32 0, null, null} ; [ DW_TAG_class_type ]
!157 = metadata !{i32 0}
!158 = metadata !{i32 786478, i32 0, metadata !94, metadata !"operator()", metadata !"operator()", metadata !"_ZN7_ap_sc_7sc_core9sc_port_bINS0_14sc_fifo_out_ifIiEEEclERNS0_15sc_prim_channelE", metadata !91, i32 284, metadata !153, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 284} ; [ DW_TAG_subprogram ]
!159 = metadata !{i32 786478, i32 0, metadata !94, metadata !"bind", metadata !"bind", metadata !"_ZN7_ap_sc_7sc_core9sc_port_bINS0_14sc_fifo_out_ifIiEEE4bindERS4_", metadata !91, i32 285, metadata !160, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 285} ; [ DW_TAG_subprogram ]
!160 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !161, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!161 = metadata !{null, metadata !143, metadata !162}
!162 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !94} ; [ DW_TAG_reference_type ]
!163 = metadata !{i32 786478, i32 0, metadata !94, metadata !"operator()", metadata !"operator()", metadata !"_ZN7_ap_sc_7sc_core9sc_port_bINS0_14sc_fifo_out_ifIiEEEclERS4_", metadata !91, i32 286, metadata !160, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 286} ; [ DW_TAG_subprogram ]
!164 = metadata !{i32 786478, i32 0, metadata !94, metadata !"operator->", metadata !"operator->", metadata !"_ZN7_ap_sc_7sc_core9sc_port_bINS0_14sc_fifo_out_ifIiEEEptEv", metadata !91, i32 288, metadata !165, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 288} ; [ DW_TAG_subprogram ]
!165 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !166, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!166 = metadata !{metadata !167, metadata !143}
!167 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !106} ; [ DW_TAG_pointer_type ]
!168 = metadata !{metadata !169}
!169 = metadata !{i32 786479, null, metadata !"IF", metadata !106, null, i32 0, i32 0} ; [ DW_TAG_template_type_parameter ]
!170 = metadata !{i32 786478, i32 0, metadata !88, metadata !"sc_port", metadata !"sc_port", metadata !"", metadata !91, i32 303, metadata !171, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 303} ; [ DW_TAG_subprogram ]
!171 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !172, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!172 = metadata !{null, metadata !173}
!173 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !88} ; [ DW_TAG_pointer_type ]
!174 = metadata !{i32 786478, i32 0, metadata !88, metadata !"sc_port", metadata !"sc_port", metadata !"", metadata !91, i32 304, metadata !175, i1 false, i1 false, i32 0, i32 0, null, i32 384, i1 false, null, null, i32 0, metadata !103, i32 304} ; [ DW_TAG_subprogram ]
!175 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !176, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!176 = metadata !{null, metadata !173, metadata !121}
!177 = metadata !{metadata !169, metadata !178}
!178 = metadata !{i32 786480, null, metadata !"N", metadata !81, i64 1, null, i32 0, i32 0} ; [ DW_TAG_template_value_parameter ]
!179 = metadata !{i32 786445, metadata !77, metadata !"matrixb", metadata !73, i32 11, i64 32, i64 32, i64 672, i32 0, metadata !88} ; [ DW_TAG_member ]
!180 = metadata !{i32 786445, metadata !77, metadata !"matrixx", metadata !73, i32 12, i64 32, i64 32, i64 704, i32 0, metadata !181} ; [ DW_TAG_member ]
!181 = metadata !{i32 786434, metadata !89, metadata !"sc_port<_ap_sc_::sc_core::sc_fifo_in_if<int>, 1>", metadata !91, i32 297, i64 32, i64 32, i32 0, i32 0, null, metadata !182, i32 0, null, metadata !245} ; [ DW_TAG_class_type ]
!182 = metadata !{metadata !183, metadata !238, metadata !242}
!183 = metadata !{i32 786460, metadata !181, null, metadata !91, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !184} ; [ DW_TAG_inheritance ]
!184 = metadata !{i32 786434, metadata !89, metadata !"sc_port_b<_ap_sc_::sc_core::sc_fifo_in_if<int> >", metadata !91, i32 268, i64 32, i64 32, i32 0, i32 0, null, metadata !185, i32 0, null, metadata !236} ; [ DW_TAG_class_type ]
!185 = metadata !{metadata !186, metadata !187, metadata !211, metadata !215, metadata !218, metadata !222, metadata !223, metadata !226, metadata !227, metadata !231, metadata !232}
!186 = metadata !{i32 786460, metadata !184, null, metadata !91, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !97} ; [ DW_TAG_inheritance ]
!187 = metadata !{i32 786445, metadata !184, metadata !"m_if", metadata !91, i32 270, i64 32, i64 32, i64 0, i32 0, metadata !188} ; [ DW_TAG_member ]
!188 = metadata !{i32 786434, metadata !89, metadata !"sc_fifo_in_if<int>", metadata !91, i32 212, i64 32, i64 32, i32 0, i32 0, null, metadata !189, i32 0, null, metadata !138} ; [ DW_TAG_class_type ]
!189 = metadata !{metadata !190, metadata !191, metadata !192, metadata !196, metadata !199, metadata !203, metadata !206}
!190 = metadata !{i32 786460, metadata !188, null, metadata !91, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !109} ; [ DW_TAG_inheritance ]
!191 = metadata !{i32 786445, metadata !188, metadata !"Val", metadata !91, i32 214, i64 32, i64 32, i64 0, i32 0, metadata !116} ; [ DW_TAG_member ]
!192 = metadata !{i32 786478, i32 0, metadata !188, metadata !"sc_fifo_in_if", metadata !"sc_fifo_in_if", metadata !"", metadata !91, i32 216, metadata !193, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 216} ; [ DW_TAG_subprogram ]
!193 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !194, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!194 = metadata !{null, metadata !195, metadata !121}
!195 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !188} ; [ DW_TAG_pointer_type ]
!196 = metadata !{i32 786478, i32 0, metadata !188, metadata !"read", metadata !"read", metadata !"_ZN7_ap_sc_7sc_core13sc_fifo_in_ifIiE4readEv", metadata !91, i32 221, metadata !197, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 221} ; [ DW_TAG_subprogram ]
!197 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !198, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!198 = metadata !{metadata !81, metadata !195}
!199 = metadata !{i32 786478, i32 0, metadata !188, metadata !"read", metadata !"read", metadata !"_ZN7_ap_sc_7sc_core13sc_fifo_in_ifIiE4readERi", metadata !91, i32 223, metadata !200, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 223} ; [ DW_TAG_subprogram ]
!200 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !201, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!201 = metadata !{null, metadata !195, metadata !202}
!202 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !81} ; [ DW_TAG_reference_type ]
!203 = metadata !{i32 786478, i32 0, metadata !188, metadata !"nb_read", metadata !"nb_read", metadata !"_ZN7_ap_sc_7sc_core13sc_fifo_in_ifIiE7nb_readERi", metadata !91, i32 225, metadata !204, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 225} ; [ DW_TAG_subprogram ]
!204 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !205, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!205 = metadata !{metadata !132, metadata !195, metadata !202}
!206 = metadata !{i32 786478, i32 0, metadata !188, metadata !"num_available", metadata !"num_available", metadata !"_ZNK7_ap_sc_7sc_core13sc_fifo_in_ifIiE13num_availableEv", metadata !91, i32 228, metadata !207, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 228} ; [ DW_TAG_subprogram ]
!207 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !208, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!208 = metadata !{metadata !132, metadata !209}
!209 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !210} ; [ DW_TAG_pointer_type ]
!210 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !188} ; [ DW_TAG_const_type ]
!211 = metadata !{i32 786478, i32 0, metadata !184, metadata !"sc_port_b", metadata !"sc_port_b", metadata !"", metadata !91, i32 272, metadata !212, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 272} ; [ DW_TAG_subprogram ]
!212 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !213, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!213 = metadata !{null, metadata !214}
!214 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !184} ; [ DW_TAG_pointer_type ]
!215 = metadata !{i32 786478, i32 0, metadata !184, metadata !"sc_port_b", metadata !"sc_port_b", metadata !"", metadata !91, i32 273, metadata !216, i1 false, i1 false, i32 0, i32 0, null, i32 384, i1 false, null, null, i32 0, metadata !103, i32 273} ; [ DW_TAG_subprogram ]
!216 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !217, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!217 = metadata !{null, metadata !214, metadata !121}
!218 = metadata !{i32 786478, i32 0, metadata !184, metadata !"bind", metadata !"bind", metadata !"_ZN7_ap_sc_7sc_core9sc_port_bINS0_13sc_fifo_in_ifIiEEE4bindERS3_", metadata !91, i32 277, metadata !219, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 277} ; [ DW_TAG_subprogram ]
!219 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !220, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!220 = metadata !{null, metadata !214, metadata !221}
!221 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !188} ; [ DW_TAG_reference_type ]
!222 = metadata !{i32 786478, i32 0, metadata !184, metadata !"operator()", metadata !"operator()", metadata !"_ZN7_ap_sc_7sc_core9sc_port_bINS0_13sc_fifo_in_ifIiEEEclERS3_", metadata !91, i32 280, metadata !219, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 280} ; [ DW_TAG_subprogram ]
!223 = metadata !{i32 786478, i32 0, metadata !184, metadata !"bind", metadata !"bind", metadata !"_ZN7_ap_sc_7sc_core9sc_port_bINS0_13sc_fifo_in_ifIiEEE4bindERNS0_15sc_prim_channelE", metadata !91, i32 281, metadata !224, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 281} ; [ DW_TAG_subprogram ]
!224 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !225, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!225 = metadata !{null, metadata !214, metadata !155}
!226 = metadata !{i32 786478, i32 0, metadata !184, metadata !"operator()", metadata !"operator()", metadata !"_ZN7_ap_sc_7sc_core9sc_port_bINS0_13sc_fifo_in_ifIiEEEclERNS0_15sc_prim_channelE", metadata !91, i32 284, metadata !224, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 284} ; [ DW_TAG_subprogram ]
!227 = metadata !{i32 786478, i32 0, metadata !184, metadata !"bind", metadata !"bind", metadata !"_ZN7_ap_sc_7sc_core9sc_port_bINS0_13sc_fifo_in_ifIiEEE4bindERS4_", metadata !91, i32 285, metadata !228, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 285} ; [ DW_TAG_subprogram ]
!228 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !229, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!229 = metadata !{null, metadata !214, metadata !230}
!230 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !184} ; [ DW_TAG_reference_type ]
!231 = metadata !{i32 786478, i32 0, metadata !184, metadata !"operator()", metadata !"operator()", metadata !"_ZN7_ap_sc_7sc_core9sc_port_bINS0_13sc_fifo_in_ifIiEEEclERS4_", metadata !91, i32 286, metadata !228, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 286} ; [ DW_TAG_subprogram ]
!232 = metadata !{i32 786478, i32 0, metadata !184, metadata !"operator->", metadata !"operator->", metadata !"_ZN7_ap_sc_7sc_core9sc_port_bINS0_13sc_fifo_in_ifIiEEEptEv", metadata !91, i32 288, metadata !233, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 288} ; [ DW_TAG_subprogram ]
!233 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !234, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!234 = metadata !{metadata !235, metadata !214}
!235 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !188} ; [ DW_TAG_pointer_type ]
!236 = metadata !{metadata !237}
!237 = metadata !{i32 786479, null, metadata !"IF", metadata !188, null, i32 0, i32 0} ; [ DW_TAG_template_type_parameter ]
!238 = metadata !{i32 786478, i32 0, metadata !181, metadata !"sc_port", metadata !"sc_port", metadata !"", metadata !91, i32 303, metadata !239, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 303} ; [ DW_TAG_subprogram ]
!239 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !240, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!240 = metadata !{null, metadata !241}
!241 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !181} ; [ DW_TAG_pointer_type ]
!242 = metadata !{i32 786478, i32 0, metadata !181, metadata !"sc_port", metadata !"sc_port", metadata !"", metadata !91, i32 304, metadata !243, i1 false, i1 false, i32 0, i32 0, null, i32 384, i1 false, null, null, i32 0, metadata !103, i32 304} ; [ DW_TAG_subprogram ]
!243 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !244, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!244 = metadata !{null, metadata !241, metadata !121}
!245 = metadata !{metadata !237, metadata !178}
!246 = metadata !{i32 786478, i32 0, metadata !77, metadata !"initialization", metadata !"initialization", metadata !"_ZN8software14initializationEPA4_iPi", metadata !73, i32 13, metadata !247, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 13} ; [ DW_TAG_subprogram ]
!247 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !248, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!248 = metadata !{null, metadata !76, metadata !249, metadata !250}
!249 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !85} ; [ DW_TAG_pointer_type ]
!250 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !81} ; [ DW_TAG_pointer_type ]
!251 = metadata !{i32 786478, i32 0, metadata !77, metadata !"senddata", metadata !"senddata", metadata !"_ZN8software8senddataEv", metadata !73, i32 14, metadata !252, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 14} ; [ DW_TAG_subprogram ]
!252 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !253, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!253 = metadata !{null, metadata !76}
!254 = metadata !{i32 786478, i32 0, metadata !77, metadata !"software", metadata !"software", metadata !"", metadata !73, i32 15, metadata !74, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 15} ; [ DW_TAG_subprogram ]
!255 = metadata !{i32 786434, metadata !89, metadata !"sc_module_name", metadata !91, i32 581, i64 8, i64 8, i32 0, i32 0, null, metadata !256, i32 0, null, null} ; [ DW_TAG_class_type ]
!256 = metadata !{metadata !257, metadata !261}
!257 = metadata !{i32 786478, i32 0, metadata !255, metadata !"sc_module_name", metadata !"sc_module_name", metadata !"", metadata !91, i32 584, metadata !258, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 584} ; [ DW_TAG_subprogram ]
!258 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !259, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!259 = metadata !{null, metadata !260, metadata !121}
!260 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !255} ; [ DW_TAG_pointer_type ]
!261 = metadata !{i32 786478, i32 0, metadata !255, metadata !"sc_module_name", metadata !"sc_module_name", metadata !"", metadata !91, i32 585, metadata !262, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !103, i32 585} ; [ DW_TAG_subprogram ]
!262 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !263, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!263 = metadata !{null, metadata !260, metadata !264}
!264 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !265} ; [ DW_TAG_reference_type ]
!265 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !255} ; [ DW_TAG_const_type ]
!266 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !77} ; [ DW_TAG_pointer_type ]
!267 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !268} ; [ DW_TAG_pointer_type ]
!268 = metadata !{i32 786438, null, metadata !"software", metadata !73, i32 6, i64 512, i64 32, i32 0, i32 0, null, metadata !269, i32 0, null, null} ; [ DW_TAG_class_field_type ]
!269 = metadata !{metadata !79}
!270 = metadata !{i32 15, i32 3, metadata !72, null}
!271 = metadata !{i32 790531, metadata !71, metadata !"software.b", null, i32 15, metadata !272, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!272 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !273} ; [ DW_TAG_pointer_type ]
!273 = metadata !{i32 786438, null, metadata !"software", metadata !73, i32 6, i64 128, i64 32, i32 0, i32 0, null, metadata !274, i32 0, null, null} ; [ DW_TAG_class_field_type ]
!274 = metadata !{metadata !84}
!275 = metadata !{i32 790531, metadata !71, metadata !"software.matrixA.m_if.Val", null, i32 15, metadata !276, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!276 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !277} ; [ DW_TAG_pointer_type ]
!277 = metadata !{i32 786438, null, metadata !"software", metadata !73, i32 6, i64 32, i64 32, i32 0, i32 0, null, metadata !278, i32 0, null, null} ; [ DW_TAG_class_field_type ]
!278 = metadata !{metadata !279}
!279 = metadata !{i32 786438, metadata !89, metadata !"sc_port<_ap_sc_::sc_core::sc_fifo_out_if<int>, 1>", metadata !91, i32 297, i64 32, i64 32, i32 0, i32 0, null, metadata !280, i32 0, null, metadata !177} ; [ DW_TAG_class_field_type ]
!280 = metadata !{metadata !281}
!281 = metadata !{i32 786438, metadata !89, metadata !"sc_port_b<_ap_sc_::sc_core::sc_fifo_out_if<int> >", metadata !91, i32 268, i64 32, i64 32, i32 0, i32 0, null, metadata !282, i32 0, null, metadata !168} ; [ DW_TAG_class_field_type ]
!282 = metadata !{metadata !283}
!283 = metadata !{i32 786438, metadata !89, metadata !"sc_fifo_out_if<int>", metadata !91, i32 235, i64 32, i64 32, i32 0, i32 0, null, metadata !284, i32 0, null, metadata !138} ; [ DW_TAG_class_field_type ]
!284 = metadata !{metadata !115}
!285 = metadata !{i32 790531, metadata !71, metadata !"software.matrixb.m_if.Val", null, i32 15, metadata !276, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!286 = metadata !{i32 790531, metadata !71, metadata !"software.matrixx.m_if.Val", null, i32 15, metadata !287, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!287 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !288} ; [ DW_TAG_pointer_type ]
!288 = metadata !{i32 786438, null, metadata !"software", metadata !73, i32 6, i64 32, i64 32, i32 0, i32 0, null, metadata !289, i32 0, null, null} ; [ DW_TAG_class_field_type ]
!289 = metadata !{metadata !290}
!290 = metadata !{i32 786438, metadata !89, metadata !"sc_port<_ap_sc_::sc_core::sc_fifo_in_if<int>, 1>", metadata !91, i32 297, i64 32, i64 32, i32 0, i32 0, null, metadata !291, i32 0, null, metadata !245} ; [ DW_TAG_class_field_type ]
!291 = metadata !{metadata !292}
!292 = metadata !{i32 786438, metadata !89, metadata !"sc_port_b<_ap_sc_::sc_core::sc_fifo_in_if<int> >", metadata !91, i32 268, i64 32, i64 32, i32 0, i32 0, null, metadata !293, i32 0, null, metadata !236} ; [ DW_TAG_class_field_type ]
!293 = metadata !{metadata !294}
!294 = metadata !{i32 786438, metadata !89, metadata !"sc_fifo_in_if<int>", metadata !91, i32 212, i64 32, i64 32, i32 0, i32 0, null, metadata !295, i32 0, null, metadata !138} ; [ DW_TAG_class_field_type ]
!295 = metadata !{metadata !191}
!296 = metadata !{i32 790531, metadata !297, metadata !"sc_fifo_out_if<int>.Val", null, i32 239, metadata !299, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!297 = metadata !{i32 786689, metadata !298, metadata !"this", metadata !91, i32 16777455, metadata !167, i32 64, i32 0} ; [ DW_TAG_arg_variable ]
!298 = metadata !{i32 786478, i32 0, metadata !89, metadata !"sc_fifo_out_if", metadata !"sc_fifo_out_if", metadata !"_ZN7_ap_sc_7sc_core14sc_fifo_out_ifIiEC1EPKc", metadata !91, i32 239, metadata !118, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !117, metadata !103, i32 239} ; [ DW_TAG_subprogram ]
!299 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !283} ; [ DW_TAG_pointer_type ]
!300 = metadata !{i32 239, i32 47, metadata !298, metadata !301}
!301 = metadata !{i32 272, i32 68, metadata !302, metadata !303}
!302 = metadata !{i32 786478, i32 0, metadata !89, metadata !"sc_port_b", metadata !"sc_port_b", metadata !"_ZN7_ap_sc_7sc_core9sc_port_bINS0_14sc_fifo_out_ifIiEEEC2Ev", metadata !91, i32 272, metadata !141, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !140, metadata !103, i32 272} ; [ DW_TAG_subprogram ]
!303 = metadata !{i32 303, i32 71, metadata !304, metadata !305}
!304 = metadata !{i32 786478, i32 0, metadata !89, metadata !"sc_port", metadata !"sc_port", metadata !"_ZN7_ap_sc_7sc_core7sc_portINS0_14sc_fifo_out_ifIiEELi1EEC2Ev", metadata !91, i32 303, metadata !171, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !170, metadata !103, i32 303} ; [ DW_TAG_subprogram ]
!305 = metadata !{i32 303, i32 73, metadata !306, metadata !307}
!306 = metadata !{i32 786478, i32 0, metadata !89, metadata !"sc_port", metadata !"sc_port", metadata !"_ZN7_ap_sc_7sc_core7sc_portINS0_14sc_fifo_out_ifIiEELi1EEC1Ev", metadata !91, i32 303, metadata !171, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !170, metadata !103, i32 303} ; [ DW_TAG_subprogram ]
!307 = metadata !{i32 16, i32 2, metadata !72, null}
!308 = metadata !{i32 790531, metadata !309, metadata !"sc_fifo_out_if<int>.Val", null, i32 239, metadata !299, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!309 = metadata !{i32 786689, metadata !310, metadata !"this", metadata !91, i32 16777455, metadata !167, i32 64, i32 0} ; [ DW_TAG_arg_variable ]
!310 = metadata !{i32 786478, i32 0, metadata !89, metadata !"sc_fifo_out_if", metadata !"sc_fifo_out_if", metadata !"_ZN7_ap_sc_7sc_core14sc_fifo_out_ifIiEC2EPKc", metadata !91, i32 239, metadata !118, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !117, metadata !103, i32 239} ; [ DW_TAG_subprogram ]
!311 = metadata !{i32 239, i32 47, metadata !310, metadata !312}
!312 = metadata !{i32 242, i32 9, metadata !298, metadata !301}
!313 = metadata !{i32 240, i32 13, metadata !314, metadata !312}
!314 = metadata !{i32 786443, metadata !310, i32 239, i32 86, metadata !91, i32 20} ; [ DW_TAG_lexical_block ]
!315 = metadata !{i32 241, i32 13, metadata !314, metadata !312}
!316 = metadata !{i32 790531, metadata !317, metadata !"sc_fifo_in_if<int>.Val", null, i32 216, metadata !319, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!317 = metadata !{i32 786689, metadata !318, metadata !"this", metadata !91, i32 16777432, metadata !235, i32 64, i32 0} ; [ DW_TAG_arg_variable ]
!318 = metadata !{i32 786478, i32 0, metadata !89, metadata !"sc_fifo_in_if", metadata !"sc_fifo_in_if", metadata !"_ZN7_ap_sc_7sc_core13sc_fifo_in_ifIiEC1EPKc", metadata !91, i32 216, metadata !193, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !192, metadata !103, i32 216} ; [ DW_TAG_subprogram ]
!319 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !294} ; [ DW_TAG_pointer_type ]
!320 = metadata !{i32 216, i32 47, metadata !318, metadata !321}
!321 = metadata !{i32 272, i32 68, metadata !322, metadata !323}
!322 = metadata !{i32 786478, i32 0, metadata !89, metadata !"sc_port_b", metadata !"sc_port_b", metadata !"_ZN7_ap_sc_7sc_core9sc_port_bINS0_13sc_fifo_in_ifIiEEEC2Ev", metadata !91, i32 272, metadata !212, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !211, metadata !103, i32 272} ; [ DW_TAG_subprogram ]
!323 = metadata !{i32 303, i32 71, metadata !324, metadata !325}
!324 = metadata !{i32 786478, i32 0, metadata !89, metadata !"sc_port", metadata !"sc_port", metadata !"_ZN7_ap_sc_7sc_core7sc_portINS0_13sc_fifo_in_ifIiEELi1EEC2Ev", metadata !91, i32 303, metadata !239, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !238, metadata !103, i32 303} ; [ DW_TAG_subprogram ]
!325 = metadata !{i32 303, i32 73, metadata !326, metadata !307}
!326 = metadata !{i32 786478, i32 0, metadata !89, metadata !"sc_port", metadata !"sc_port", metadata !"_ZN7_ap_sc_7sc_core7sc_portINS0_13sc_fifo_in_ifIiEELi1EEC1Ev", metadata !91, i32 303, metadata !239, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !238, metadata !103, i32 303} ; [ DW_TAG_subprogram ]
!327 = metadata !{i32 790531, metadata !328, metadata !"sc_fifo_in_if<int>.Val", null, i32 216, metadata !319, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!328 = metadata !{i32 786689, metadata !329, metadata !"this", metadata !91, i32 16777432, metadata !235, i32 64, i32 0} ; [ DW_TAG_arg_variable ]
!329 = metadata !{i32 786478, i32 0, metadata !89, metadata !"sc_fifo_in_if", metadata !"sc_fifo_in_if", metadata !"_ZN7_ap_sc_7sc_core13sc_fifo_in_ifIiEC2EPKc", metadata !91, i32 216, metadata !193, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !192, metadata !103, i32 216} ; [ DW_TAG_subprogram ]
!330 = metadata !{i32 216, i32 47, metadata !329, metadata !331}
!331 = metadata !{i32 219, i32 9, metadata !318, metadata !321}
!332 = metadata !{i32 217, i32 12, metadata !333, metadata !331}
!333 = metadata !{i32 786443, metadata !329, i32 216, i32 85, metadata !91, i32 15} ; [ DW_TAG_lexical_block ]
!334 = metadata !{i32 218, i32 12, metadata !333, metadata !331}
!335 = metadata !{i32 17, i32 5, metadata !336, null}
!336 = metadata !{i32 786443, metadata !72, i32 16, i32 2, metadata !73, i32 12} ; [ DW_TAG_lexical_block ]
!337 = metadata !{i32 18, i32 5, metadata !336, null}
!338 = metadata !{i32 18, i32 35, metadata !336, null}
!339 = metadata !{i32 18, i32 47, metadata !336, null}
!340 = metadata !{i32 790531, metadata !341, metadata !"software.A", null, i32 3, metadata !267, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!341 = metadata !{i32 786689, metadata !342, metadata !"this", metadata !343, i32 16777219, metadata !266, i32 64, metadata !344} ; [ DW_TAG_arg_variable ]
!342 = metadata !{i32 786478, i32 0, null, metadata !"initialization", metadata !"initialization", metadata !"_ZN8software14initializationEPA4_iPi", metadata !343, i32 3, metadata !247, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !246, metadata !103, i32 3} ; [ DW_TAG_subprogram ]
!343 = metadata !{i32 786473, metadata !"systemcmatrixes/software.cpp", metadata !"C:\5CUsers\5CUSER1\5CAppData\5CRoaming\5CXilinx\5CVivado", null} ; [ DW_TAG_file_type ]
!344 = metadata !{i32 19, i32 3, metadata !336, null}
!345 = metadata !{i32 3, i32 16, metadata !342, metadata !344}
!346 = metadata !{i32 790531, metadata !341, metadata !"software.b", null, i32 3, metadata !272, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!347 = metadata !{i32 790531, metadata !341, metadata !"software.matrixA.m_if.Val", null, i32 3, metadata !276, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!348 = metadata !{i32 790531, metadata !341, metadata !"software.matrixb.m_if.Val", null, i32 3, metadata !276, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!349 = metadata !{i32 790531, metadata !341, metadata !"software.matrixx.m_if.Val", null, i32 3, metadata !287, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!350 = metadata !{i32 4, i32 14, metadata !351, metadata !344}
!351 = metadata !{i32 786443, metadata !352, i32 4, i32 2, metadata !343, i32 1} ; [ DW_TAG_lexical_block ]
!352 = metadata !{i32 786443, metadata !342, i32 3, i32 1, metadata !343, i32 0} ; [ DW_TAG_lexical_block ]
!353 = metadata !{i32 4, i32 19, metadata !351, metadata !344}
!354 = metadata !{i32 786688, metadata !351, metadata !"j", metadata !343, i32 4, metadata !81, i32 0, metadata !344} ; [ DW_TAG_auto_variable ]
!355 = metadata !{i32 5, i32 3, metadata !356, metadata !344}
!356 = metadata !{i32 786443, metadata !351, i32 4, i32 23, metadata !343, i32 2} ; [ DW_TAG_lexical_block ]
!357 = metadata !{i32 6, i32 14, metadata !358, metadata !344}
!358 = metadata !{i32 786443, metadata !356, i32 6, i32 3, metadata !343, i32 3} ; [ DW_TAG_lexical_block ]
!359 = metadata !{i32 7, i32 4, metadata !358, metadata !344}
!360 = metadata !{i32 786688, metadata !358, metadata !"k", metadata !343, i32 6, metadata !81, i32 0, metadata !344} ; [ DW_TAG_auto_variable ]
!361 = metadata !{i32 6, i32 19, metadata !358, metadata !344}
!362 = metadata !{i32 20, i32 1, metadata !336, null}
!363 = metadata !{i32 15, i32 5, metadata !364, null}
!364 = metadata !{i32 786443, metadata !365, i32 14, i32 4, metadata !343, i32 7} ; [ DW_TAG_lexical_block ]
!365 = metadata !{i32 786443, metadata !366, i32 11, i32 22, metadata !343, i32 6} ; [ DW_TAG_lexical_block ]
!366 = metadata !{i32 786443, metadata !367, i32 11, i32 1, metadata !343, i32 5} ; [ DW_TAG_lexical_block ]
!367 = metadata !{i32 786443, metadata !368, i32 11, i32 1, metadata !343, i32 4} ; [ DW_TAG_lexical_block ]
!368 = metadata !{i32 786478, i32 0, null, metadata !"senddata", metadata !"senddata", metadata !"_ZN8software8senddataEv", metadata !343, i32 10, metadata !252, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !251, metadata !103, i32 11} ; [ DW_TAG_subprogram ]
!369 = metadata !{i32 790531, metadata !370, metadata !"software.A", null, i32 10, metadata !267, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!370 = metadata !{i32 786689, metadata !368, metadata !"this", metadata !343, i32 16777226, metadata !266, i32 64, i32 0} ; [ DW_TAG_arg_variable ]
!371 = metadata !{i32 10, i32 16, metadata !368, null}
!372 = metadata !{i32 790531, metadata !370, metadata !"software.b", null, i32 10, metadata !272, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!373 = metadata !{i32 790531, metadata !370, metadata !"software.matrixA.m_if.Val", null, i32 10, metadata !276, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!374 = metadata !{i32 790531, metadata !370, metadata !"software.matrixb.m_if.Val", null, i32 10, metadata !276, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!375 = metadata !{i32 790531, metadata !370, metadata !"software.matrixx.m_if.Val", null, i32 10, metadata !287, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!376 = metadata !{i32 11, i32 4, metadata !367, null}
!377 = metadata !{i32 11, i32 155, metadata !367, null}
!378 = metadata !{i32 11, i32 228, metadata !367, null}
!379 = metadata !{i32 808, i32 19, metadata !380, metadata !385}
!380 = metadata !{i32 786443, metadata !381, i32 808, i32 17, metadata !91, i32 22} ; [ DW_TAG_lexical_block ]
!381 = metadata !{i32 786443, metadata !382, i32 807, i32 58, metadata !91, i32 21} ; [ DW_TAG_lexical_block ]
!382 = metadata !{i32 786478, i32 0, metadata !89, metadata !"wait", metadata !"wait", metadata !"_ZN7_ap_sc_7sc_core4waitEi", metadata !91, i32 807, metadata !383, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !103, i32 807} ; [ DW_TAG_subprogram ]
!383 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !384, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!384 = metadata !{null, metadata !81}
!385 = metadata !{i32 12, i32 4, metadata !365, null}
!386 = metadata !{i32 13, i32 4, metadata !365, null}
!387 = metadata !{i32 786689, metadata !388, metadata !"P", metadata !91, i32 16777356, metadata !391, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!388 = metadata !{i32 786478, i32 0, metadata !91, metadata !"_ssdm_op_WRITE<int>", metadata !"_ssdm_op_WRITE<int>", metadata !"_Z14_ssdm_op_WRITEIiEvRViRKT_", metadata !91, i32 140, metadata !389, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, metadata !392, null, metadata !103, i32 179} ; [ DW_TAG_subprogram ]
!389 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !390, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!390 = metadata !{null, metadata !391, metadata !127}
!391 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !116} ; [ DW_TAG_reference_type ]
!392 = metadata !{metadata !393}
!393 = metadata !{i32 786479, null, metadata !"T2", metadata !81, null, i32 0, i32 0} ; [ DW_TAG_template_type_parameter ]
!394 = metadata !{i32 140, i32 95, metadata !388, metadata !395}
!395 = metadata !{i32 244, i32 73, metadata !396, metadata !386}
!396 = metadata !{i32 786443, metadata !397, i32 244, i32 71, metadata !91, i32 8} ; [ DW_TAG_lexical_block ]
!397 = metadata !{i32 786478, i32 0, metadata !89, metadata !"write", metadata !"write", metadata !"_ZN7_ap_sc_7sc_core14sc_fifo_out_ifIiE5writeERKi", metadata !91, i32 244, metadata !125, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !124, metadata !103, i32 244} ; [ DW_TAG_subprogram ]
!398 = metadata !{i32 179, i32 115, metadata !399, metadata !395}
!399 = metadata !{i32 786443, metadata !388, i32 179, i32 113, metadata !400, i32 9} ; [ DW_TAG_lexical_block ]
!400 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado/2018.1/common/technology/autopilot/ap_sysc/ap_sc_extras.h", metadata !"C:\5CUsers\5CUSER1\5CAppData\5CRoaming\5CXilinx\5CVivado", null} ; [ DW_TAG_file_type ]
!401 = metadata !{i32 140, i32 95, metadata !388, metadata !402}
!402 = metadata !{i32 244, i32 73, metadata !396, metadata !363}
!403 = metadata !{i32 179, i32 115, metadata !399, metadata !402}
!404 = metadata !{i32 16, i32 4, metadata !367, null}
!405 = metadata !{i32 16, i32 43, metadata !367, null}
