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

#include "stdafx.h"
#include <asn_internal.h> 

#include "SteeringWheelAngle.h"

int
SteeringWheelAngle_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static void
SteeringWheelAngle_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_OCTET_STRING.free_struct;
	td->print_struct   = asn_DEF_OCTET_STRING.print_struct;
	td->ber_decoder    = asn_DEF_OCTET_STRING.ber_decoder;
	td->der_encoder    = asn_DEF_OCTET_STRING.der_encoder;
	td->xer_decoder    = asn_DEF_OCTET_STRING.xer_decoder;
	td->xer_encoder    = asn_DEF_OCTET_STRING.xer_encoder;
	td->uper_decoder   = asn_DEF_OCTET_STRING.uper_decoder;
	td->uper_encoder   = asn_DEF_OCTET_STRING.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_OCTET_STRING.per_constraints;
	td->elements       = asn_DEF_OCTET_STRING.elements;
	td->elements_count = asn_DEF_OCTET_STRING.elements_count;
	td->specifics      = asn_DEF_OCTET_STRING.specifics;
}

void
SteeringWheelAngle_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	SteeringWheelAngle_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
SteeringWheelAngle_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	SteeringWheelAngle_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
SteeringWheelAngle_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	SteeringWheelAngle_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
SteeringWheelAngle_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SteeringWheelAngle_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
SteeringWheelAngle_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	SteeringWheelAngle_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
SteeringWheelAngle_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SteeringWheelAngle_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static ber_tlv_tag_t asn_DEF_SteeringWheelAngle_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SteeringWheelAngle = {
	"SteeringWheelAngle",
	"SteeringWheelAngle",
	SteeringWheelAngle_free,
	SteeringWheelAngle_print,
	SteeringWheelAngle_constraint,
	SteeringWheelAngle_decode_ber,
	SteeringWheelAngle_encode_der,
	SteeringWheelAngle_decode_xer,
	SteeringWheelAngle_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SteeringWheelAngle_tags_1,
	sizeof(asn_DEF_SteeringWheelAngle_tags_1)
		/sizeof(asn_DEF_SteeringWheelAngle_tags_1[0]), /* 1 */
	asn_DEF_SteeringWheelAngle_tags_1,	/* Same as above */
	sizeof(asn_DEF_SteeringWheelAngle_tags_1)
		/sizeof(asn_DEF_SteeringWheelAngle_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	0	/* No specifics */
};

/* Utility Calls */
/* Utility Calls */


// Set all basic structure pointers to 'safe' null values
void SteeringWheelAngle_Init ( SteeringWheelAngle_t* theObj)
{
	if (theObj != NULL)
	{
		// Allocate memory needed on heap
		int bufSize = SteeringWheelAngle_BuffSize;  
		theObj->buf = (uint8_t *) malloc(bufSize);
		assert(theObj->buf);
		theObj->size = bufSize;
		// As per clause 7.115 Data Element: DE_SteeringWheelAngle 
		theObj->buf[0] = 0x7F; // unavailable value
		theObj->_asn_ctx.ptr = NULL; // not used
	}
}

// Not used in this object
// Move the structure into the packed bytes of the blob
void SteeringWheelAngle_ToBlob ( SteeringWheelAngle_t* theObj, char* theBlob)
{
	if ((theObj != NULL) && (theBlob != NULL))
	{
	}
}

// Not used in this object
// Fill the structure from the packed bytes of the blob
void SteeringWheelAngle_FromBlob ( SteeringWheelAngle_t* theObj, char* theBlob)
{
	if ((theObj != NULL) && (theBlob != NULL))
	{
	}
}

