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

#include "SignalStatusMessage.h"

static int
memb_priority_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 7)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_prempt_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 7)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_priority_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_SignalState,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_priority_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_priority_specs_6 = {
	sizeof(struct priority),
	offsetof(struct priority, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_priority_6 = {
	"priority",
	"priority",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_priority_tags_6,
	sizeof(asn_DEF_priority_tags_6)
		/sizeof(asn_DEF_priority_tags_6[0]) - 1, /* 1 */
	asn_DEF_priority_tags_6,	/* Same as above */
	sizeof(asn_DEF_priority_tags_6)
		/sizeof(asn_DEF_priority_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_priority_6,
	1,	/* Single element */
	&asn_SPC_priority_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_prempt_9[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_SignalState,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_prempt_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_prempt_specs_9 = {
	sizeof(struct prempt),
	offsetof(struct prempt, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_prempt_9 = {
	"prempt",
	"prempt",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_prempt_tags_9,
	sizeof(asn_DEF_prempt_tags_9)
		/sizeof(asn_DEF_prempt_tags_9[0]) - 1, /* 1 */
	asn_DEF_prempt_tags_9,	/* Same as above */
	sizeof(asn_DEF_prempt_tags_9)
		/sizeof(asn_DEF_prempt_tags_9[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_prempt_9,
	1,	/* Single element */
	&asn_SPC_prempt_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SignalStatusMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SignalStatusMessage, msgID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSRCmsgID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"msgID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SignalStatusMessage, msgCnt),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MsgCount,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"msgCnt"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SignalStatusMessage, id),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntersectionID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SignalStatusMessage, status),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntersectionStatusObject,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"status"
		},
	{ ATF_POINTER, 5, offsetof(struct SignalStatusMessage, priority),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_priority_6,
		memb_priority_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"priority"
		},
	{ ATF_POINTER, 4, offsetof(struct SignalStatusMessage, priorityCause),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleIdent,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"priorityCause"
		},
	{ ATF_POINTER, 3, offsetof(struct SignalStatusMessage, prempt),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_prempt_9,
		memb_prempt_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"prempt"
		},
	{ ATF_POINTER, 2, offsetof(struct SignalStatusMessage, preemptCause),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleIdent,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"preemptCause"
		},
	{ ATF_POINTER, 1, offsetof(struct SignalStatusMessage, transitStatus),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransitStatus,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"transitStatus"
		},
};
static ber_tlv_tag_t asn_DEF_SignalStatusMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SignalStatusMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* msgID at 401 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* msgCnt at 402 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* id at 403 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* status at 409 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* priority at 411 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* priorityCause at 414 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* prempt at 417 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* preemptCause at 420 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* transitStatus at 423 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SignalStatusMessage_specs_1 = {
	sizeof(struct SignalStatusMessage),
	offsetof(struct SignalStatusMessage, _asn_ctx),
	asn_MAP_SignalStatusMessage_tag2el_1,
	9,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	8,	/* Start extensions */
	10	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SignalStatusMessage = {
	"SignalStatusMessage",
	"SignalStatusMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SignalStatusMessage_tags_1,
	sizeof(asn_DEF_SignalStatusMessage_tags_1)
		/sizeof(asn_DEF_SignalStatusMessage_tags_1[0]), /* 1 */
	asn_DEF_SignalStatusMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_SignalStatusMessage_tags_1)
		/sizeof(asn_DEF_SignalStatusMessage_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SignalStatusMessage_1,
	9,	/* Elements count */
	&asn_SPC_SignalStatusMessage_specs_1	/* Additional specs */
};


/* Utility Calls */
/* Utility Calls */


// Set all basic structure pointers to 'safe' null values
void SignalStatusMessage_Init ( SignalStatusMessage_t* theObj)
{
	if (theObj != NULL)
	{
		theObj->msgID = DSRCmsgID_signalStatusMessage; 
		theObj->msgCnt = 0; 
		// TODO: IntersectionID_Init(&theObj->id, 4); // size not yet known
		// TODO: IntersectionStatusObject_Init(&theObj->status);
		theObj->priority = NULL;
		theObj->priorityCause = NULL;
		theObj->prempt = NULL;
		theObj->preemptCause = NULL;
		theObj->transitStatus = NULL;
		theObj->_asn_ctx.ptr = NULL; // not used
	}
}

// Not used in this object
// Move the structure into the packed bytes of the blob
void SignalStatusMessage_ToBlob ( SignalStatusMessage_t* theObj, char* theBlob)
{
	if ((theObj != NULL) && (theBlob != NULL))
	{
	}
}

// Not used in this object
// Fill the structure from the packed bytes of the blob
void SignalStatusMessage_FromBlob ( SignalStatusMessage_t* theObj, char* theBlob)
{
	if ((theObj != NULL) && (theBlob != NULL))
	{
	}
}

