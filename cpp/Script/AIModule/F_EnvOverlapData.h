// /Script/AIModule.EnvOverlapData
// size 0x20, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h

USTRUCT()
struct FEnvOverlapData
{
public:
    UPROPERTY(EditAnywhere) float ExtentX;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float ExtentY;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float ExtentZ;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) FVector ShapeOffset;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere) TEnumAsByte<ECollisionChannel> OverlapChannel;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EEnvOverlapShape> OverlapShape;  // 0x0019, size 0x1
    UPROPERTY(EditAnywhere) uint8 bOnlyBlockingHits : 1;  // 0x001C, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOverlapComplex : 1;  // 0x001C, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bSkipOverlapQuerier : 1;  // 0x001C, mask 0x04
};
