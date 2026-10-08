// /Script/Engine.KSphereElem
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/SphereElem.h

USTRUCT()
struct FKSphereElem : public FKShapeElem
{
    UPROPERTY(EditAnywhere) FVector Center;  // 0x0030, size 0xC
    UPROPERTY(EditAnywhere) float Radius;  // 0x003C, size 0x4
};
