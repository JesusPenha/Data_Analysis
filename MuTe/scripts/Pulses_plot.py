import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt("Pulses_2.dat")

plt.figure()
plt.plot(np.sum(data,axis=0))
plt.show()
