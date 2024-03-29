// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// binary_search_km_ge
int binary_search_km_ge(NumericVector array, double pattern);
RcppExport SEXP _KONPsurv_binary_search_km_ge(SEXP arraySEXP, SEXP patternSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type array(arraySEXP);
    Rcpp::traits::input_parameter< double >::type pattern(patternSEXP);
    rcpp_result_gen = Rcpp::wrap(binary_search_km_ge(array, pattern));
    return rcpp_result_gen;
END_RCPP
}
// binary_search_km_g
int binary_search_km_g(NumericVector array, double pattern);
RcppExport SEXP _KONPsurv_binary_search_km_g(SEXP arraySEXP, SEXP patternSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type array(arraySEXP);
    Rcpp::traits::input_parameter< double >::type pattern(patternSEXP);
    rcpp_result_gen = Rcpp::wrap(binary_search_km_g(array, pattern));
    return rcpp_result_gen;
END_RCPP
}
// hhgsurv_test_stat
List hhgsurv_test_stat(NumericVector s0, NumericVector s1, NumericVector time0, NumericVector time1, NumericVector time, IntegerVector delta, IntegerVector trt, double tau);
RcppExport SEXP _KONPsurv_hhgsurv_test_stat(SEXP s0SEXP, SEXP s1SEXP, SEXP time0SEXP, SEXP time1SEXP, SEXP timeSEXP, SEXP deltaSEXP, SEXP trtSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type s0(s0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time0(time0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time1(time1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type trt(trtSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(hhgsurv_test_stat(s0, s1, time0, time1, time, delta, trt, tau));
    return rcpp_result_gen;
END_RCPP
}
// KM_C
List KM_C(NumericVector time, IntegerVector delta);
RcppExport SEXP _KONPsurv_KM_C(SEXP timeSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(KM_C(time, delta));
    return rcpp_result_gen;
END_RCPP
}
// get_perm_stats
List get_perm_stats(IntegerVector trt, IntegerMatrix ptrt_mat, NumericVector time_original, IntegerVector delta_orginial, NumericVector imputed_altern_time_vec, IntegerVector imputed_altern_delta_vec, int n_perm);
RcppExport SEXP _KONPsurv_get_perm_stats(SEXP trtSEXP, SEXP ptrt_matSEXP, SEXP time_originalSEXP, SEXP delta_orginialSEXP, SEXP imputed_altern_time_vecSEXP, SEXP imputed_altern_delta_vecSEXP, SEXP n_permSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type trt(trtSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type ptrt_mat(ptrt_matSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time_original(time_originalSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type delta_orginial(delta_orginialSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type imputed_altern_time_vec(imputed_altern_time_vecSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type imputed_altern_delta_vec(imputed_altern_delta_vecSEXP);
    Rcpp::traits::input_parameter< int >::type n_perm(n_permSEXP);
    rcpp_result_gen = Rcpp::wrap(get_perm_stats(trt, ptrt_mat, time_original, delta_orginial, imputed_altern_time_vec, imputed_altern_delta_vec, n_perm));
    return rcpp_result_gen;
END_RCPP
}
// hhgsurv_test_stat_K_sample
List hhgsurv_test_stat_K_sample(List s_group, List time_group, IntegerVector n_vec, NumericVector time, IntegerVector delta, IntegerVector trt, NumericVector tau_k, double tau);
RcppExport SEXP _KONPsurv_hhgsurv_test_stat_K_sample(SEXP s_groupSEXP, SEXP time_groupSEXP, SEXP n_vecSEXP, SEXP timeSEXP, SEXP deltaSEXP, SEXP trtSEXP, SEXP tau_kSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s_group(s_groupSEXP);
    Rcpp::traits::input_parameter< List >::type time_group(time_groupSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type n_vec(n_vecSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type trt(trtSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tau_k(tau_kSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(hhgsurv_test_stat_K_sample(s_group, time_group, n_vec, time, delta, trt, tau_k, tau));
    return rcpp_result_gen;
END_RCPP
}
// get_perm_stats_K_sample
List get_perm_stats_K_sample(IntegerMatrix ptrt_mat, NumericMatrix imputed_time_matrix, IntegerMatrix imputed_delta_matrix, int n_perm, IntegerVector n_vec);
RcppExport SEXP _KONPsurv_get_perm_stats_K_sample(SEXP ptrt_matSEXP, SEXP imputed_time_matrixSEXP, SEXP imputed_delta_matrixSEXP, SEXP n_permSEXP, SEXP n_vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type ptrt_mat(ptrt_matSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type imputed_time_matrix(imputed_time_matrixSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type imputed_delta_matrix(imputed_delta_matrixSEXP);
    Rcpp::traits::input_parameter< int >::type n_perm(n_permSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type n_vec(n_vecSEXP);
    rcpp_result_gen = Rcpp::wrap(get_perm_stats_K_sample(ptrt_mat, imputed_time_matrix, imputed_delta_matrix, n_perm, n_vec));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_KONPsurv_binary_search_km_ge", (DL_FUNC) &_KONPsurv_binary_search_km_ge, 2},
    {"_KONPsurv_binary_search_km_g", (DL_FUNC) &_KONPsurv_binary_search_km_g, 2},
    {"_KONPsurv_hhgsurv_test_stat", (DL_FUNC) &_KONPsurv_hhgsurv_test_stat, 8},
    {"_KONPsurv_KM_C", (DL_FUNC) &_KONPsurv_KM_C, 2},
    {"_KONPsurv_get_perm_stats", (DL_FUNC) &_KONPsurv_get_perm_stats, 7},
    {"_KONPsurv_hhgsurv_test_stat_K_sample", (DL_FUNC) &_KONPsurv_hhgsurv_test_stat_K_sample, 8},
    {"_KONPsurv_get_perm_stats_K_sample", (DL_FUNC) &_KONPsurv_get_perm_stats_K_sample, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_KONPsurv(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
