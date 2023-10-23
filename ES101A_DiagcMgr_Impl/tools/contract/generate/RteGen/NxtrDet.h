/*
 * NxtrDet.h - Stub Header File for DiagcMgr Contract folder
 *
 *  Created on: Feb 22, 2016
 *      Author: gzkys7
 */

#ifndef NXTRDET_H
#define NXTRDET_H

#define DET_ENABLED

#define NXTRDET_DIAGCMGRMODID_CNT_U16    (65533U)
#ifdef DET_ENABLED
    #define NXTRDET_DIAGCMGR             STD_ON
#else
    #define NXTRDET_DIAGCMGR     		 STD_OFF
#endif

/* From Det.h */
FUNC(Std_ReturnType, DET_CODE) Det_ReportError( uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId ); 

#endif /* NXTRDET_H */
