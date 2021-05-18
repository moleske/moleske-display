# Another Rainmeter Display

## Skins
- 5 RSS Feeds
- Upload/Download Speeds
- Local/External IP Addresss
- 4 CPU cores
- RAM Usage
- VRAM (GPU) Usage
- 2 Drives Storage/Read Speeds/Write Speeds
- Recycle Bin Status
- Current/Today's/Tonight's Forecast/3 Day Forecast from weather.gov

## Requirements
Needs Windows 10 with support for Performance Monitor

## Notes about specific skins

### RSS Feeds
- To change the site, update the URL field in the file
- If changing the site, may need to update the #Item# variable for each entry

### Upload/Download Speeds
- Change `MaxValue` in the measures `NetIn` or `NetOut` to your value

### CPU
- Assumes four cores, copy pasta to add more

### VRAM (GPU)
- Change `MaxValue` in the measure `MeasureTotalGPUVRAM` to your value


### Drives
- Assumes `C:\` and `E:\`, change drive variable to change them.  Copy pasta to add more drives

### Weather
- To change location, you need to update two URLs
  - In `MeasureGridpoints` to use your latitude and logitude for forecasts
  - In `MeasureCurrent` to use your station to get current weather
- There's some leftover attempts at using `MeasureGridpoints` to find your station for current weather but was abandoned out of confusion.  You can use it as guidance to update your station