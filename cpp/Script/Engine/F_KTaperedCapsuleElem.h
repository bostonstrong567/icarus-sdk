// /Script/Engine.KTaperedCapsuleElem
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h

USTRUCT()
struct FKTaperedCapsuleElem : public FKShapeElem
{
    UPROPERTY(EditAnywhere) FVector Center;  // 0x0030, size 0xC
    UPROPERTY(EditAnywhere) FRotator Rotation;  // 0x003C, size 0xC
    UPROPERTY(EditAnywhere) float Radius0;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) float Radius1;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere) float Length;  // 0x0050, size 0x4
};
