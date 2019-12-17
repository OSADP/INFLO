/*************************************************************************
 * 
 * SCSC CONFIDENTIAL
 * __________________
 * 
 * Copyright (c) [2009] - [2012] 
 * SubCarrier System Corp. (SCSC) 
 * All Rights Reserved.
 * 
 * NOTICE:  All information contained herein is, and remains,
 * the property of SubCarrier System Corp. (SCSC) and its suppliers,
 * if any.  The intellectual and technical concepts contained
 * herein are proprietary to SubCarrier System Corp. (SCSC)
 * and its suppliers and may be covered by U.S. and Foreign Patents,
 * patents in process, and are protected by trade secret or copyright law.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from SubCarrier System Corp. (SCSC).
 *
 *
 * This file is subject to the terms and conditions of use defined 
 * in the files 'LICENSE.rft' or 'LICENSE.pdf' which is part of this 
 * source code package.
 *
 * LIC: #Battelle_001_01_dbfff42a90727d02153511a33480572b#
 */

/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c) [SCSCrev09]
 * From ASN.1 module "DSRC"
 * 	found in "DSRC_R36_Source.ASN"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_RTCMPackage_H_
#define	_RTCMPackage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RTCMHeader.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FullPositionVector;

/* RTCMPackage */
typedef struct RTCMPackage {
	struct FullPositionVector	*anchorPoint	/* OPTIONAL */;
	RTCMHeader_t	 rtcmHeader;
	OCTET_STRING_t	*msg1001	/* OPTIONAL */;
	OCTET_STRING_t	*msg1002	/* OPTIONAL */;
	OCTET_STRING_t	*msg1003	/* OPTIONAL */;
	OCTET_STRING_t	*msg1004	/* OPTIONAL */;
	OCTET_STRING_t	*msg1005	/* OPTIONAL */;
	OCTET_STRING_t	*msg1006	/* OPTIONAL */;
	OCTET_STRING_t	*msg1007	/* OPTIONAL */;
	OCTET_STRING_t	*msg1008	/* OPTIONAL */;
	OCTET_STRING_t	*msg1009	/* OPTIONAL */;
	OCTET_STRING_t	*msg1010	/* OPTIONAL */;
	OCTET_STRING_t	*msg1011	/* OPTIONAL */;
	OCTET_STRING_t	*msg1012	/* OPTIONAL */;
	OCTET_STRING_t	*msg1013	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*msg1014	/* OPTIONAL */;
	OCTET_STRING_t	*msg1015	/* OPTIONAL */;
	OCTET_STRING_t	*msg1016	/* OPTIONAL */;
	OCTET_STRING_t	*msg1017	/* OPTIONAL */;
	OCTET_STRING_t	*msg1019	/* OPTIONAL */;
	OCTET_STRING_t	*msg1020	/* OPTIONAL */;
	OCTET_STRING_t	*msg1021	/* OPTIONAL */;
	OCTET_STRING_t	*msg1022	/* OPTIONAL */;
	OCTET_STRING_t	*msg1023	/* OPTIONAL */;
	OCTET_STRING_t	*msg1024	/* OPTIONAL */;
	OCTET_STRING_t	*msg1025	/* OPTIONAL */;
	OCTET_STRING_t	*msg1026	/* OPTIONAL */;
	OCTET_STRING_t	*msg1027	/* OPTIONAL */;
	OCTET_STRING_t	*msg1029	/* OPTIONAL */;
	OCTET_STRING_t	*msg1030	/* OPTIONAL */;
	OCTET_STRING_t	*msg1031	/* OPTIONAL */;
	OCTET_STRING_t	*msg1032	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RTCMPackage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RTCMPackage;

/* Define supported Utility Calls */
void RTCMPackage_Init (RTCMPackage_t* theObj);
//void RTCMPackage_ToBlob (RTCMPackage_t* theObj, char* theBlob);
//void RTCMPackage_FromBlob (RTCMPackage_t* theObj, char* theBlob);


#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FullPositionVector.h"

#endif	/* _RTCMPackage_H_ */
