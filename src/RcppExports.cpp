// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// sim_wrightfisher_cpp
Rcpp::List sim_wrightfisher_cpp(Rcpp::List args, Rcpp::List args_functions, Rcpp::List args_progress);
RcppExport SEXP _genescaperlite_sim_wrightfisher_cpp(SEXP argsSEXP, SEXP args_functionsSEXP, SEXP args_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type args(argsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type args_functions(args_functionsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type args_progress(args_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_wrightfisher_cpp(args, args_functions, args_progress));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_genescaperlite_sim_wrightfisher_cpp", (DL_FUNC) &_genescaperlite_sim_wrightfisher_cpp, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_genescaperlite(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}