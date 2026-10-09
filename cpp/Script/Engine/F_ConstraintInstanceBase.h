// /Script/Engine.ConstraintInstanceBase
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h

USTRUCT()
struct FConstraintInstanceBase
{
public:
    int32 ConstraintIndex;  // 0x0000, not reflected
    FPhysicsConstraintHandle_PhysX ConstraintHandle;  // 0x0008, not reflected
    FPhysScene_PhysX * PhysScene;  // 0x0010, not reflected
};
