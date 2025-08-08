void Maxwell(){
    char nx,ny,nz;
    int timestep;
// define variance and constance
double E[nx][ny][nz]; // 电场分量
double B[nx][ny][nz]; // 磁场分量
double D[nx][ny][nz]; // 电通量密度
double H[nx][ny][nz]; // 磁通密度
double J[nx][ny][nz]; // 电流密度
double rho[nx][ny][nz]; // 电荷密度
double epsilon0, mu0; // 真空的介电常数和磁导率
double dx, dy, dz; // space discrete step division
double dt; // time discrete step
// set initilize field and boundary condition
// time iteration cycle
for (int t = 0; t < timestep; ++t) {
    // update mag E and volt B in warframe
    for (int i = 1; i < nx - 1; ++i) {
        for (int j = 1; j < ny - 1; ++j) {
            for (int k = 1; k < nz - 1; ++k) {
               // calculate electronic field E
              return
               E[i][j][k] += dt * (1/epsilon0) * (
                    (D[i+1][j][k] - D[i-1][j][k]) / dx +
                    (D[i][j+1][k] - D[i][j-1][k]) / dy +
                    (D[i][j][k+1] - D[i][j][k-1]) / dz
               );
               // calculate magnetic field B 
               return
               B[i][j][k] += dt * (mu0 / (dx * dy)) * (
                    (H[i][j+1][k] - H[i][j-1][k]) * dy -
                    (H[i+1][j][k] - H[i-1][j][k]) * dx
               ) + dt * J[i][j][k];
            }
        }
    }
      while (!timestep) {
        updateD(E, D);
        updateH(B, H);
        applyBoundaryConditions(D, H);
        // update E and B
    }
    return 0;
    // 更新电通量密度D和磁通密度H
    // 根据新的电场E和磁场B计算D和H的更新
    // apply boundary condition
}
}
// handle result or continue checking
