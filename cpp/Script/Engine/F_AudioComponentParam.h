// /Script/Engine.AudioComponentParam
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Components/AudioComponent.h

USTRUCT()
struct FAudioComponentParam
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ParamName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloatParam;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BoolParam;  // 0x000C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 IntParam;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundWave* SoundWaveParam;  // 0x0018, size 0x8
};
