#------------------------------------------------
#' Pipe operator
#'
#' See \code{magrittr::\link[magrittr]{\%>\%}} for details.
#'
#' @name %>%
#' @rdname pipe
#' @keywords internal
#' @export
#' @importFrom magrittr %>%
#' @usage lhs \%>\% rhs
NULL

# -----------------------------------
# takes matrix as input, converts to list format for use within Rcpp code
#' @noRd
matrix_to_rcpp <- function(x) {
  return(split(x, f = 1:nrow(x)))
}

#------------------------------------------------
# update progress bar
# pb_list = list of progress bar objects
# name = name of this progress bar
# i = new value of bar
# max_i = max value of bar (close when reach this value)
# close = whether to close when reach end
#' @importFrom utils setTxtProgressBar
#' @noRd
update_progress <- function(pb_list, name, i, max_i, close = TRUE) {
  setTxtProgressBar(pb_list[[name]], i)
  if (i == max_i & close) {
    close(pb_list[[name]])
  }
}
