from tkinter import *
window = Tk()
window.title("演示用的主界面")
window.geometry('500x300')

# 注意标签的文字属性改为了textvariable而不是text。var为一个StringVar变量，用于接收hitMe 传出的字符内容
var = StringVar()
l = Label(window, textvariable=var, bg='green', font=('Arial', 12), width=30, height=2)
l.pack()

# 定义一个函数，供点击Button按键时调用，调用命令参数command=函数名
onHit = False


def hitMe():
    global onHit# 确定onhit为一个全局变量
    if onHit == False:
        onHit = True
        var.set('you hit me')
    else:
        onHit=False
        var.set('xx')#StringVar的set方法，随时改label上显示的字符。


b = Button(window, text='hit me', font=('Arial', 12),
           width=10, height=1, command=hitMe)
b.pack()

window.mainloop()
