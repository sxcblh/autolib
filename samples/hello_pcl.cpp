#include <pcl/point_types.h>
#include <pcl/point_cloud.h>
#include <pcl/visualization/pcl_visualizer.h>

int main(int argc, char **argv)
{
    pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZRGB>());
    for(int i=0; i<1000; i++){
        pcl::PointXYZRGB pt;
        pt.x = std::rand();
        pt.y = std::rand();
        pt.z = std::rand();
        pt.r = 0;
        pt.g = 255;
        pt.b = 0;

        cloud->push_back(pt);
    }

    std::shared_ptr<pcl::visualization::PCLVisualizer> _pcl_viewer;
    _pcl_viewer.reset(new pcl::visualization::PCLVisualizer("random point cloud"));                    
    _pcl_viewer->setBackgroundColor (0, 0, 0);                                                  
    _pcl_viewer->addCoordinateSystem(1.0, "axes");

    _pcl_viewer->addPointCloud<pcl::PointXYZRGB>(cloud, "cloud");

    while(!_pcl_viewer->wasStopped()) {                                                            
        _pcl_viewer->spinOnce(500);                                                             
        boost::this_thread::sleep(boost::posix_time::milliseconds(10));                         
    }                

    return 0;
}