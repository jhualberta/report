{
  TFile *f1 = new TFile("Convolved_SaveTest_Jeff_107055_Sx.root");
  TFile *f2 = new TFile("Convolved_SaveTest_JeffMC_107055_Sx.root");
 
  hNfitX_data = (TH1F*)f1->Get("hNfit");
  hNfitX_mc = (TH1F*)f2->Get("hNfit");
  
  TCanvas c;
  c->SetLogy();
  c->SetGrid();

  hNfitX_data->GetXaxis()->SetRangeUser(-1500,1500);
  hNfitX_data->GetXaxis()->SetTitle("x_{fit} [mm]");
  hNfitX_data->GetYaxis()->SetTitle("Number of Events");
  hNfitX_data->SetLineColor(kRed);

  hNfitX_data->Draw();
  hNfitX_mc->GetXaxis()->SetRangeUser(-1500,1500);
  hNfitX_mc->Draw("same");

  TLegend *legend = new TLegend(0.1,0.7,0.48,0.9);
  legend->AddEntry(hNfitX_data,"data","l");
  legend->AddEntry(hNfitX_mc,"MC","l");
  legend->Draw();
 
}
