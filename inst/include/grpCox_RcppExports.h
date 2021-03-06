// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_grpCox_RCPPEXPORTS_H_GEN_
#define RCPP_grpCox_RCPPEXPORTS_H_GEN_

#include <RcppEigen.h>
#include <Rcpp.h>

namespace grpCox {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("grpCox", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("grpCox", "_grpCox_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in grpCox");
            }
        }
    }

    inline List stdQ(Eigen::MatrixXd X) {
        typedef SEXP(*Ptr_stdQ)(SEXP);
        static Ptr_stdQ p_stdQ = NULL;
        if (p_stdQ == NULL) {
            validateSignature("List(*stdQ)(Eigen::MatrixXd)");
            p_stdQ = (Ptr_stdQ)R_GetCCallable("grpCox", "_grpCox_stdQ");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_stdQ(Shield<SEXP>(Rcpp::wrap(X)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<List >(rcpp_result_gen);
    }

    inline double plQ(Eigen::VectorXd& xb, Eigen::VectorXi& nevent, Eigen::VectorXi& nevent1, Eigen::VectorXi& loc1, int& n) {
        typedef SEXP(*Ptr_plQ)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_plQ p_plQ = NULL;
        if (p_plQ == NULL) {
            validateSignature("double(*plQ)(Eigen::VectorXd&,Eigen::VectorXi&,Eigen::VectorXi&,Eigen::VectorXi&,int&)");
            p_plQ = (Ptr_plQ)R_GetCCallable("grpCox", "_grpCox_plQ");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_plQ(Shield<SEXP>(Rcpp::wrap(xb)), Shield<SEXP>(Rcpp::wrap(nevent)), Shield<SEXP>(Rcpp::wrap(nevent1)), Shield<SEXP>(Rcpp::wrap(loc1)), Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline Eigen::VectorXd dfQ(Eigen::VectorXd& xb, Eigen::VectorXd& tevent, int& N, Eigen::VectorXi& nevent, Eigen::VectorXi& nevent1, Eigen::VectorXi& loc1, int& n) {
        typedef SEXP(*Ptr_dfQ)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_dfQ p_dfQ = NULL;
        if (p_dfQ == NULL) {
            validateSignature("Eigen::VectorXd(*dfQ)(Eigen::VectorXd&,Eigen::VectorXd&,int&,Eigen::VectorXi&,Eigen::VectorXi&,Eigen::VectorXi&,int&)");
            p_dfQ = (Ptr_dfQ)R_GetCCallable("grpCox", "_grpCox_dfQ");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dfQ(Shield<SEXP>(Rcpp::wrap(xb)), Shield<SEXP>(Rcpp::wrap(tevent)), Shield<SEXP>(Rcpp::wrap(N)), Shield<SEXP>(Rcpp::wrap(nevent)), Shield<SEXP>(Rcpp::wrap(nevent1)), Shield<SEXP>(Rcpp::wrap(loc1)), Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Eigen::VectorXd >(rcpp_result_gen);
    }

    inline Eigen::VectorXd d2Q(Eigen::VectorXd& xb, Eigen::VectorXd& tevent, int& N, Eigen::VectorXi& nevent, Eigen::VectorXi& nevent1, Eigen::VectorXi& loc1, int& n) {
        typedef SEXP(*Ptr_d2Q)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_d2Q p_d2Q = NULL;
        if (p_d2Q == NULL) {
            validateSignature("Eigen::VectorXd(*d2Q)(Eigen::VectorXd&,Eigen::VectorXd&,int&,Eigen::VectorXi&,Eigen::VectorXi&,Eigen::VectorXi&,int&)");
            p_d2Q = (Ptr_d2Q)R_GetCCallable("grpCox", "_grpCox_d2Q");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_d2Q(Shield<SEXP>(Rcpp::wrap(xb)), Shield<SEXP>(Rcpp::wrap(tevent)), Shield<SEXP>(Rcpp::wrap(N)), Shield<SEXP>(Rcpp::wrap(nevent)), Shield<SEXP>(Rcpp::wrap(nevent1)), Shield<SEXP>(Rcpp::wrap(loc1)), Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Eigen::VectorXd >(rcpp_result_gen);
    }

    inline double max_lambda(List& dt) {
        typedef SEXP(*Ptr_max_lambda)(SEXP);
        static Ptr_max_lambda p_max_lambda = NULL;
        if (p_max_lambda == NULL) {
            validateSignature("double(*max_lambda)(List&)");
            p_max_lambda = (Ptr_max_lambda)R_GetCCallable("grpCox", "_grpCox_max_lambda");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_max_lambda(Shield<SEXP>(Rcpp::wrap(dt)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline NumericVector convd2n(Eigen::VectorXd X) {
        typedef SEXP(*Ptr_convd2n)(SEXP);
        static Ptr_convd2n p_convd2n = NULL;
        if (p_convd2n == NULL) {
            validateSignature("NumericVector(*convd2n)(Eigen::VectorXd)");
            p_convd2n = (Ptr_convd2n)R_GetCCallable("grpCox", "_grpCox_convd2n");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_convd2n(Shield<SEXP>(Rcpp::wrap(X)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline int isNA(NumericVector x) {
        typedef SEXP(*Ptr_isNA)(SEXP);
        static Ptr_isNA p_isNA = NULL;
        if (p_isNA == NULL) {
            validateSignature("int(*isNA)(NumericVector)");
            p_isNA = (Ptr_isNA)R_GetCCallable("grpCox", "_grpCox_isNA");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_isNA(Shield<SEXP>(Rcpp::wrap(x)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<int >(rcpp_result_gen);
    }

    inline int isInf(NumericVector x) {
        typedef SEXP(*Ptr_isInf)(SEXP);
        static Ptr_isInf p_isInf = NULL;
        if (p_isInf == NULL) {
            validateSignature("int(*isInf)(NumericVector)");
            p_isInf = (Ptr_isInf)R_GetCCallable("grpCox", "_grpCox_isInf");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_isInf(Shield<SEXP>(Rcpp::wrap(x)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<int >(rcpp_result_gen);
    }

    inline int compare(const char* cx, const char* cy) {
        typedef SEXP(*Ptr_compare)(SEXP,SEXP);
        static Ptr_compare p_compare = NULL;
        if (p_compare == NULL) {
            validateSignature("int(*compare)(const char*,const char*)");
            p_compare = (Ptr_compare)R_GetCCallable("grpCox", "_grpCox_compare");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_compare(Shield<SEXP>(Rcpp::wrap(cx)), Shield<SEXP>(Rcpp::wrap(cy)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<int >(rcpp_result_gen);
    }

    inline List grpCoxQ(List& dt, const char* penalty, Eigen::VectorXd lambda, int nlambda, double gamma, double thresh, int maxit) {
        typedef SEXP(*Ptr_grpCoxQ)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_grpCoxQ p_grpCoxQ = NULL;
        if (p_grpCoxQ == NULL) {
            validateSignature("List(*grpCoxQ)(List&,const char*,Eigen::VectorXd,int,double,double,int)");
            p_grpCoxQ = (Ptr_grpCoxQ)R_GetCCallable("grpCox", "_grpCox_grpCoxQ");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_grpCoxQ(Shield<SEXP>(Rcpp::wrap(dt)), Shield<SEXP>(Rcpp::wrap(penalty)), Shield<SEXP>(Rcpp::wrap(lambda)), Shield<SEXP>(Rcpp::wrap(nlambda)), Shield<SEXP>(Rcpp::wrap(gamma)), Shield<SEXP>(Rcpp::wrap(thresh)), Shield<SEXP>(Rcpp::wrap(maxit)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<List >(rcpp_result_gen);
    }

    inline List cvgrpCoxQ(List& dt, const char* penalty, Eigen::VectorXd lambda, int nlambda, double gamma, double thresh, int maxit, List& dF) {
        typedef SEXP(*Ptr_cvgrpCoxQ)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_cvgrpCoxQ p_cvgrpCoxQ = NULL;
        if (p_cvgrpCoxQ == NULL) {
            validateSignature("List(*cvgrpCoxQ)(List&,const char*,Eigen::VectorXd,int,double,double,int,List&)");
            p_cvgrpCoxQ = (Ptr_cvgrpCoxQ)R_GetCCallable("grpCox", "_grpCox_cvgrpCoxQ");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cvgrpCoxQ(Shield<SEXP>(Rcpp::wrap(dt)), Shield<SEXP>(Rcpp::wrap(penalty)), Shield<SEXP>(Rcpp::wrap(lambda)), Shield<SEXP>(Rcpp::wrap(nlambda)), Shield<SEXP>(Rcpp::wrap(gamma)), Shield<SEXP>(Rcpp::wrap(thresh)), Shield<SEXP>(Rcpp::wrap(maxit)), Shield<SEXP>(Rcpp::wrap(dF)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<List >(rcpp_result_gen);
    }

}

#endif // RCPP_grpCox_RCPPEXPORTS_H_GEN_
