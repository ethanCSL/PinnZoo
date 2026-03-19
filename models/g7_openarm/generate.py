import os
import sys

os.chdir(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.abspath("../../src"))
from symbolic_generator import SymbolicGenerator, KinematicsOrientation

symb_gen = SymbolicGenerator(
    "g7_openarm.urdf",
    floating=True,
    kinematics_bodies=[
        "AMR_FLW_link",
        "AMR_FRW_link",
        "AMR_RLW_link",
        "AMR_RRW_link",
        "gripper_LL_link",
        "gripper_RR_link",
    ],
    actuated_dofs=slice(6, 32),
    kinematics_ori=KinematicsOrientation.Quaternion,
    gen_dir="./generated_code/g7_openarm_quat",
    mesh_dir="meshes",
)
symb_gen.generate()
