from setuptools import setup
import os

package_name = 'mg400_thesis'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    data_files=[
      # ament index resource
      ('share/ament_index/resource_index/packages',
       ['resource/' + package_name]),
      # package.xml
      ('share/' + package_name, ['package.xml']),
      # launch files
      ('share/' + package_name + '/launch',
       ['launch/gazebo.launch.py']),
      # only the composite URDF
      ('share/' + package_name + '/urdf',
       ['urdf/mg400_sim.xacro']),
      # Gazebo world
      ('share/' + package_name + '/worlds',
       ['worlds/mg400.world']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='olha',
    maintainer_email='olleshchak@gmail.com',
    description='Gazebo simulation package for Dobot MG400',
    license='Apache-2.0',
    entry_points={
        'console_scripts': [],
    },
)