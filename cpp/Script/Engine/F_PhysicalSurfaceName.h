// /Script/Engine.PhysicalSurfaceName
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsSettings.h

USTRUCT()
struct FPhysicalSurfaceName
{
public:
    UPROPERTY() TEnumAsByte<EPhysicalSurface> Type;  // 0x0000, size 0x1
    UPROPERTY() FName Name;  // 0x0004, size 0x8
};
