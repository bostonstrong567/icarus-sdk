// /Script/LevelSequence.LevelSequenceProjectSettings
// Derives from: UDeveloperSettings > UObject
// size 0x68, declared in Engine/Source/Runtime/LevelSequence/Private/LevelSequenceProjectSettings.h

UCLASS(Config=Engine)
class ULevelSequenceProjectSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) bool bDefaultLockEngineToDisplayRate;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere, Config) FString DefaultDisplayRate;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, Config) FString DefaultTickResolution;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere, Config) EUpdateClockSource DefaultClockSource;  // 0x0060, size 0x1
};
