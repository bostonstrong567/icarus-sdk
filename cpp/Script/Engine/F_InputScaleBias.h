// /Script/Engine.InputScaleBias
// size 0x8, declared in Engine/Source/Runtime/Engine/Classes/Animation/InputScaleBias.h

USTRUCT()
struct FInputScaleBias
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Scale;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Bias;  // 0x0004, size 0x4
};
