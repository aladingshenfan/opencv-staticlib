#ifndef _OPENCVLIB_H
#define _OPENCVLIB_H

#include "..\\opencvlib\\include\\opencv2\\opencv.hpp"  

#ifdef _DEBUG 

#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_aruco320d.lib") 
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_bgsegm320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_bioinspired320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_calib3d320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_ccalib320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_core320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_datasets320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_dnn320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_dpm320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_face320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_features2d320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_flann320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_fuzzy320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_highgui320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_imgcodecs320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_imgproc320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_line_descriptor320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_ml320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_objdetect320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_optflow320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_phase_unwrapping320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_photo320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_plot320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_reg320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_rgbd320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_saliency320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_shape320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_stereo320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_stitching320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_structured_light320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_superres320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_surface_matching320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_text320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_tracking320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_video320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_videoio320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_videostab320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_xfeatures2d320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_ximgproc320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_xobjdetect320d.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_xphoto320d.lib")
                 
#pragma comment( lib, "vfw32.lib" )   
#pragma comment( lib, "comctl32.lib" )

#else 
	
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_aruco320.lib") 
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_bgsegm320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_bioinspired320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_calib3d320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_ccalib320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_core320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_datasets320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_dnn320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_dpm320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_face320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_features2d320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_flann320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_fuzzy320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_highgui320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_imgcodecs320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_imgproc320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_line_descriptor320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_ml320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_objdetect320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_optflow320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_phase_unwrapping320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_photo320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_plot320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_reg320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_rgbd320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_saliency320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_shape320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_stereo320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_stitching320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_structured_light320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_superres320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_surface_matching320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_text320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_tracking320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_video320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_videoio320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_videostab320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_xfeatures2d320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_ximgproc320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_xobjdetect320.lib")
#pragma comment(lib, "..\\opencvlib\\x86\\vc12\\lib\\opencv_xphoto320.lib")
 
#pragma comment( lib, "vfw32.lib" )   
#pragma comment( lib, "comctl32.lib" )

#endif

using namespace cv; 

#endif