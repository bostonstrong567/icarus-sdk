// /Script/Engine.DebugFloatHistory
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FDebugFloatHistory
{
    UPROPERTY(Transient) TArray<float> Samples;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxSamples;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinValue;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxValue;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAutoAdjustMinMax;  // 0x001C, size 0x1
};
