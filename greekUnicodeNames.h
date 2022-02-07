
enum unicode_names {
    alpha, alphaCap,
    beta, betaCap,
    gamma, gammaCap,
    delta, deltaCap,
    epsilon, epsilonCap,
    zeta, zetaCap,
    eta, etaCap,
    theta, thetaCap,
    iota, iotaCap,
    kappa, kappaCap,
    lambda, lambdaCap,
    mu, muCap,
    nu, nuCap,
    xi, xiCap,
    omicron, omicronCap,
    pi, piCap,
    rho, rhoCap,
    sigma, sigmaCap,
    finalSigma, finalSigmaCap,
    tau, tauCap,
    upsilon, upsilonCap,
    phi, phiCap,
    chi, chiCap,
    psi, psiCap,
    omega, omegaCap,
    omegaPi, phiEmptySet
};


const uint32_t PROGMEM unicode_map[] = {
    [alpha] = 0x03B1,   [alphaCap] = 0x0391,
    [beta] = 0x03B2,    [betaCap] = 0x0393,
    [gamma] = 0x03B3,   [gammaCap] = 0x0393,
    [delta] = 0x03B4,   [deltaCap] = 0x0394,
    [epsilon] = 0x03B5, [epsilonCap] = 0x0395,
    [zeta] = 0x03B6,    [zetaCap] = 0x0396,
    [eta] = 0x03B7,     [etaCap] = 0x0397,
    [theta] = 0x03B8,   [thetaCap] = 0x0398,
    [iota] = 0x03B9,    [iotaCap] = 0x0399,
    [kappa] = 0x03BA,   [kappaCap] = 0x039A,
    [lambda] = 0x03BB,  [lambdaCap] = 0x039B,
    [mu] = 0x03BC,      [muCap] = 0x039C,
    [nu] = 0x03BD,      [nuCap] = 0x039D,
    [xi] = 0x03BE,      [xiCap] = 0x039E,
    [omicron] = 0x03BF, [omicronCap] = 0x039F,
    [pi] = 0x03C0,      [piCap] = 0x03A0,
    [rho] = 0x03C1,     [rhoCap] = 0x03A1,
    [sigma] = 0x03C3,   [sigmaCap] = 0x03A3,   [finalSigma] = 0x03C2,  
    [tau] = 0x03C4,     [tauCap] = 0x03A4,
    [upsilon] = 0x03C5, [upsilonCap] = 0x03A5, 
    [phi] = 0x03C6,     [phiCap] = 0x03A6,
    [chi] = 0x03C7,     [chiCap] = 0x03A7,
    [psi] = 0x03C8,     [psiCap] = 0x03A8,
    [omega] = 0x03C9,   [omegaCap] = 0x03A9,
    [omegaPi] = 0x03D6, [phiEmptySet] = 0x03D5 ,

};