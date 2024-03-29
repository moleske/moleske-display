[EntryStyle]
X=0
Y=20r
W=300
FontColor=#TextColor#
SolidColor=0,0,0,1
ClipString=1

[MeterBack]
Meter=Shape
Shape=Rectangle 0,0,300,153 | Fill Color 0,0,0,127
UpdateDivider=-1

[Variables]
CdataSubsitution="<![CDATA[":"","]]>":"","![CDATA[":"","]]":""

[MeasureTitle]
Measure=WebParser
URL=[MeasureSite]
StringIndex=1
Substitute=#CdataSubsitution#

[MeasureSiteLink]
Measure=WebParser
URL=[MeasureSite]
StringIndex=2

[MeterSiteTitle]
Meter=String
MeasureName=MeasureTitle
X=0
Y=0
W=300
FontColor=#TextColor#
FontSize=12
FontWeight=700
SolidColor=0,0,0,1
LeftMouseUpAction=["[MeasureSiteLink]"]
ToolTipText=[MeasureSiteLink]
DynamicVariables=1

[MeasureEntryOneTitle]
Measure=WebParser
URL=[MeasureSite]
StringIndex=3
Substitute=#CdataSubsitution#

[MeasureEntryOneLink]
Measure=WebParser
URL=[MeasureSite]
StringIndex=4
Substitute=#CdataSubsitution#

[MeterEntryOne]
Meter=String
MeasureName=MeasureEntryOneTitle
MeterStyle=EntryStyle
LeftMouseUpAction=["[MeasureEntryOneLink]"]
ToolTipText=[MeasureEntryOneLink]
MouseOverAction=!Execute [!SetOption "MeterEntryOne" "FontColor" "#TextHoverColor#"][!Update]
MouseLeaveAction=!Execute [!SetOption "MeterEntryOne" "FontColor" "#TextColor#"][!Update]
DynamicVariables=1

[MeasureEntryTwoTitle]
Measure=WebParser
URL=[MeasureSite]
StringIndex=5
Substitute=#CdataSubsitution#

[MeasureEntryTwoLink]
Measure=WebParser
URL=[MeasureSite]
StringIndex=6
Substitute=#CdataSubsitution#

[MeterEntryTwo]
Meter=String
MeasureName=MeasureEntryTwoTitle
MeterStyle=EntryStyle
LeftMouseUpAction=["[MeasureEntryTwoLink]"]
ToolTipText=[MeasureEntryTwoLink]
MouseOverAction=!Execute [!SetOption "MeterEntryTwo" "FontColor" "#TextHoverColor#"][!Update]
MouseLeaveAction=!Execute [!SetOption "MeterEntryTwo" "FontColor" "#TextColor#"][!Update]
DynamicVariables=1

[MeasureEntryThreeTitle]
Measure=WebParser
URL=[MeasureSite]
StringIndex=7
Substitute=#CdataSubsitution#

[MeasureEntryThreeLink]
Measure=WebParser
URL=[MeasureSite]
StringIndex=8
Substitute=#CdataSubsitution#

[MeterEntryThree]
Meter=String
MeasureName=MeasureEntryThreeTitle
MeterStyle=EntryStyle
LeftMouseUpAction=["[MeasureEntryThreeLink]"]
ToolTipText=[MeasureEntryThreeLink]
MouseOverAction=!Execute [!SetOption "MeterEntryThree" "FontColor" "#TextHoverColor#"][!Update]
MouseLeaveAction=!Execute [!SetOption "MeterEntryThree" "FontColor" "#TextColor#"][!Update]
DynamicVariables=1

[MeasureEntryFourTitle]
Measure=WebParser
URL=[MeasureSite]
StringIndex=9
Substitute=#CdataSubsitution#

[MeasureEntryFourLink]
Measure=WebParser
URL=[MeasureSite]
StringIndex=10
Substitute=#CdataSubsitution#

[MeterEntryFour]
Meter=String
MeasureName=MeasureEntryFourTitle
MeterStyle=EntryStyle
LeftMouseUpAction=["[MeasureEntryFourLink]"]
ToolTipText=[MeasureEntryFourLink]
MouseOverAction=!Execute [!SetOption "MeterEntryFour" "FontColor" "#TextHoverColor#"][!Update]
MouseLeaveAction=!Execute [!SetOption "MeterEntryFour" "FontColor" "#TextColor#"][!Update]
DynamicVariables=1

[MeasureEntryFiveTitle]
Measure=WebParser
URL=[MeasureSite]
StringIndex=11
Substitute=#CdataSubsitution#

[MeasureEntryFiveLink]
Measure=WebParser
URL=[MeasureSite]
StringIndex=12
Substitute=#CdataSubsitution#

[MeterEntryFive]
Meter=String
MeasureName=MeasureEntryFiveTitle
MeterStyle=EntryStyle
LeftMouseUpAction=["[MeasureEntryFiveLink]"]
ToolTipText=[MeasureEntryFiveLink]
MouseOverAction=!Execute [!SetOption "MeterEntryFive" "FontColor" "#TextHoverColor#"][!Update]
MouseLeaveAction=!Execute [!SetOption "MeterEntryFive" "FontColor" "#TextColor#"][!Update]
DynamicVariables=1

[MeasureEntrySixTitle]
Measure=WebParser
URL=[MeasureSite]
StringIndex=13
Substitute=#CdataSubsitution#

[MeasureEntrySixLink]
Measure=WebParser
URL=[MeasureSite]
StringIndex=14
Substitute=#CdataSubsitution#

[MeterEntrySix]
Meter=String
MeasureName=MeasureEntrySixTitle
MeterStyle=EntryStyle
LeftMouseUpAction=["[MeasureEntrySixLink]"]
ToolTipText=[MeasureEntrySixLink]
MouseOverAction=!Execute [!SetOption "MeterEntrySix" "FontColor" "#TextHoverColor#"][!Update]
MouseLeaveAction=!Execute [!SetOption "MeterEntrySix" "FontColor" "#TextColor#"][!Update]
DynamicVariables=1

[MeasureEntrySevenTitle]
Measure=WebParser
URL=[MeasureSite]
StringIndex=15
Substitute=#CdataSubsitution#

[MeasureEntrySevenLink]
Measure=WebParser
URL=[MeasureSite]
StringIndex=16
Substitute=#CdataSubsitution#

[MeterEntrySeven]
Meter=String
MeasureName=MeasureEntrySevenTitle
MeterStyle=EntryStyle
LeftMouseUpAction=["[MeasureEntrySevenLink]"]
ToolTipText=[MeasureEntrySevenLink]
MouseOverAction=!Execute [!SetOption "MeterEntrySeven" "FontColor" "#TextHoverColor#"][!Update]
MouseLeaveAction=!Execute [!SetOption "MeterEntrySeven" "FontColor" "#TextColor#"][!Update]
DynamicVariables=1