// /Script/Engine.PhysicsConstraintProfileHandle
// size 0x11C, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h

USTRUCT()
struct FPhysicsConstraintProfileHandle
{
public:
    UPROPERTY() FConstraintProfileProperties ProfileProperties;  // 0x0000, size 0x114
    UPROPERTY(EditAnywhere) FName ProfileName;  // 0x0114, size 0x8
};
