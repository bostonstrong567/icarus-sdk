// /Script/Engine.SplinePoint
// size 0x44, declared in Engine/Source/Runtime/Engine/Classes/Components/SplineComponent.h

USTRUCT()
struct FSplinePoint
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InputKey;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Position;  // 0x0004, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ArriveTangent;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LeaveTangent;  // 0x001C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator Rotation;  // 0x0028, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Scale;  // 0x0034, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ESplinePointType> Type;  // 0x0040, size 0x1
};
