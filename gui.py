import tkinter as tk
import tkinter.messagebox as mbox
 

class MainUI(tk.Frame):
# Application构造函数，master为窗口的父控件
 def __init__(self, master = None):
# 初始化Application的Frame部分 
  tk.Frame.__init__(self, master)
# 显示窗口，并使用grid布局
  self.grid()
# 创建控件
  self.createWidgets()
 # 创建控件
 def createWidgets(self):
# 创建一个标签，输出要显示的内容
  self.firstLabel = tk.Label(self,text="登记姓名、学号和进入时间")

# 设定使用grid布局
  self.firstLabel.grid()
# 创建一个按钮，用来触发answer方法
  self.clickButton = tk.Button(self,text="进入",command=self.answer)
# 设定使用grid布局
  self.clickButton.grid()
 def answer(self):
# 我们通过 messagebox 来显示一个提示框
   mbox.showinfo("「在校记录登记」",'''学校人员+1''')
    
# 创建一个MainUI对象
app = MainUI()
# 设置窗口标题
app.master.title('「在校记录登记」')
# 设置窗体大小
app.master.geometry('300x200')
# 主循环开始
app.mainloop()
