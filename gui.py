import tkinter

# 定义一个窗体

top = tkinter.Tk(className="校记录登记")

# 将其加入主循环
Label(top,text="学号").grid(row=0)
Label(top,text="姓名").grid(row=1)
Label(top,text="进入时间").grid(row=2)

e1=Entry(top)
e2=Entry(top)
e3=Entry(top)

e1.grid(row=0,column=1)
e2.grid(row=1,column=1)
e3.grid(row=2,column=1)
top.mainloop()
