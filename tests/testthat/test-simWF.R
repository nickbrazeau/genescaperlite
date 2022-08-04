test_that("WF simulator works", {
  mig_rate <- 1e-2
  demes <- 5
  mig_mat <- matrix(mig_rate / demes, demes, demes)
  diag(mig_mat) <- 0
  diag(mig_mat) <- 1 - rowSums(mig_mat)
  mod <- sim_wrightfisher(N = 100,
                          L = 10,
                          alleles = 2,
                          mu = 1e-4,
                          mig_mat = mig_mat,
                          t_out = seq(0, 365*10, 7),
                          initial_method = 2,
                          initial_params = rep(1e6, 2),
                          silent = TRUE)

  assertthat::not_empty(mod)

})
