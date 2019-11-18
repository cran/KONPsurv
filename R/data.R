#' Gastric Cancer Data.
#'
#' Survival data from a trial comparing chemotherapy versus combined chemotherapy plus radiotherapy in the treatment of gastric cancer.
#'
#' @usage data(gastric)
#'
#' @format A data frame with 90 observations (45 in each treatment group) with the following 3 columns:
#' \describe{
#'   \item{time}{the observed follow-up times in days.}
#'   \item{status}{the event indicators, 0=right censored, 1= event.}
#'   \item{group}{ the group labels, 1 = chemotherapy, 2 = chemotherapy plus radiotherapy.}
#' }
#' 
#' @source Stablein, D. M. and Koutrouvelis, I. A. (1985) A two-sample test sensitive to crossing hazards in uncensored and singly
#' censored data. Biometrics 41, 643–652. (Page 649).
#' 
#' @references Gastrointestinal Tumor Study Group: Schein, P. D., Stablein, D. M., Bruckner, H. W., Douglass, H.
#' O., Mayer, R., et al. (1982). A comparison of combination chemotherapy and combined modality
#' therapy for locally advanced gastricarcinoma. Cancer 49, 1771-1777.
"gastric"