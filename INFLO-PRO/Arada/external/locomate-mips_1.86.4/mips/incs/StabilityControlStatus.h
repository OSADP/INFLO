/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../downloads/DSRC_R36_Source.ASN"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_StabilityControlStatus_H_
#define	_StabilityControlStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum StabilityControlStatus {
	StabilityControlStatus_unavailable	= 0,
	StabilityControlStatus_off	= 1,
	StabilityControlStatus_on	= 2
} e_StabilityControlStatus;

/* StabilityControlStatus */
typedef ENUMERATED_t	 StabilityControlStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_StabilityControlStatus;
asn_struct_free_f StabilityControlStatus_free;
asn_struct_print_f StabilityControlStatus_print;
asn_constr_check_f StabilityControlStatus_constraint;
ber_type_decoder_f StabilityControlStatus_decode_ber;
der_type_encoder_f StabilityControlStatus_encode_der;
xer_type_decoder_f StabilityControlStatus_decode_xer;
xer_type_encoder_f StabilityControlStatus_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _StabilityControlStatus_H_ */
