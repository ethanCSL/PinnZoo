@create_pinnzoo_model struct G7OpenArm <: PinnZooFloatingBaseModel
    kinematics_ori::Symbol
    function G7OpenArm(; kinematics_ori::Symbol = :Quaternion)
        lib = let
            if kinematics_ori == :Quaternion
                dlopen(joinpath(SHARED_LIBRARY_DIR, "libg7_openarm_quat"))
            else
                throw(error("specified configuration is either not found or not supported. Did you compile?"))
            end
        end

        return new(kinematics_ori)
    end
end

@doc raw"""
    G7OpenArm(; kinematics_ori::Symbol = :Quaternion) <: PinnZooFloatingBaseModel

Return the G7 OpenArm mobile manipulator dynamics and kinematics model
""" G7OpenArm

@doc raw"""
    B_func(model::G7OpenArm)

Return the input jacobian mapping actuated joint torques into generalized torques.
The floating base remains unactuated.
"""
function B_func(model::G7OpenArm)
    return [zeros(6, model.nu); I(model.nu)]
end

@doc raw"""
    init_state(model::G7OpenA = rm)

Return a conservative neutral state for the mobile manipulator.
"""
function init_state(model::G7OpenArm)
    x = zero_state(model)

    # Put the floating base slightly above the ground and keep the arms in a neutral pose.
    if model.nq >= 3
        x[3] = 0.11
    end

    return x
end
