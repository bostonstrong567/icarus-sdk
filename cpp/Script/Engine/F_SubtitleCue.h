// /Script/Engine.SubtitleCue
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FSubtitleCue
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FText Text;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Time;  // 0x0018, size 0x4
};
