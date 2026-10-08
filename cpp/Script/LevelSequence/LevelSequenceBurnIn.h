// /Script/LevelSequence.LevelSequenceBurnIn
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x320, declared in Engine/Source/Runtime/LevelSequence/Public/LevelSequenceBurnIn.h

UCLASS(EditInlineNew)
class ULevelSequenceBurnIn : public UUserWidget
{
public:
    UPROPERTY(BlueprintReadOnly) FLevelSequencePlayerSnapshot FrameInformation;  // 0x0260, size 0xB8
    UPROPERTY(BlueprintReadOnly) ALevelSequenceActor* LevelSequenceActor;  // 0x0318, size 0x8

    UFUNCTION(BlueprintNativeEvent) TSubclassOf<ULevelSequenceBurnInInitSettings> GetSettingsClass() const;  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void SetSettings(UObject* InSettings);  // parameters 0x8

    // Virtual functions that start here:
    //   GetSettingsClass_Implementation
};
