[Variables]
Radius=18

[InnerEdge]
Solid=1
AntiAlias=1
StartAngle=0
RotationAngle=(2*PI)
W=(2*#Radius#)
H=(2*#Radius#)
LineStart=(#Radius#*0.60)
LineLength=(#Radius#*0.55)
LineColor=#TextColor#

[OuterEdge]
Solid=1
AntiAlias=1
StartAngle=0
RotationAngle=(2*PI)
W=(2*#Radius#)
H=(2*#Radius#)
LineStart=(#Radius#*0.95)
LineLength=#Radius#
LineColor=#TextColor#

[Interior]
Solid=1
AntiAlias=1
StartAngle=0
RotationAngle=(2*PI)
W=(2*#Radius#)
H=(2*#Radius#)
LineStart=(#Radius#*0.65)
LineLength=(#Radius#*0.90)
LineColor=#TextColor#