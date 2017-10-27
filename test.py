import numpy as np
import matplotlib.pyplot as plt
from pylab import genfromtxt 
#from scipy.interpolate import spline
import os

if __name__ == "__main__":
    caminhos    = ["vectorsTime/crescente/","vectorsTime/decrescente/","vectorsTime/random/"]
    txts        = ["bubble.txt","insertion.txt","merge.txt","quick.txt","selection.txt"]
    
    
    matCrescente    = np.genfromtxt(caminhos[0]+txts[4])
    matDecrescente  = np.genfromtxt(caminhos[1]+txts[4])
    matRandom       = np.genfromtxt(caminhos[2]+txts[4])       

    plt.plot( matCrescente[:,0],matCrescente[:,1],       label = "Crescente")
    plt.plot( matDecrescente[:,0],matDecrescente[:,1],   label = "Decrescente")
    plt.plot( matRandom[:,0],matRandom[:,1],             label = "Random")
    
    plt.title(txts[4].split(".")[0])
    plt.xlabel('tamanho')
    plt.ylabel('tempo(clocks)')
    plt.legend()
    plt.grid(True)
    plt.savefig("graphData/"+txts[4].split(".")[0]+".jpg")
            


    #mat0 = np.genfromtxt(caminhos[0])
    #mat1 = np.genfromtxt("vectorsTime/decrescente/quick.txt")
    
    #print mat1[:,1]
    #print mat0[:,1]
    
    '''
    mat3 = genfromtxt("vectorsTime/random/quick.txt")
            
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
    '''
