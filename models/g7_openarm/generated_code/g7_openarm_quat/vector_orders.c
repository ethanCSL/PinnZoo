#include <stdio.h>

const char* config_names[] = {
    "x",
    "y",
    "z",
    "q_w",
    "q_x",
    "q_y",
    "q_z",
    "AMR_FL_joint",
    "AMR_FLW_joint",
    "AMR_FR_joint",
    "AMR_FRW_joint",
    "AMR_RL_joint",
    "AMR_RLW_joint",
    "AMR_RR_joint",
    "AMR_RRW_joint",
    "L_1_joint",
    "L_2_joint",
    "L_3_joint",
    "L_4_joint",
    "L_5_joint",
    "L_6_joint",
    "L_7_joint",
    "gripper_LL_joint",
    "gripper_LR_joint",
    "R_1_joint",
    "R_2_joint",
    "R_3_joint",
    "R_4_joint",
    "R_5_joint",
    "R_6_joint",
    "R_7_joint",
    "gripper_RL_joint",
    "gripper_RR_joint",
    NULL
};

const char* vel_names[] = {
    "lin_v_x",
    "lin_v_y",
    "lin_v_z",
    "ang_v_x",
    "ang_v_y",
    "ang_v_z",
    "AMR_FL_joint",
    "AMR_FLW_joint",
    "AMR_FR_joint",
    "AMR_FRW_joint",
    "AMR_RL_joint",
    "AMR_RLW_joint",
    "AMR_RR_joint",
    "AMR_RRW_joint",
    "L_1_joint",
    "L_2_joint",
    "L_3_joint",
    "L_4_joint",
    "L_5_joint",
    "L_6_joint",
    "L_7_joint",
    "gripper_LL_joint",
    "gripper_LR_joint",
    "R_1_joint",
    "R_2_joint",
    "R_3_joint",
    "R_4_joint",
    "R_5_joint",
    "R_6_joint",
    "R_7_joint",
    "gripper_RL_joint",
    "gripper_RR_joint",
    NULL
};

const char* torque_names[] = {
    "AMR_FL_joint",
    "AMR_FLW_joint",
    "AMR_FR_joint",
    "AMR_FRW_joint",
    "AMR_RL_joint",
    "AMR_RLW_joint",
    "AMR_RR_joint",
    "AMR_RRW_joint",
    "L_1_joint",
    "L_2_joint",
    "L_3_joint",
    "L_4_joint",
    "L_5_joint",
    "L_6_joint",
    "L_7_joint",
    "gripper_LL_joint",
    "gripper_LR_joint",
    "R_1_joint",
    "R_2_joint",
    "R_3_joint",
    "R_4_joint",
    "R_5_joint",
    "R_6_joint",
    "R_7_joint",
    "gripper_RL_joint",
    "gripper_RR_joint",
    NULL
};

const char* kinematics_bodies[] = {
    "AMR_FLW_link",
    "AMR_FRW_link",
    "AMR_RLW_link",
    "AMR_RRW_link",
    "gripper_LL_link",
    "gripper_RR_link",
    NULL
};

const char** get_config_order() {
    return config_names;
}
const char** get_vel_order() {
    return vel_names;
}
const char** get_torque_order() {
    return torque_names;
}
const char** get_kinematics_bodies() {
    return kinematics_bodies;
}
const char* get_urdf_path() {
    return "g7_openarm/g7_openarm.urdf";
}
