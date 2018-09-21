{
  TFile *f1 = new TFile("ResolMPnew_FitMP_2p5MeVbeta_filltop_level4400.root"); 
  TFile *f2 = new TFile("ResolMPnew_FitMP_2p5MeVbeta_fillbottom_level4400.root"); 
  TFile *f3 = new TFile("ResolMPnew_FitMP_2p5MeVbeta_fullfill_level4400.root"); 
  hRZ1 = (TH2F*)f1->Get("hfitRZ_trig"); 
  hRZ2 = (TH2F*)f2->Get("hfitRZ_trig"); 
  hRZ3 = (TH2F*)f3->Get("hfitRZ_trig"); 

  hDeltaX1 = (TH2F*)f1->Get("hDeltaX_trig");
  hDeltaX2 = (TH2F*)f2->Get("hDeltaX_trig");
  hDeltaX3 = (TH2F*)f3->Get("hDeltaX_trig");

  hRZ1->GetXaxis()->SetTitle("#sqrt{x^{2}+y^{2}} [mm]");
  hRZ1->GetYaxis()->SetTitle("z [mm]");

  hRZ2->GetXaxis()->SetTitle("#sqrt{x^{2}+y^{2}} [mm]");
  hRZ2->GetYaxis()->SetTitle("z [mm]");

  hRZ3->GetXaxis()->SetTitle("#sqrt{x^{2}+y^{2}} [mm]");
  hRZ3->GetYaxis()->SetTitle("z [mm]");

//  hRZ1->Draw("colz");

  hDeltaX1->GetXaxis()->SetTitle("x_{fit}-x_{mc} [mm]");
  hDeltaX2->GetXaxis()->SetTitle("x_{fit}-x_{mc} [mm]");
  hDeltaX3->GetXaxis()->SetTitle("x_{fit}-x_{mc} [mm]");

  hDeltaX1->GetYaxis()->SetTitle("counts");
  hDeltaX2->GetYaxis()->SetTitle("counts");
  hDeltaX3->GetYaxis()->SetTitle("counts");

  hDeltaX2->Draw();

}
