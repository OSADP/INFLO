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

/*-
 * Copyright (c) 2003 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * Redistribution and modifications are permitted subject to BSD license.
 */
#include "stdafx.h"
#include <asn_internal.h> 
#include <IA5String.h>

/*
 * IA5String basic type description.
 */
static ber_tlv_tag_t asn_DEF_IA5String_tags[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (22 << 2)),	/* [UNIVERSAL 22] IMPLICIT ...*/
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))	/* ... OCTET STRING */
};
static asn_per_constraints_t asn_DEF_IA5String_constraints = {
	//{ APC_CONSTRAINED, 7, 7, 0, 0x7f },	/* Value */
	//{ APC_SEMI_CONSTRAINED, -1, -1, 0, 0 },	/* Size */
	// DCK mod, above two lines replace with below two and full casts
	{ APC_CONSTRAINED, 7, 7, 0, 0x7f },	/* Value */
	{ APC_SEMI_CONSTRAINED, -1, -1, 0, 0 },	/* Size */

	0, 0
};
asn_TYPE_descriptor_t asn_DEF_IA5String = {
	"IA5String",
	"IA5String",
	OCTET_STRING_free,
	OCTET_STRING_print_utf8,	/* ASCII subset */
	IA5String_constraint,       /* Constraint on the alphabet */
	OCTET_STRING_decode_ber,    /* Implemented in terms of OCTET STRING */
	OCTET_STRING_encode_der,
	OCTET_STRING_decode_xer_utf8,
	OCTET_STRING_encode_xer_utf8,
	OCTET_STRING_decode_uper,
	OCTET_STRING_encode_uper,
	0, /* Use generic outmost tag fetcher */
	asn_DEF_IA5String_tags,
	sizeof(asn_DEF_IA5String_tags)
	  / sizeof(asn_DEF_IA5String_tags[0]) - 1,
	asn_DEF_IA5String_tags,
	sizeof(asn_DEF_IA5String_tags)
	  / sizeof(asn_DEF_IA5String_tags[0]),
	&asn_DEF_IA5String_constraints,
	0, 0,	/* No members */
	0	/* No specifics */
};

int
IA5String_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
		asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const IA5String_t *st = (const IA5String_t *)sptr;

	if(st && st->buf) {
		uint8_t *buf = st->buf;
		uint8_t *end = buf + st->size;
		/*
		 * IA5String is generally equivalent to 7bit ASCII.
		 * ISO/ITU-T T.50, 1963.
		 */
		for(; buf < end; buf++) {
			if(*buf > 0x7F) {
				_ASN_CTFAIL(app_key, td, sptr,
					"%s: value byte %ld out of range: "
					"%d > 127 (%s:%d)",
					td->name,
					(long)((buf - st->buf) + 1),
					*buf,
					__FILE__, __LINE__);
				return -1;
			}
		}
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}

	return 0;
}

