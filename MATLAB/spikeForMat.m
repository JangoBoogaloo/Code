clear
clc
% Created by Xiang Guo

x=2;
y=1.5;
h=y*x;
t=(0:0.1:1);
result = x*y+t;
length_t = length(t)
a = result(10)
plot(t, result)
title 'Height vs Time'
xlabel 'time'
ylabel 'height'