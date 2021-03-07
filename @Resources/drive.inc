[MeasureDisk]
Measure=FreeDiskSpace
Drive=#Drive#
InvertMeasure=1
UpdateDivider=5

[MeasureDiskReads]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
Name=#Drive#

[MeasureDiskReadsScaled]
Measure=Calc
Formula=MeasureDiskReads

[MeasureDiskWrites]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
Name=#Drive#

[MeasureDiskWritesScaled]
Measure=Calc
Formula=MeasureDiskWrites

[DiskInnerEdge]
Meter=ROUNDLINE
MeterStyle=InnerEdge

[DiskOuterEdge]
Meter=ROUNDLINE
MeterStyle=OuterEdge

[MeterDisk]
Meter=Roundline
MeasureName=MeasureDisk
MeterStyle=Interior

[MeterDiskText]
Meter=String
MeasureName=MeasureDisk
LeftMouseUpAction=["#Drive#\"]
X=40
Y=(#Radius#/2)r
Text="#Drive#\ %1B"
DynamicVariables=1
AutoScale=1
FontColor=#TextColor#
FontSize=12
InlineSetting=Weight | 700
InlinePattern=^(.*) \d
SolidColor=0,0,0,1

[MeterDiskReadsText]
Meter=String
MeasureName=MeasureDiskReadsScaled
X=140
Text="Reads: %1b/s"
DynamicVariables=1
AutoScale=1
FontColor=#TextColor#
FontSize=12
InlineSetting=Weight | 700
InlinePattern=^(.*) \d
SolidColor=0,0,0,1
MeterStyle=Interior

[MeterDiskWritesText]
Meter=String
MeasureName=MeasureDiskWritesScaled
X=140
Y=(#Radius#)r
Text="Writes: %1b/s"
DynamicVariables=1
AutoScale=1
FontColor=#TextColor#
FontSize=12
InlineSetting=Weight | 700
InlinePattern=^(.*) \d
SolidColor=0,0,0,1