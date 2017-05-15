firSize=8;

for fi=0:firSize-1
for fii=0:firSize-1
    wei=mod(fi+firSize-fii,firSize);
    X=sprintf('wei: %d, fii: %d, fi: %d',wei,fii,fi);
    disp(X);
end
end