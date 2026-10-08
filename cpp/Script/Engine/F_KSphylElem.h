// /Script/Engine.KSphylElem
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/SphylElem.h

USTRUCT()
struct FKSphylElem : public FKShapeElem
{
    UPROPERTY(EditAnywhere) FVector Center;  // 0x0030, size 0xC
    UPROPERTY(EditAnywhere) FRotator Rotation;  // 0x003C, size 0xC
    UPROPERTY(EditAnywhere) float Radius;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) float Length;  // 0x004C, size 0x4
};
