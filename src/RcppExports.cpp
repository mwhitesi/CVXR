// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// ProblemData__new
SEXP ProblemData__new();
RcppExport SEXP cvxr_ProblemData__new() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(ProblemData__new());
    return __result;
END_RCPP
}
// ProblemData__getV
std::vector<double> ProblemData__getV(SEXP xp);
RcppExport SEXP cvxr_ProblemData__getV(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    __result = Rcpp::wrap(ProblemData__getV(xp));
    return __result;
END_RCPP
}
// ProblemData__set_V
void ProblemData__set_V(SEXP xp, std::vector<double> vp);
RcppExport SEXP cvxr_ProblemData__set_V(SEXP xpSEXP, SEXP vpSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type vp(vpSEXP);
    ProblemData__set_V(xp, vp);
    return R_NilValue;
END_RCPP
}
// ProblemData__getConstVec
std::vector<double> ProblemData__getConstVec(SEXP xp);
RcppExport SEXP cvxr_ProblemData__getConstVec(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    __result = Rcpp::wrap(ProblemData__getConstVec(xp));
    return __result;
END_RCPP
}
// ProblemData__set_const_vec
void ProblemData__set_const_vec(SEXP xp, std::vector<double> cvp);
RcppExport SEXP cvxr_ProblemData__set_const_vec(SEXP xpSEXP, SEXP cvpSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type cvp(cvpSEXP);
    ProblemData__set_const_vec(xp, cvp);
    return R_NilValue;
END_RCPP
}
// ProblemData__getI
std::vector<int> ProblemData__getI(SEXP xp);
RcppExport SEXP cvxr_ProblemData__getI(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    __result = Rcpp::wrap(ProblemData__getI(xp));
    return __result;
END_RCPP
}
// ProblemData__set_I
void ProblemData__set_I(SEXP xp, std::vector<int> ip);
RcppExport SEXP cvxr_ProblemData__set_I(SEXP xpSEXP, SEXP ipSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type ip(ipSEXP);
    ProblemData__set_I(xp, ip);
    return R_NilValue;
END_RCPP
}
// ProblemData__getJ
std::vector<int> ProblemData__getJ(SEXP xp);
RcppExport SEXP cvxr_ProblemData__getJ(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    __result = Rcpp::wrap(ProblemData__getJ(xp));
    return __result;
END_RCPP
}
// ProblemData__set_J
void ProblemData__set_J(SEXP xp, std::vector<int> jp);
RcppExport SEXP cvxr_ProblemData__set_J(SEXP xpSEXP, SEXP jpSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type jp(jpSEXP);
    ProblemData__set_J(xp, jp);
    return R_NilValue;
END_RCPP
}
// ProblemData__get_id_to_col
std::map<int, int> ProblemData__get_id_to_col(SEXP xp);
RcppExport SEXP cvxr_ProblemData__get_id_to_col(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    __result = Rcpp::wrap(ProblemData__get_id_to_col(xp));
    return __result;
END_RCPP
}
// ProblemData__set_id_to_col
void ProblemData__set_id_to_col(SEXP xp, Rcpp::IntegerVector iv);
RcppExport SEXP cvxr_ProblemData__set_id_to_col(SEXP xpSEXP, SEXP ivSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type iv(ivSEXP);
    ProblemData__set_id_to_col(xp, iv);
    return R_NilValue;
END_RCPP
}
// ProblemData__get_const_to_row
std::map<int, int> ProblemData__get_const_to_row(SEXP xp);
RcppExport SEXP cvxr_ProblemData__get_const_to_row(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    __result = Rcpp::wrap(ProblemData__get_const_to_row(xp));
    return __result;
END_RCPP
}
// ProblemData__set_const_to_row
void ProblemData__set_const_to_row(SEXP xp, Rcpp::IntegerVector iv);
RcppExport SEXP cvxr_ProblemData__set_const_to_row(SEXP xpSEXP, SEXP ivSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type iv(ivSEXP);
    ProblemData__set_const_to_row(xp, iv);
    return R_NilValue;
END_RCPP
}
// ProblemData__get_num_constaints
int ProblemData__get_num_constaints(SEXP xp);
RcppExport SEXP cvxr_ProblemData__get_num_constaints(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    __result = Rcpp::wrap(ProblemData__get_num_constaints(xp));
    return __result;
END_RCPP
}
// ProblemData__get_vals
std::vector<double> ProblemData__get_vals(SEXP xp);
RcppExport SEXP cvxr_ProblemData__get_vals(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    __result = Rcpp::wrap(ProblemData__get_vals(xp));
    return __result;
END_RCPP
}
// ProblemData__set_vals
void ProblemData__set_vals(SEXP xp, std::vector<double> vp);
RcppExport SEXP cvxr_ProblemData__set_vals(SEXP xpSEXP, SEXP vpSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type vp(vpSEXP);
    ProblemData__set_vals(xp, vp);
    return R_NilValue;
END_RCPP
}
// ProblemData__get_row_idxs
std::vector<int> ProblemData__get_row_idxs(SEXP xp);
RcppExport SEXP cvxr_ProblemData__get_row_idxs(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    __result = Rcpp::wrap(ProblemData__get_row_idxs(xp));
    return __result;
END_RCPP
}
// ProblemData__set_row_idxs
void ProblemData__set_row_idxs(SEXP xp, std::vector<int> idxp);
RcppExport SEXP cvxr_ProblemData__set_row_idxs(SEXP xpSEXP, SEXP idxpSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type idxp(idxpSEXP);
    ProblemData__set_row_idxs(xp, idxp);
    return R_NilValue;
END_RCPP
}
// ProblemData__get_col_ptrs
std::vector<int> ProblemData__get_col_ptrs(SEXP xp);
RcppExport SEXP cvxr_ProblemData__get_col_ptrs(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    __result = Rcpp::wrap(ProblemData__get_col_ptrs(xp));
    return __result;
END_RCPP
}
// ProblemData__set_col_ptrs
void ProblemData__set_col_ptrs(SEXP xp, std::vector<int> icp);
RcppExport SEXP cvxr_ProblemData__set_col_ptrs(SEXP xpSEXP, SEXP icpSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type icp(icpSEXP);
    ProblemData__set_col_ptrs(xp, icp);
    return R_NilValue;
END_RCPP
}
// LinOp__new
SEXP LinOp__new();
RcppExport SEXP cvxr_LinOp__new() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(LinOp__new());
    return __result;
END_RCPP
}
// LinOp__get_sparse_data
Eigen::SparseMatrix<double> LinOp__get_sparse_data(SEXP xp);
RcppExport SEXP cvxr_LinOp__get_sparse_data(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    __result = Rcpp::wrap(LinOp__get_sparse_data(xp));
    return __result;
END_RCPP
}
// LinOp__set_sparse_data
void LinOp__set_sparse_data(SEXP xp, SEXP sparseMat);
RcppExport SEXP cvxr_LinOp__set_sparse_data(SEXP xpSEXP, SEXP sparseMatSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< SEXP >::type sparseMat(sparseMatSEXP);
    LinOp__set_sparse_data(xp, sparseMat);
    return R_NilValue;
END_RCPP
}
// LinOp__get_dense_data
Eigen::MatrixXd LinOp__get_dense_data(SEXP xp);
RcppExport SEXP cvxr_LinOp__get_dense_data(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    __result = Rcpp::wrap(LinOp__get_dense_data(xp));
    return __result;
END_RCPP
}
// LinOp__set_dense_data
void LinOp__set_dense_data(SEXP xp, SEXP denseMat);
RcppExport SEXP cvxr_LinOp__set_dense_data(SEXP xpSEXP, SEXP denseMatSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< SEXP >::type denseMat(denseMatSEXP);
    LinOp__set_dense_data(xp, denseMat);
    return R_NilValue;
END_RCPP
}
// LinOp__args_push_back
void LinOp__args_push_back(SEXP xp, SEXP yp);
RcppExport SEXP cvxr_LinOp__args_push_back(SEXP xpSEXP, SEXP ypSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< SEXP >::type yp(ypSEXP);
    LinOp__args_push_back(xp, yp);
    return R_NilValue;
END_RCPP
}
// LinOp__size_push_back
void LinOp__size_push_back(SEXP xp, int intVal);
RcppExport SEXP cvxr_LinOp__size_push_back(SEXP xpSEXP, SEXP intValSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< int >::type intVal(intValSEXP);
    LinOp__size_push_back(xp, intVal);
    return R_NilValue;
END_RCPP
}
// LinOp__set_type
void LinOp__set_type(SEXP xp, int typeValue);
RcppExport SEXP cvxr_LinOp__set_type(SEXP xpSEXP, SEXP typeValueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< int >::type typeValue(typeValueSEXP);
    LinOp__set_type(xp, typeValue);
    return R_NilValue;
END_RCPP
}
// LinOp__get_type
int LinOp__get_type(SEXP xp);
RcppExport SEXP cvxr_LinOp__get_type(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    __result = Rcpp::wrap(LinOp__get_type(xp));
    return __result;
END_RCPP
}
// LinOp__slice_push_back
void LinOp__slice_push_back(SEXP xp, std::vector<int> intVec);
RcppExport SEXP cvxr_LinOp__slice_push_back(SEXP xpSEXP, SEXP intVecSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type intVec(intVecSEXP);
    LinOp__slice_push_back(xp, intVec);
    return R_NilValue;
END_RCPP
}
// LinOp__get_slice
std::vector<std::vector<int> > LinOp__get_slice(SEXP xp);
RcppExport SEXP cvxr_LinOp__get_slice(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    __result = Rcpp::wrap(LinOp__get_slice(xp));
    return __result;
END_RCPP
}
// LinOp__set_slice
std::vector<std::vector<int> > LinOp__set_slice(SEXP xp, std::vector<std::vector<int> > sliceValue);
RcppExport SEXP cvxr_LinOp__set_slice(SEXP xpSEXP, SEXP sliceValueSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< std::vector<std::vector<int> > >::type sliceValue(sliceValueSEXP);
    __result = Rcpp::wrap(LinOp__set_slice(xp, sliceValue));
    return __result;
END_RCPP
}
// Solution__new
SEXP Solution__new();
RcppExport SEXP cvxr_Solution__new() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(Solution__new());
    return __result;
END_RCPP
}
// Solution__get_status
int Solution__get_status(SEXP xp);
RcppExport SEXP cvxr_Solution__get_status(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    __result = Rcpp::wrap(Solution__get_status(xp));
    return __result;
END_RCPP
}
// Solution__get_optimal_value
double Solution__get_optimal_value(SEXP xp);
RcppExport SEXP cvxr_Solution__get_optimal_value(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    __result = Rcpp::wrap(Solution__get_optimal_value(xp));
    return __result;
END_RCPP
}
// Solution__get_primal_values
std::map<int, Eigen::MatrixXd> Solution__get_primal_values(SEXP xp);
RcppExport SEXP cvxr_Solution__get_primal_values(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    __result = Rcpp::wrap(Solution__get_primal_values(xp));
    return __result;
END_RCPP
}
// Solution__get_dual_values
std::map<int, Eigen::MatrixXd> Solution__get_dual_values(SEXP xp);
RcppExport SEXP cvxr_Solution__get_dual_values(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    __result = Rcpp::wrap(Solution__get_dual_values(xp));
    return __result;
END_RCPP
}
