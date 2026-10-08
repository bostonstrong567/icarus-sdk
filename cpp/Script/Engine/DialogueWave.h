// /Script/Engine.DialogueWave
// Derives from: UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Sound/DialogueWave.h

UCLASS(EditInlineNew, MinimalAPI)
class UDialogueWave : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bMature : 1;  // 0x0028, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bOverride_SubtitleOverride : 1;  // 0x0028, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString SpokenText;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString SubtitleOverride;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere) TArray<FDialogueContextMapping> ContextMappings;  // 0x0050, size 0x10
    UPROPERTY() FGuid LocalizationGUID;  // 0x0060, size 0x10
};
