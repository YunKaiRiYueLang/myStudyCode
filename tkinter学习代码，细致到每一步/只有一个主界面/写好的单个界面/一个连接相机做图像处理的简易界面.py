import tkinter as tk
import tkinter
from tkinter import Frame, filedialog


# 初始布局 [ 1000x600]  [l,l_show_image, read_img_button,start_camera_btn,stop_cam_btn],[800,0,0,0,610,353,610,403,610,453]
# 改动布局  [300x170]        [l,read_img_button,start_camera_btn,stop_cam_btn]          [160,0,30,20,30,55,30,90]
text1='''
WAIT...
'''
class Gui(tk.Tk):
    window=tk.Tk()
    var =tk.StringVar()
    var.set(text1)
    gui_num=0
    CheckVar1 = tk.IntVar()
    CheckVar2 = tk.IntVar()
    def __init__(self) -> None:  
        self.window.title("cv demo")
        self.window.geometry('310x200')
        # self.window.geometry('600x570')

        self.l = tk.Label(self.window, textvariable=self.var ,anchor='nw',font=('微软雅黑',25),width=15, height=15)#,background="blue"
        self.l.place(x=140,y=0)
        # self.l_show_image=tk.Label(self.window)
        # self.l_show_image.place(x=0,y=0)
        b_read_img=tk.Button(self.window,text='read picture',width=10, height=1, command=self.read_pic)
        b_read_img.place(x=10,y=20)
        b_cam_stream=tk.Button(self.window,text='start camera',width=10, height=1, command=self.get_camera_stream)
        b_cam_stream.place(x=10,y=55)
        b_stop_cam=tk.Button(self.window,text='stop camera',width=10, height=1, command=self.stop_cam)
        b_stop_cam.place(x=10,y=90)
        # self.b_load_model=tk.Button(self.window,text='load model',width=10, height=1, command=utils.setModel)
        self.b_load_model=tk.Button(self.window,text='load model',width=10, height=1)
        self.b_load_model.place(x=10,y=125)

        # 又添加的界面
        self.l_frame_rate=tk.Label(self.window,text='frame rate: ',anchor='nw',width=20, height=1)#,background="blue"
        self.l_frame_rate.place(x=140,y=130)
    # //加错位置了
        self.df_check_btn=tk.Checkbutton(self.window,text='save defect',variable=self.CheckVar1 ,onvalue = 1,offvalue=0,width=10, height=1,
        command=self.check_save)
        self.df_check_btn.place(x=10,y=170)
    
        self.window.mainloop()
        print('结束')


        
        # self.df_check_btn.focus_force()
        # df_check_btn.pack(self.window)
        # df_check_btn.invoke(self.read_pic)
        
        pass
    def check_save(self):
        pass
    def read_pic(self):
        pass

# 用于显示图像，虽然，写错了不能用
    def master(self):
        pass
    def get_camera_stream(self):
        global conti
        conti=True
        pass
    def stop_cam(self):
        global conti
        conti=False
    def upgrade_label(self):
        pass

    
app= Gui()
