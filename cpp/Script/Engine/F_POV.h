// /Script/Engine.POV
// size 0x1C, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FPOV
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator Rotation;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FOV;  // 0x0018, size 0x4
};
