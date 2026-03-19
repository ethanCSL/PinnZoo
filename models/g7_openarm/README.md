# G7 OpenArm Model

This model contains the floating-base dual-arm mobile manipulator used by the `g5_openarm` OCS2 integration.

## Files

- `g7_openarm.urdf`: robot model used for code generation
- `generate.py`: script used to generate the symbolic dynamics and kinematics code
- `generated_code/g7_openarm_quat/`: generated C sources for the quaternion-state version
- `g7_openarm.jl`: Julia wrapper that loads `libg7_openarm_quat.so`
- `meshes/`: meshes referenced by the URDF

## Build

From the repository root:

```bash
mkdir -p build
cd build
cmake ..
cmake --build . --target g7_openarm_quat
```

This produces:

```bash
build/libg7_openarm_quat.so
```

## Notes

- The generated URDF path reported by the wrapper is `g7_openarm/g7_openarm.urdf`.
- The OCS2 `g5_openarm_pinnzoo.launch.py` workflow expects this shared library and uses `PINNZOO_LIBRARY_PATH` to locate it.
