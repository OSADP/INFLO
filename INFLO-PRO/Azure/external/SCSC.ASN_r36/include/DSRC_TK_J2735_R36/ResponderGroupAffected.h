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
 * From ASN.1 module "ITIS"
 * 	found in "DSRC_R36_Source.ASN"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_ResponderGroupAffected_H_
#define	_ResponderGroupAffected_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ResponderGroupAffected {
	ResponderGroupAffected_emergency_vehicle_units	= 9729,
	ResponderGroupAffected_federal_law_enforcement_units	= 9730,
	ResponderGroupAffected_state_police_units	= 9731,
	ResponderGroupAffected_county_police_units	= 9732,
	ResponderGroupAffected_local_police_units	= 9733,
	ResponderGroupAffected_ambulance_units	= 9734,
	ResponderGroupAffected_rescue_units	= 9735,
	ResponderGroupAffected_fire_units	= 9736,
	ResponderGroupAffected_hAZMAT_units	= 9737,
	ResponderGroupAffected_light_tow_unit	= 9738,
	ResponderGroupAffected_heavy_tow_unit	= 9739,
	ResponderGroupAffected_freeway_service_patrols	= 9740,
	ResponderGroupAffected_transportation_response_units	= 9741,
	ResponderGroupAffected_private_contractor_response_units	= 9742
	/*
	 * Enumeration is extensible
	 */
} e_ResponderGroupAffected;

/* ResponderGroupAffected */
typedef long	 ResponderGroupAffected_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ResponderGroupAffected;
asn_struct_free_f ResponderGroupAffected_free;
asn_struct_print_f ResponderGroupAffected_print;
asn_constr_check_f ResponderGroupAffected_constraint;
ber_type_decoder_f ResponderGroupAffected_decode_ber;
der_type_encoder_f ResponderGroupAffected_encode_der;
xer_type_decoder_f ResponderGroupAffected_decode_xer;
xer_type_encoder_f ResponderGroupAffected_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _ResponderGroupAffected_H_ */
