#Inclusion des bibliothèques

import RPi.GPIO as GPIO			#Gestion des entrés-sorties
from picamera import PiCamera 	#Gestion de la caméra
import Adafruit_DHT				#Gestion du DHTXX
import time						#Gestion du temps
from WebServer import WebServer

#Paramètres
PIR_Pin = 12   #Notation BCM
LED_Pin = 24		#Notation BCM
DHT_Pin = 21	#Notation GPIO
#Initialisation

camera = PiCamera()
dht = Adafruit_DHT.DHT22
server = WebServer()

def initPIR():
	"""Initalise la broche PIR en entrée"""
	GPIO.setmode(GPIO.BCM)
	GPIO.setup(PIR_Pin, GPIO.IN)
	
def initLED():
	"""Initalise la broche LED en sortie"""
	GPIO.setmode(GPIO.BCM)
	GPIO.setup(LED_Pin, GPIO.OUT)
	
def initCamera():
	"""Initalise la camera"""
	camera.resolution = (800, 600)
	camera.framerate = 15
 
def initWebServer():
	
	server.setLocationFile("index.html")
	server.setPort(9000)
	server.run()
 
def generateWebPage():
    
    print("todo")
	
def takePicture():
	"""Allume la LED, prend une photo et arrete la LED"""
	GPIO.output(LED_Pin, GPIO.HIGH)
	camera.capture('Photos/Nichoir_V0.jpg')
	GPIO.output(LED_Pin, GPIO.LOW)
	
	readDHTValues()
	
def readDHTValues():
	
	humidity, temperature = Adafruit_DHT.read(dht, DHT_Pin)	
	if(humidity is not None and temperature is not None):
		print('Temp={0:0.1f} °C  Humidity={1:0.1f}%'.format(temperature, humidity))
	else:
		print('Failed to get reading. Try again!')
	

def main():
	
	
	print("Nichoir_V0 : Init")
	
	initPIR()
	initLED()
	initCamera()
	initWebServer()
	
	print("Nichoir_V0 : Start")
	
	while(True):
		
		if( GPIO.input(PIR_Pin) == True):
			print("Motion detected !")
			takePicture()
			time.sleep(20)
            
            
if(__name__ == "__main__"):
	
	main()
