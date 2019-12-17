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

#ifndef	_DirectionOfUse_H_
#define	_DirectionOfUse_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DirectionOfUse {
	DirectionOfUse_forward	= 0,
	DirectionOfUse_reverse	= 1,
	DirectionOfUse_both	= 2
	/*
	 * Enumeration is extensible
	 */
} e_DirectionOfUse;

/* DirectionOfUse */
typedef long	 DirectionOfUse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DirectionOfUse;
asn_struct_free_f DirectionOfUse_free;
asn_struct_print_f DirectionOfUse_print;
asn_constr_check_f DirectionOfUse_constraint;
ber_type_decoder_f DirectionOfUse_decode_ber;
der_type_encoder_f DirectionOfUse_encode_der;
xer_type_decoder_f DirectionOfUse_decode_xer;
xer_type_encoder_f DirectionOfUse_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _DirectionOfUse_H_ */
