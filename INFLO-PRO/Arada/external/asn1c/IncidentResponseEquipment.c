/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "ITIS"
 * 	found in "../downloads/DSRC_R36_Source.ASN"
 * 	`asn1c -fcompound-names`
 */

#include <asn_internal.h>

#include "IncidentResponseEquipment.h"

int
IncidentResponseEquipment_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_ENUMERATED.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using ENUMERATED,
 * so here we adjust the DEF accordingly.
 */
static void
IncidentResponseEquipment_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_ENUMERATED.free_struct;
	td->print_struct   = asn_DEF_ENUMERATED.print_struct;
	td->ber_decoder    = asn_DEF_ENUMERATED.ber_decoder;
	td->der_encoder    = asn_DEF_ENUMERATED.der_encoder;
	td->xer_decoder    = asn_DEF_ENUMERATED.xer_decoder;
	td->xer_encoder    = asn_DEF_ENUMERATED.xer_encoder;
	td->uper_decoder   = asn_DEF_ENUMERATED.uper_decoder;
	td->uper_encoder   = asn_DEF_ENUMERATED.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_ENUMERATED.per_constraints;
	td->elements       = asn_DEF_ENUMERATED.elements;
	td->elements_count = asn_DEF_ENUMERATED.elements_count;
     /* td->specifics      = asn_DEF_ENUMERATED.specifics;	// Defined explicitly */
}

void
IncidentResponseEquipment_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	IncidentResponseEquipment_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
IncidentResponseEquipment_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	IncidentResponseEquipment_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
IncidentResponseEquipment_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	IncidentResponseEquipment_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
IncidentResponseEquipment_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	IncidentResponseEquipment_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
IncidentResponseEquipment_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	IncidentResponseEquipment_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
IncidentResponseEquipment_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	IncidentResponseEquipment_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_INTEGER_enum_map_t asn_MAP_IncidentResponseEquipment_value2enum_1[] = {
	{ 9985,	23,	"ground-fire-suppression" },
	{ 9986,	22,	"heavy-ground-equipment" },
	{ 9988,	8,	"aircraft" },
	{ 9989,	16,	"marine-equipment" },
	{ 9990,	17,	"support-equipment" },
	{ 9991,	19,	"medical-rescue-unit" },
	{ 9993,	5,	"other" },
	{ 9994,	29,	"ground-fire-suppression-other" },
	{ 9995,	6,	"engine" },
	{ 9996,	15,	"truck-or-aerial" },
	{ 9997,	5,	"quint" },
	{ 9998,	25,	"tanker-pumper-combination" },
	{ 10000,	11,	"brush-truck" },
	{ 10001,	28,	"aircraft-rescue-firefighting" },
	{ 10004,	28,	"heavy-ground-equipment-other" },
	{ 10005,	13,	"dozer-or-plow" },
	{ 10006,	7,	"tractor" },
	{ 10008,	16,	"tanker-or-tender" },
	{ 10024,	14,	"aircraft-other" },
	{ 10025,	26,	"aircraft-fixed-wing-tanker" },
	{ 10026,	10,	"helitanker" },
	{ 10027,	10,	"helicopter" },
	{ 10034,	22,	"marine-equipment-other" },
	{ 10035,	19,	"fire-boat-with-pump" },
	{ 10036,	12,	"boat-no-pump" },
	{ 10044,	23,	"support-apparatus-other" },
	{ 10045,	27,	"breathing-apparatus-support" },
	{ 10046,	18,	"light-and-air-unit" },
	{ 10054,	25,	"medical-rescue-unit-other" },
	{ 10055,	11,	"rescue-unit" },
	{ 10056,	24,	"urban-search-rescue-unit" },
	{ 10057,	17,	"high-angle-rescue" },
	{ 10058,	17,	"crash-fire-rescue" },
	{ 10059,	8,	"bLS-unit" },
	{ 10060,	8,	"aLS-unit" },
	{ 10075,	19,	"mobile-command-post" },
	{ 10076,	17,	"chief-officer-car" },
	{ 10077,	11,	"hAZMAT-unit" },
	{ 10078,	16,	"type-i-hand-crew" },
	{ 10079,	17,	"type-ii-hand-crew" },
	{ 10083,	23,	"privately-owned-vehicle" },
	{ 10084,	24,	"other-apparatus-resource" },
	{ 10085,	9,	"ambulance" },
	{ 10086,	14,	"bomb-squad-van" },
	{ 10087,	17,	"combine-harvester" },
	{ 10088,	20,	"construction-vehicle" },
	{ 10089,	12,	"farm-tractor" },
	{ 10090,	22,	"grass-cutting-machines" },
	{ 10091,	22,	"hAZMAT-containment-tow" },
	{ 10092,	9,	"heavy-tow" },
	{ 10093,	22,	"hedge-cutting-machines" },
	{ 10094,	9,	"light-tow" },
	{ 10095,	12,	"mobile-crane" },
	{ 10096,	25,	"refuse-collection-vehicle" },
	{ 10097,	19,	"resurfacing-vehicle" },
	{ 10098,	12,	"road-sweeper" },
	{ 10099,	32,	"roadside-litter-collection-crews" },
	{ 10100,	15,	"salvage-vehicle" },
	{ 10101,	10,	"sand-truck" },
	{ 10102,	8,	"snowplow" },
	{ 10103,	12,	"steam-roller" },
	{ 10104,	13,	"swat-team-van" },
	{ 10105,	20,	"track-laying-vehicle" },
	{ 10106,	15,	"unknown-vehicle" },
	{ 10107,	20,	"white-lining-vehicle" },
	{ 10108,	10,	"dump-truck" },
	{ 10109,	18,	"supervisor-vehicle" },
	{ 10110,	11,	"snow-blower" },
	{ 10111,	18,	"rotary-snow-blower" },
	{ 10112,	11,	"road-grader" },
	{ 10113,	11,	"steam-truck" },
	{ 10114,	11,	"flatbed-tow" }
	/* This list is extensible */
};
static unsigned int asn_MAP_IncidentResponseEquipment_enum2value_1[] = {
	34,	/* aLS-unit(10060) */
	2,	/* aircraft(9988) */
	19,	/* aircraft-fixed-wing-tanker(10025) */
	18,	/* aircraft-other(10024) */
	13,	/* aircraft-rescue-firefighting(10001) */
	42,	/* ambulance(10085) */
	33,	/* bLS-unit(10059) */
	24,	/* boat-no-pump(10036) */
	43,	/* bomb-squad-van(10086) */
	26,	/* breathing-apparatus-support(10045) */
	12,	/* brush-truck(10000) */
	36,	/* chief-officer-car(10076) */
	44,	/* combine-harvester(10087) */
	45,	/* construction-vehicle(10088) */
	32,	/* crash-fire-rescue(10058) */
	15,	/* dozer-or-plow(10005) */
	65,	/* dump-truck(10108) */
	8,	/* engine(9995) */
	46,	/* farm-tractor(10089) */
	23,	/* fire-boat-with-pump(10035) */
	71,	/* flatbed-tow(10114) */
	47,	/* grass-cutting-machines(10090) */
	0,	/* ground-fire-suppression(9985) */
	7,	/* ground-fire-suppression-other(9994) */
	48,	/* hAZMAT-containment-tow(10091) */
	37,	/* hAZMAT-unit(10077) */
	1,	/* heavy-ground-equipment(9986) */
	14,	/* heavy-ground-equipment-other(10004) */
	49,	/* heavy-tow(10092) */
	50,	/* hedge-cutting-machines(10093) */
	21,	/* helicopter(10027) */
	20,	/* helitanker(10026) */
	31,	/* high-angle-rescue(10057) */
	27,	/* light-and-air-unit(10046) */
	51,	/* light-tow(10094) */
	3,	/* marine-equipment(9989) */
	22,	/* marine-equipment-other(10034) */
	5,	/* medical-rescue-unit(9991) */
	28,	/* medical-rescue-unit-other(10054) */
	35,	/* mobile-command-post(10075) */
	52,	/* mobile-crane(10095) */
	6,	/* other(9993) */
	41,	/* other-apparatus-resource(10084) */
	40,	/* privately-owned-vehicle(10083) */
	10,	/* quint(9997) */
	53,	/* refuse-collection-vehicle(10096) */
	29,	/* rescue-unit(10055) */
	54,	/* resurfacing-vehicle(10097) */
	69,	/* road-grader(10112) */
	55,	/* road-sweeper(10098) */
	56,	/* roadside-litter-collection-crews(10099) */
	68,	/* rotary-snow-blower(10111) */
	57,	/* salvage-vehicle(10100) */
	58,	/* sand-truck(10101) */
	67,	/* snow-blower(10110) */
	59,	/* snowplow(10102) */
	60,	/* steam-roller(10103) */
	70,	/* steam-truck(10113) */
	66,	/* supervisor-vehicle(10109) */
	25,	/* support-apparatus-other(10044) */
	4,	/* support-equipment(9990) */
	61,	/* swat-team-van(10104) */
	17,	/* tanker-or-tender(10008) */
	11,	/* tanker-pumper-combination(9998) */
	62,	/* track-laying-vehicle(10105) */
	16,	/* tractor(10006) */
	9,	/* truck-or-aerial(9996) */
	38,	/* type-i-hand-crew(10078) */
	39,	/* type-ii-hand-crew(10079) */
	63,	/* unknown-vehicle(10106) */
	30,	/* urban-search-rescue-unit(10056) */
	64	/* white-lining-vehicle(10107) */
	/* This list is extensible */
};
static asn_INTEGER_specifics_t asn_SPC_IncidentResponseEquipment_specs_1 = {
	asn_MAP_IncidentResponseEquipment_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_IncidentResponseEquipment_enum2value_1,	/* N => "tag"; sorted by N */
	72,	/* Number of elements in the maps */
	73,	/* Extensions before this member */
	1	/* Strict enumeration */
};
static ber_tlv_tag_t asn_DEF_IncidentResponseEquipment_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_IncidentResponseEquipment = {
	"IncidentResponseEquipment",
	"IncidentResponseEquipment",
	IncidentResponseEquipment_free,
	IncidentResponseEquipment_print,
	IncidentResponseEquipment_constraint,
	IncidentResponseEquipment_decode_ber,
	IncidentResponseEquipment_encode_der,
	IncidentResponseEquipment_decode_xer,
	IncidentResponseEquipment_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_IncidentResponseEquipment_tags_1,
	sizeof(asn_DEF_IncidentResponseEquipment_tags_1)
		/sizeof(asn_DEF_IncidentResponseEquipment_tags_1[0]), /* 1 */
	asn_DEF_IncidentResponseEquipment_tags_1,	/* Same as above */
	sizeof(asn_DEF_IncidentResponseEquipment_tags_1)
		/sizeof(asn_DEF_IncidentResponseEquipment_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	&asn_SPC_IncidentResponseEquipment_specs_1	/* Additional specs */
};

