import numpy as np
import matplotlib.pylab as plt

#BArco1
#BArco2
#Barco3
#Braco4
#BArco5
#BArco6

#Las unidades estan en km
Bx1=4
By1=100
Bx2=10
By2=5
Bx3=12
By3=80
Bx4=80
By4=50
Bx5=50
By5=50
Bx6=40
By6=200

def verosimilitud(y_obs,y_mod):
	chi_cuadrado=(-1.0/2.0)*sum((y_obs-y_mod)**2)
	return np.exp(chi_cuadrado)

def modelo(x_obs,m,b):
	return x_obs*m+b

sigma=1
pasos=10000

