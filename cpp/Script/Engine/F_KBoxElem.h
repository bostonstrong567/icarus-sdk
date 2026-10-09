// /Script/Engine.KBoxElem
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/BoxElem.h

USTRUCT()
struct FKBoxElem : public FKShapeElem
{
public:
    UPROPERTY(EditAnywhere) FVector Center;  // 0x0030, size 0xC
    UPROPERTY(EditAnywhere) FRotator Rotation;  // 0x003C, size 0xC
    UPROPERTY(EditAnywhere) float X;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) float Y;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere) float Z;  // 0x0050, size 0x4
};
