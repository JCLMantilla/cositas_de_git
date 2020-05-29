import numpy as np
import matplotlib.pyplot as plt
data=np.loadtxt("data.dat")
plt.figure()
plt.plot(data[:,1], data[:,0],label="Caida libre")
plt.savefig("grafica.pdf")