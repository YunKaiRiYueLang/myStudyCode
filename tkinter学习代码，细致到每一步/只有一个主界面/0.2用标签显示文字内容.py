from tkinter import *
window=Tk() 
window.title("演示用的主界面") 
window.geometry('500x300');

l = Label(window, text='你好！this is Tkinter', bg='green', font=('Arial', 12), width=30, height=2)
# https://www.runoob.com/python/python-tk-label.html。 这个对label的参数说的很明白的。
l.pack()#放置标签，默认自动调节位置。一般情况下都挺好用的。
window.mainloop() 
