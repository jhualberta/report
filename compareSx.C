{

  TFile *f0 = new TFile("fSpatial_1e5evts_Ecut_allprocess.root");
  TFile *f1 = new TFile("fSpatial_1e5evts_Etot_allprocess.root");
  TFile *f2 = new TFile("fSpatial_1e5evts_Ecut_comptonOnly.root");
  TFile *f3 = new TFile("fSpatial_1e5evts_Etot_comptonOnly.root");

  hx0 = (TH1F*)f0->Get("hSx");hy0 = (TH1F*)f0->Get("hSy");hz0 = (TH1F*)f0->Get("hSz");
//
  hx1 = (TH1F*)f1->Get("hSx");hy1 = (TH1F*)f1->Get("hSy");hz1 = (TH1F*)f1->Get("hSz");
//
  hx2 = (TH1F*)f2->Get("hSx");hy2 = (TH1F*)f2->Get("hSy");hz2 = (TH1F*)f2->Get("hSz");
//
  hx3 = (TH1F*)f3->Get("hSx");hy3 = (TH1F*)f3->Get("hSy");hz3 = (TH1F*)f3->Get("hSz");
//
  hx0->SetLineColor(kRed);
  hy0->SetLineColor(kRed);
  hz0->SetLineColor(kRed);

  hx1->SetLineColor(kBlue);
  hy1->SetLineColor(kBlue);
  hz1->SetLineColor(kBlue);

  hx2->SetLineColor(kGreen+2);
  hy2->SetLineColor(kGreen+2);
  hz2->SetLineColor(kGreen+2);

//
  hx0->GetXaxis()->SetRangeUser(-3000,3000);
  hy0->GetXaxis()->SetRangeUser(-3000,3000);
  hz0->GetXaxis()->SetRangeUser(-3000,3000);

  hx1->GetXaxis()->SetRangeUser(-3000,3000);
  hy1->GetXaxis()->SetRangeUser(-3000,3000);
  hz1->GetXaxis()->SetRangeUser(-3000,3000);

  hx2->GetXaxis()->SetRangeUser(-3000,3000);
  hy2->GetXaxis()->SetRangeUser(-3000,3000);
  hz2->GetXaxis()->SetRangeUser(-3000,3000);

  hx3->GetXaxis()->SetRangeUser(-3000,3000);
  hy3->GetXaxis()->SetRangeUser(-3000,3000);
  hz3->GetXaxis()->SetRangeUser(-3000,3000);
///
  hx1->Scale(hx0->GetMaximum()/hx1->GetMaximum());
  hy1->Scale(hy0->GetMaximum()/hy1->GetMaximum());
  hz1->Scale(hz0->GetMaximum()/hz1->GetMaximum());

  TCanvas *c = new TCanvas("c","",800,600);
  c->Divide(2,2);
  c->cd(1);gPad->SetLogy();hx0->Draw();hx1->Draw("sames");hx2->Draw("sames");hx3->Draw("sames");
  c->cd(2);gPad->SetLogy();hy0->Draw();hy1->Draw("sames");hy2->Draw("sames");hy3->Draw("sames");
  c->cd(3);gPad->SetLogy();hz0->Draw();hz1->Draw("sames");hz2->Draw("sames");hz3->Draw("sames");

}
