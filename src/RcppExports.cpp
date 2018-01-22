// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// ChaosGame
Rcpp::NumericMatrix ChaosGame(const int n_vertex, const double distance, const double iterations);
RcppExport SEXP _ChaosGamePlot_ChaosGame(SEXP n_vertexSEXP, SEXP distanceSEXP, SEXP iterationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n_vertex(n_vertexSEXP);
    Rcpp::traits::input_parameter< const double >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< const double >::type iterations(iterationsSEXP);
    rcpp_result_gen = Rcpp::wrap(ChaosGame(n_vertex, distance, iterations));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ChaosGamePlot_ChaosGame", (DL_FUNC) &_ChaosGamePlot_ChaosGame, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_ChaosGamePlot(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
