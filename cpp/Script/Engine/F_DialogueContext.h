// /Script/Engine.DialogueContext
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Kismet/GameplayStatics.h

USTRUCT()
struct FDialogueContext
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UDialogueVoice* Speaker;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UDialogueVoice*> Targets;  // 0x0008, size 0x10
};
