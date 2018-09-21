{
 TCanvas *c1 = new TCanvas("c1","c1",800,500);
   gStyle->SetOptStat(0);
 int n =10;
 //PPO
 double NHits[10]={18.33,28.56,45.58,63.24,81.01,98.53,116,133.1,150.3,167.7};
 double ex[10]={};
 double ey[10]={2.624,5.558,8.122,9.873,11.42,12.97,14.26,15.39,16.74,17.5};//error
 double E[10]={1,2,3,4,5,6,7,8,9,10};
 TGraph *gr = new TGraphErrors(n,E,NHits,ex,ey);

 
 //bis-MSB
 double NHits2[10]={18.3,29.18,47.24,65.95,84.92,103.3,122.4,140.7,158.7,177.4};
 double e2x[10]={};
 double e2y[10]={2.576,5.817,8.717,10.79,12.35,13.97,15.48,17.03,17.97,19.47};
 TGraph *g2 = new TGraphErrors(n,E,NHits2,e2x,e2y);

 //water, no trigger in 1 MeV
 double NHits1[9]={18.6,22.12,27.18,33.74,40.67,47.76,54.61,61.7,68.45};
 double e1x[9]={};
 double e1y[9]={2.48,3.528,5.248,6.466,7.371,8.195,8.68,9.34,9.958};//3,7
 double E1[9]={2,3,4,5,6,7,8,9,10};
 TGraph *g1 = new TGraphErrors(n-1,E1,NHits1,e1x,e1y);

 TMultiGraph *mg = new TMultiGraph();
 gr->SetName("gr");
 gr->GetXaxis()->SetTitle("E [MeV]");
 gr->GetYaxis()->SetTitle("Mean Nhits");
 gr->SetTitle("0.1 ppm PPO");
 gr->SetMarkerColor(2);
 gr->SetMarkerStyle(23);
 gr->SetMarkerSize(2);
 mg->Add(gr,"LP");
 //gr->Draw("P");
 
 mg->Add(g1,"l*");
 g1->SetTitle("water");
 g1->SetMarkerColor(4);
 g1->SetMarkerStyle(21);
 g1->SetMarkerSize(2);


// g2->SetTitle("bis-MSB");
// g2->SetMarkerColor(3);
// g2->SetLineStyle(5);
// g2->SetMarkerStyle(8);
// g2->SetMarkerSize(2);
// mg->Add(g2,"LP");
 

 mg->Draw("ap");
 gr->GetXaxis()->SetTitle("E [MeV]");
 gr->GetYaxis()->SetTitle("Mean Nhits");
 g1->SetLineStyle(7);
 //mg->Draw("a");   
 
 TLegend *leg = new TLegend(0.1,0.7,0.48,0.9);
 leg->AddEntry(gr,"0.1 ppm PPO","Lp");
 //leg->AddEntry(g2,"0.05 ppm bis-MSB","Lp");
 leg->AddEntry(g1,"water","Lp"); 
 leg->Draw("same");

 c1->Modified();
 return c1;


}
