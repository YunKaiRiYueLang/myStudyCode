from tkinter import *
from tkinter import messagebox
import tkinter
window = Tk()
window.title("演示用的主界面")
window.geometry('500x300')

# 注意标签的文字属性改为了textvariable而不是text。var为一个StringVar变量，用于接收hitMe 传出的字符内容
var = StringVar()
l = Label(window, textvariable=var, bg='green',
          font=('Arial', 12), width=30, height=2)
l.pack()

onHit = False
freq = 0


def hitMe():
    global onHit  # 确定onhit为一个全局变量
    global freq
    if onHit == False:
        onHit = True
        var.set('you hit me')
    else:
        onHit = False
        var.set('xx')

    freq = freq+1

    if freq > 4:
        # messagebox.showinfo('title', '内容 你已经点击超过4次')
        #from tkinter import messagebox 需要加上
        messagebox.showerror('title','error 你已经点击超过4次')


b = Button(window, text='hit me', font=('Arial', 12),
           width=10, height=1, command=hitMe)
b.pack()
from tkinter import filedialog
def filedialogClick():
    file=filedialog.askopenfilename()
    var.set(file)
    # var=file
b2 =Button(window,text='file dialog',font=('Arial,12'),width=10,height=1,command=filedialogClick)
b2.pack()
# l2=Label(window,text='显示图片的区域',width=600,height=600)
# l2.pack()


statusbar = Label(window, text="on the way…", bd=1, relief=SUNKEN, anchor=W)
# bd 设置边框的大小  relief 设定标签的显示方式。我们希望标签看起来有些凹陷
# anchor 设置标签内文本的对齐方式。W 意思是 West 或左对齐。
# sunken 英文  凹陷
statusbar.pack(side=BOTTOM, fill=X)
# 此状态栏位于 GUI 的底部，如果我们调整窗口大小，它将始终覆盖窗口的整个宽度。
# 这里的side可以赋值为LEFT  RTGHT TOP  BOTTOM。
# fill=    None (default)表示保持控件原尺寸.X 表示填充水平方向.Y 表示填充垂直方向.BOTH 表示水平和垂直方向都填充.
window.mainloop()
