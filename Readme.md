# calibrationtool
This project calibrates and undistort the videostream of a camera.
Furthermore, the project can transform the input image of the camera into a bird's-eye view.
All these algorithms can run in realtime.

##Camera calibration
First, a chessboard is detected to compare image points with the real object points.
The settings for this calibration are saved in the folder /settings.
![Chessboard detection](examples/chessboard_detection.jpg)
In the image above, a chessboard is detected and lines between the cross points are drawn.
