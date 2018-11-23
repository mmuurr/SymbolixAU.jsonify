// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_df_to_json
Rcpp::StringVector rcpp_df_to_json(Rcpp::DataFrame df, bool unbox);
RcppExport SEXP _jsonify_rcpp_df_to_json(SEXP dfSEXP, SEXP unboxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< bool >::type unbox(unboxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_df_to_json(df, unbox));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_numeric_to_json
Rcpp::StringVector rcpp_numeric_to_json(Rcpp::NumericVector nv, bool unbox);
RcppExport SEXP _jsonify_rcpp_numeric_to_json(SEXP nvSEXP, SEXP unboxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nv(nvSEXP);
    Rcpp::traits::input_parameter< bool >::type unbox(unboxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_numeric_to_json(nv, unbox));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_character_to_json
Rcpp::StringVector rcpp_character_to_json(Rcpp::StringVector sv, bool unbox);
RcppExport SEXP _jsonify_rcpp_character_to_json(SEXP svSEXP, SEXP unboxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type sv(svSEXP);
    Rcpp::traits::input_parameter< bool >::type unbox(unboxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_character_to_json(sv, unbox));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_integer_to_json
Rcpp::StringVector rcpp_integer_to_json(Rcpp::IntegerVector iv, bool unbox);
RcppExport SEXP _jsonify_rcpp_integer_to_json(SEXP ivSEXP, SEXP unboxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type iv(ivSEXP);
    Rcpp::traits::input_parameter< bool >::type unbox(unboxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_integer_to_json(iv, unbox));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_logical_to_json
Rcpp::StringVector rcpp_logical_to_json(Rcpp::LogicalVector iv, bool unbox);
RcppExport SEXP _jsonify_rcpp_logical_to_json(SEXP ivSEXP, SEXP unboxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type iv(ivSEXP);
    Rcpp::traits::input_parameter< bool >::type unbox(unboxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_logical_to_json(iv, unbox));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_list_to_json
Rcpp::StringVector rcpp_list_to_json(SEXP lst, bool unbox);
RcppExport SEXP _jsonify_rcpp_list_to_json(SEXP lstSEXP, SEXP unboxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type lst(lstSEXP);
    Rcpp::traits::input_parameter< bool >::type unbox(unboxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_list_to_json(lst, unbox));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_integer_matrix_to_json
Rcpp::StringVector rcpp_integer_matrix_to_json(Rcpp::IntegerMatrix m, bool unbox);
RcppExport SEXP _jsonify_rcpp_integer_matrix_to_json(SEXP mSEXP, SEXP unboxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< bool >::type unbox(unboxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_integer_matrix_to_json(m, unbox));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_numeric_matrix_to_json
Rcpp::StringVector rcpp_numeric_matrix_to_json(Rcpp::NumericMatrix m, bool unbox);
RcppExport SEXP _jsonify_rcpp_numeric_matrix_to_json(SEXP mSEXP, SEXP unboxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< bool >::type unbox(unboxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_numeric_matrix_to_json(m, unbox));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_character_matrix_to_json
Rcpp::StringVector rcpp_character_matrix_to_json(Rcpp::CharacterMatrix m, bool unbox);
RcppExport SEXP _jsonify_rcpp_character_matrix_to_json(SEXP mSEXP, SEXP unboxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< bool >::type unbox(unboxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_character_matrix_to_json(m, unbox));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_validate_json
Rcpp::LogicalVector rcpp_validate_json(Rcpp::StringVector geojson);
RcppExport SEXP _jsonify_rcpp_validate_json(SEXP geojsonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geojson(geojsonSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_validate_json(geojson));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_jsonify_rcpp_df_to_json", (DL_FUNC) &_jsonify_rcpp_df_to_json, 2},
    {"_jsonify_rcpp_numeric_to_json", (DL_FUNC) &_jsonify_rcpp_numeric_to_json, 2},
    {"_jsonify_rcpp_character_to_json", (DL_FUNC) &_jsonify_rcpp_character_to_json, 2},
    {"_jsonify_rcpp_integer_to_json", (DL_FUNC) &_jsonify_rcpp_integer_to_json, 2},
    {"_jsonify_rcpp_logical_to_json", (DL_FUNC) &_jsonify_rcpp_logical_to_json, 2},
    {"_jsonify_rcpp_list_to_json", (DL_FUNC) &_jsonify_rcpp_list_to_json, 2},
    {"_jsonify_rcpp_integer_matrix_to_json", (DL_FUNC) &_jsonify_rcpp_integer_matrix_to_json, 2},
    {"_jsonify_rcpp_numeric_matrix_to_json", (DL_FUNC) &_jsonify_rcpp_numeric_matrix_to_json, 2},
    {"_jsonify_rcpp_character_matrix_to_json", (DL_FUNC) &_jsonify_rcpp_character_matrix_to_json, 2},
    {"_jsonify_rcpp_validate_json", (DL_FUNC) &_jsonify_rcpp_validate_json, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_jsonify(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
