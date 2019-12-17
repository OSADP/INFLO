/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../downloads/DSRC_R36_Source.ASN"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_ProbeDataManagement_H_
#define	_ProbeDataManagement_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DSRCmsgID.h"
#include "Sample.h"
#include "HeadingSlice.h"
#include "TxTime.h"
#include "Count.h"
#include "TermTime.h"
#include "TermDistance.h"
#include <constr_CHOICE.h>
#include "SnapshotTime.h"
#include "SnapshotDistance.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ProbeDataManagement__term_PR {
	ProbeDataManagement__term_PR_NOTHING,	/* No components present */
	ProbeDataManagement__term_PR_termtime,
	ProbeDataManagement__term_PR_termDistance
} ProbeDataManagement__term_PR;
typedef enum ProbeDataManagement__snapshot_PR {
	ProbeDataManagement__snapshot_PR_NOTHING,	/* No components present */
	ProbeDataManagement__snapshot_PR_snapshotTime,
	ProbeDataManagement__snapshot_PR_snapshotDistance
} ProbeDataManagement__snapshot_PR;

/* Forward declarations */
struct VehicleStatusRequest;

/* ProbeDataManagement */
typedef struct ProbeDataManagement {
	DSRCmsgID_t	 msgID;
	Sample_t	 sample;
	HeadingSlice_t	 directions;
	struct ProbeDataManagement__term {
		ProbeDataManagement__term_PR present;
		union ProbeDataManagement__term_u {
			TermTime_t	 termtime;
			TermDistance_t	 termDistance;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} term;
	struct ProbeDataManagement__snapshot {
		ProbeDataManagement__snapshot_PR present;
		union ProbeDataManagement__snapshot_u {
			SnapshotTime_t	 snapshotTime;
			SnapshotDistance_t	 snapshotDistance;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} snapshot;
	TxTime_t	 txInterval;
	Count_t	 cntTthreshold;
	struct ProbeDataManagement__dataElements {
		A_SEQUENCE_OF(struct VehicleStatusRequest) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} dataElements;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProbeDataManagement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProbeDataManagement;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "VehicleStatusRequest.h"

#endif	/* _ProbeDataManagement_H_ */
