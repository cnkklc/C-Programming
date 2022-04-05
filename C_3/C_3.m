clear all;
close all;
clc;

vm=220*sqrt(2);
ff=50; % temel frekans
fs=1000; % örnekleme frekansı
%t=1:1:((1/ff)/(1/fs));
t=1:1:(fs/ff);
for i=1:1:length(t)
    
   w(i)=2*pi*ff*i*(1/fs); 
   va(i)=vm*sin(w(i));
   %vb(i)=vm*sin(w(i)+alfa);
   %vc(i)=vm*sin(w(i)-alfa);
   

     
end
figure(1)
plot(t,va,'r');
hold on
grid on
legend ('Va');

