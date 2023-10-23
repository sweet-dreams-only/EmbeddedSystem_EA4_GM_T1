/* MISRA RULE 19.15 VIOLATION: The file MemMap.h is intentionally included multiple times. */
/* This is the way to use this file according to AUTOSAR */
/* PRQA S 0883 EOF */
/*file: C:/Hari/Work/SynergyProjects/T1xx_Synergy/BuildPrep/07.01.05_Work/Z_Work_1_8917_ShortTerm/GM_T1XX_EPS_RH850/generate/Os_MemMap.h*/
/*automatically generated by genRH850.exe, Version: 1.06*/
/*Configuration file: C:/Users/nz2654/AppData/Local/Temp/DaVinci/Cfg-1345187/Generation/Cfg_Gen-1484071352018-0/OsProxyFiles-1484072167553-0/Os_ActiveEcuC.arxml*/
/*Generation time: Tue Jan 10 13:16:13 2017*/
/*Unlimited license CBD1400351 for Nxtr Automotive, Project License, EPS*/
/*Implementation: RH850_P1M*/
/*Version of general code: 9.01.06*/
#ifdef Appl10_START_SEC_VAR_NOINIT_BOOLEAN
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osAppl_Appl10_bss"
   #pragma ghs section sbss=".osAppl_Appl10_sbss"
#undef Appl10_START_SEC_VAR_NOINIT_BOOLEAN
#endif

#ifdef Appl10_STOP_SEC_VAR_NOINIT_BOOLEAN
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef Appl10_STOP_SEC_VAR_NOINIT_BOOLEAN
#endif

#ifdef Appl10_START_SEC_VAR_BOOLEAN
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osAppl_Appl10_data"
   #pragma ghs section sdata=".osAppl_Appl10_sdata"
#undef Appl10_START_SEC_VAR_BOOLEAN
#endif

#ifdef Appl10_STOP_SEC_VAR_BOOLEAN
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef Appl10_STOP_SEC_VAR_BOOLEAN
#endif

#ifdef Appl10_START_SEC_VAR_NOINIT_8BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osAppl_Appl10_bss"
   #pragma ghs section sbss=".osAppl_Appl10_sbss"
#undef Appl10_START_SEC_VAR_NOINIT_8BIT
#endif

#ifdef Appl10_STOP_SEC_VAR_NOINIT_8BIT
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef Appl10_STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef Appl10_START_SEC_VAR_8BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osAppl_Appl10_data"
   #pragma ghs section sdata=".osAppl_Appl10_sdata"
#undef Appl10_START_SEC_VAR_8BIT
#endif

#ifdef Appl10_STOP_SEC_VAR_8BIT
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef Appl10_STOP_SEC_VAR_8BIT
#endif

#ifdef Appl10_START_SEC_VAR_NOINIT_16BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osAppl_Appl10_bss"
   #pragma ghs section sbss=".osAppl_Appl10_sbss"
#undef Appl10_START_SEC_VAR_NOINIT_16BIT
#endif

#ifdef Appl10_STOP_SEC_VAR_NOINIT_16BIT
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef Appl10_STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef Appl10_START_SEC_VAR_16BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osAppl_Appl10_data"
   #pragma ghs section sdata=".osAppl_Appl10_sdata"
#undef Appl10_START_SEC_VAR_16BIT
#endif

#ifdef Appl10_STOP_SEC_VAR_16BIT
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef Appl10_STOP_SEC_VAR_16BIT
#endif

#ifdef Appl10_START_SEC_VAR_NOINIT_32BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osAppl_Appl10_bss"
   #pragma ghs section sbss=".osAppl_Appl10_sbss"
#undef Appl10_START_SEC_VAR_NOINIT_32BIT
#endif

#ifdef Appl10_STOP_SEC_VAR_NOINIT_32BIT
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef Appl10_STOP_SEC_VAR_NOINIT_32BIT
#endif

#ifdef Appl10_START_SEC_VAR_32BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osAppl_Appl10_data"
   #pragma ghs section sdata=".osAppl_Appl10_sdata"
#undef Appl10_START_SEC_VAR_32BIT
#endif

#ifdef Appl10_STOP_SEC_VAR_32BIT
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef Appl10_STOP_SEC_VAR_32BIT
#endif

#ifdef Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osAppl_Appl10_bss"
   #pragma ghs section sbss=".osAppl_Appl10_sbss"
#undef Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef Appl10_START_SEC_VAR_UNSPECIFIED
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osAppl_Appl10_data"
   #pragma ghs section sdata=".osAppl_Appl10_sdata"
#undef Appl10_START_SEC_VAR_UNSPECIFIED
#endif

#ifdef Appl10_STOP_SEC_VAR_UNSPECIFIED
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef Appl10_STOP_SEC_VAR_UNSPECIFIED
#endif

#ifdef Appl6_START_SEC_VAR_NOINIT_BOOLEAN
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osAppl_Appl6_bss"
   #pragma ghs section sbss=".osAppl_Appl6_sbss"
#undef Appl6_START_SEC_VAR_NOINIT_BOOLEAN
#endif

#ifdef Appl6_STOP_SEC_VAR_NOINIT_BOOLEAN
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef Appl6_STOP_SEC_VAR_NOINIT_BOOLEAN
#endif

#ifdef Appl6_START_SEC_VAR_BOOLEAN
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osAppl_Appl6_data"
   #pragma ghs section sdata=".osAppl_Appl6_sdata"
#undef Appl6_START_SEC_VAR_BOOLEAN
#endif

#ifdef Appl6_STOP_SEC_VAR_BOOLEAN
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef Appl6_STOP_SEC_VAR_BOOLEAN
#endif

#ifdef Appl6_START_SEC_VAR_NOINIT_8BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osAppl_Appl6_bss"
   #pragma ghs section sbss=".osAppl_Appl6_sbss"
#undef Appl6_START_SEC_VAR_NOINIT_8BIT
#endif

#ifdef Appl6_STOP_SEC_VAR_NOINIT_8BIT
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef Appl6_STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef Appl6_START_SEC_VAR_8BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osAppl_Appl6_data"
   #pragma ghs section sdata=".osAppl_Appl6_sdata"
#undef Appl6_START_SEC_VAR_8BIT
#endif

#ifdef Appl6_STOP_SEC_VAR_8BIT
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef Appl6_STOP_SEC_VAR_8BIT
#endif

#ifdef Appl6_START_SEC_VAR_NOINIT_16BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osAppl_Appl6_bss"
   #pragma ghs section sbss=".osAppl_Appl6_sbss"
#undef Appl6_START_SEC_VAR_NOINIT_16BIT
#endif

#ifdef Appl6_STOP_SEC_VAR_NOINIT_16BIT
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef Appl6_STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef Appl6_START_SEC_VAR_16BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osAppl_Appl6_data"
   #pragma ghs section sdata=".osAppl_Appl6_sdata"
#undef Appl6_START_SEC_VAR_16BIT
#endif

#ifdef Appl6_STOP_SEC_VAR_16BIT
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef Appl6_STOP_SEC_VAR_16BIT
#endif

#ifdef Appl6_START_SEC_VAR_NOINIT_32BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osAppl_Appl6_bss"
   #pragma ghs section sbss=".osAppl_Appl6_sbss"
#undef Appl6_START_SEC_VAR_NOINIT_32BIT
#endif

#ifdef Appl6_STOP_SEC_VAR_NOINIT_32BIT
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef Appl6_STOP_SEC_VAR_NOINIT_32BIT
#endif

#ifdef Appl6_START_SEC_VAR_32BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osAppl_Appl6_data"
   #pragma ghs section sdata=".osAppl_Appl6_sdata"
#undef Appl6_START_SEC_VAR_32BIT
#endif

#ifdef Appl6_STOP_SEC_VAR_32BIT
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef Appl6_STOP_SEC_VAR_32BIT
#endif

#ifdef Appl6_START_SEC_VAR_NOINIT_UNSPECIFIED
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osAppl_Appl6_bss"
   #pragma ghs section sbss=".osAppl_Appl6_sbss"
#undef Appl6_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef Appl6_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef Appl6_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef Appl6_START_SEC_VAR_UNSPECIFIED
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osAppl_Appl6_data"
   #pragma ghs section sdata=".osAppl_Appl6_sdata"
#undef Appl6_START_SEC_VAR_UNSPECIFIED
#endif

#ifdef Appl6_STOP_SEC_VAR_UNSPECIFIED
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef Appl6_STOP_SEC_VAR_UNSPECIFIED
#endif

#ifdef Appl0_START_SEC_VAR_NOINIT_BOOLEAN
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osAppl_Appl0_bss"
   #pragma ghs section sbss=".osAppl_Appl0_sbss"
#undef Appl0_START_SEC_VAR_NOINIT_BOOLEAN
#endif

#ifdef Appl0_STOP_SEC_VAR_NOINIT_BOOLEAN
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef Appl0_STOP_SEC_VAR_NOINIT_BOOLEAN
#endif

#ifdef Appl0_START_SEC_VAR_BOOLEAN
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osAppl_Appl0_data"
   #pragma ghs section sdata=".osAppl_Appl0_sdata"
#undef Appl0_START_SEC_VAR_BOOLEAN
#endif

#ifdef Appl0_STOP_SEC_VAR_BOOLEAN
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef Appl0_STOP_SEC_VAR_BOOLEAN
#endif

#ifdef Appl0_START_SEC_VAR_NOINIT_8BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osAppl_Appl0_bss"
   #pragma ghs section sbss=".osAppl_Appl0_sbss"
#undef Appl0_START_SEC_VAR_NOINIT_8BIT
#endif

#ifdef Appl0_STOP_SEC_VAR_NOINIT_8BIT
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef Appl0_STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef Appl0_START_SEC_VAR_8BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osAppl_Appl0_data"
   #pragma ghs section sdata=".osAppl_Appl0_sdata"
#undef Appl0_START_SEC_VAR_8BIT
#endif

#ifdef Appl0_STOP_SEC_VAR_8BIT
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef Appl0_STOP_SEC_VAR_8BIT
#endif

#ifdef Appl0_START_SEC_VAR_NOINIT_16BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osAppl_Appl0_bss"
   #pragma ghs section sbss=".osAppl_Appl0_sbss"
#undef Appl0_START_SEC_VAR_NOINIT_16BIT
#endif

#ifdef Appl0_STOP_SEC_VAR_NOINIT_16BIT
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef Appl0_STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef Appl0_START_SEC_VAR_16BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osAppl_Appl0_data"
   #pragma ghs section sdata=".osAppl_Appl0_sdata"
#undef Appl0_START_SEC_VAR_16BIT
#endif

#ifdef Appl0_STOP_SEC_VAR_16BIT
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef Appl0_STOP_SEC_VAR_16BIT
#endif

#ifdef Appl0_START_SEC_VAR_NOINIT_32BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osAppl_Appl0_bss"
   #pragma ghs section sbss=".osAppl_Appl0_sbss"
#undef Appl0_START_SEC_VAR_NOINIT_32BIT
#endif

#ifdef Appl0_STOP_SEC_VAR_NOINIT_32BIT
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef Appl0_STOP_SEC_VAR_NOINIT_32BIT
#endif

#ifdef Appl0_START_SEC_VAR_32BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osAppl_Appl0_data"
   #pragma ghs section sdata=".osAppl_Appl0_sdata"
#undef Appl0_START_SEC_VAR_32BIT
#endif

#ifdef Appl0_STOP_SEC_VAR_32BIT
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef Appl0_STOP_SEC_VAR_32BIT
#endif

#ifdef Appl0_START_SEC_VAR_NOINIT_UNSPECIFIED
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osAppl_Appl0_bss"
   #pragma ghs section sbss=".osAppl_Appl0_sbss"
#undef Appl0_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef Appl0_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef Appl0_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef Appl0_START_SEC_VAR_UNSPECIFIED
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osAppl_Appl0_data"
   #pragma ghs section sdata=".osAppl_Appl0_sdata"
#undef Appl0_START_SEC_VAR_UNSPECIFIED
#endif

#ifdef Appl0_STOP_SEC_VAR_UNSPECIFIED
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef Appl0_STOP_SEC_VAR_UNSPECIFIED
#endif

/*---------------------------------------------*/
/* MACROS FOR THE GLOBAL SHARED MEMORY SECTION */
/*---------------------------------------------*/

#ifdef GlobalShared_START_SEC_VAR_NOINIT_BOOLEAN
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osGlobalShared_bss"
   #pragma ghs section sbss=".osGlobalShared_sbss"
#undef GlobalShared_START_SEC_VAR_NOINIT_BOOLEAN
#endif

#ifdef GlobalShared_STOP_SEC_VAR_NOINIT_BOOLEAN
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef GlobalShared_STOP_SEC_VAR_NOINIT_BOOLEAN
#endif

#ifdef GlobalShared_START_SEC_VAR_BOOLEAN
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osGlobalShared_data"
   #pragma ghs section sdata=".osGlobalShared_sdata"
#undef GlobalShared_START_SEC_VAR_BOOLEAN
#endif

#ifdef GlobalShared_STOP_SEC_VAR_BOOLEAN
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef GlobalShared_STOP_SEC_VAR_BOOLEAN
#endif

#ifdef GlobalShared_START_SEC_VAR_NOINIT_8BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osGlobalShared_bss"
   #pragma ghs section sbss=".osGlobalShared_sbss"
#undef GlobalShared_START_SEC_VAR_NOINIT_8BIT
#endif

#ifdef GlobalShared_STOP_SEC_VAR_NOINIT_8BIT
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef GlobalShared_STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef GlobalShared_START_SEC_VAR_8BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osGlobalShared_data"
   #pragma ghs section sdata=".osGlobalShared_sdata"
#undef GlobalShared_START_SEC_VAR_8BIT
#endif

#ifdef GlobalShared_STOP_SEC_VAR_8BIT
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef GlobalShared_STOP_SEC_VAR_8BIT
#endif

#ifdef GlobalShared_START_SEC_VAR_NOINIT_16BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osGlobalShared_bss"
   #pragma ghs section sbss=".osGlobalShared_sbss"
#undef GlobalShared_START_SEC_VAR_NOINIT_16BIT
#endif

#ifdef GlobalShared_STOP_SEC_VAR_NOINIT_16BIT
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef GlobalShared_STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef GlobalShared_START_SEC_VAR_16BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osGlobalShared_data"
   #pragma ghs section sdata=".osGlobalShared_sdata"
#undef GlobalShared_START_SEC_VAR_16BIT
#endif

#ifdef GlobalShared_STOP_SEC_VAR_16BIT
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef GlobalShared_STOP_SEC_VAR_16BIT
#endif

#ifdef GlobalShared_START_SEC_VAR_NOINIT_32BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osGlobalShared_bss"
   #pragma ghs section sbss=".osGlobalShared_sbss"
#undef GlobalShared_START_SEC_VAR_NOINIT_32BIT
#endif

#ifdef GlobalShared_STOP_SEC_VAR_NOINIT_32BIT
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef GlobalShared_STOP_SEC_VAR_NOINIT_32BIT
#endif

#ifdef GlobalShared_START_SEC_VAR_32BIT
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osGlobalShared_data"
   #pragma ghs section sdata=".osGlobalShared_sdata"
#undef GlobalShared_START_SEC_VAR_32BIT
#endif

#ifdef GlobalShared_STOP_SEC_VAR_32BIT
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef GlobalShared_STOP_SEC_VAR_32BIT
#endif

#ifdef GlobalShared_START_SEC_VAR_NOINIT_UNSPECIFIED
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section bss=".osGlobalShared_bss"
   #pragma ghs section sbss=".osGlobalShared_sbss"
#undef GlobalShared_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef GlobalShared_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#undef MEMMAP_ERROR
   #pragma ghs section bss=default
   #pragma ghs section sbss=default
#undef OS_VAR_SECTION_OPEN
#undef GlobalShared_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef GlobalShared_START_SEC_VAR_UNSPECIFIED
#undef MEMMAP_ERROR
#ifdef OS_VAR_SECTION_OPEN
#error "wrong sequence of START and STOP memmap macros. A STOP macro is expected" 
#endif
   #pragma ghs section data=".osGlobalShared_data"
   #pragma ghs section sdata=".osGlobalShared_sdata"
#undef GlobalShared_START_SEC_VAR_UNSPECIFIED
#endif

#ifdef GlobalShared_STOP_SEC_VAR_UNSPECIFIED
#undef MEMMAP_ERROR
   #pragma ghs section data=default
   #pragma ghs section sdata=default
#undef OS_VAR_SECTION_OPEN
#undef GlobalShared_STOP_SEC_VAR_UNSPECIFIED
#endif
