// /Script/Engine.PhysicsConstraintTemplate
// Derives from: UObject
// size 0x318, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h

UCLASS(MinimalAPI)
class UPhysicsConstraintTemplate : public UObject
{
public:
    UPROPERTY(EditAnywhere) FConstraintInstance DefaultInstance;  // 0x0028, size 0x1C8
    UPROPERTY() TArray<FPhysicsConstraintProfileHandle> ProfileHandles;  // 0x01F0, size 0x10
    UPROPERTY(Transient) FConstraintProfileProperties DefaultProfile;  // 0x0200, size 0x114
};
