// /Script/Engine.ConstraintInstanceBase
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h

USTRUCT()
struct FConstraintInstanceBase
{

    // Not reflected:
    int32 ConstraintIndex;  // 0x0000
    FPhysicsConstraintHandle_PhysX ConstraintHandle;  // 0x0008
    FPhysScene_PhysX * PhysScene;  // 0x0010
};
