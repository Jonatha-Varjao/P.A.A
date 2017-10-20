import matplotlib
import numpy as np
from matplotlib import pyplot
from pylab import genfromtxt 
from scipy.interpolate import spline

if __name__ == "__main__":
    caminhos = ["","","",""]

    mat0 = np.genfromtxt("vectorsTime/crescente/quick.txt")
    mat1 = np.genfromtxt("vectorsTime/decrescente/quick.txt")
    
    print mat1[:,1]
    print mat0[:,1]
    
    #mat3 = genfromtxt("vectorsTime/random/quick.txt")
            
    pyplot.title('QuickSort')
    
    
    xnew = np.linspace(mat0[:,0].min(),mat0[:,1].max(),300)
    power_smooth = spline(T,power,xnew)

    pyplot.plot( mat0[:,0],mat0[:,1], label = "Crescente")
    pyplot.plot( mat1[:,0],mat1[:,1], label = "Decrescente")

    pyplot.xlabel('tamanho')
    pyplot.ylabel('tempo(clocks)')
    pyplot.grid(True)
    pyplot.legend()
    pyplot.savefig("graphData/quick.jpg")

