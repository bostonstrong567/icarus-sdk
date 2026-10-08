// /Script/Engine.TouchInterface
// Derives from: UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/TouchInterface.h

UCLASS()
class UTouchInterface : public UObject
{
public:
    UPROPERTY(EditAnywhere) TArray<FTouchInputControl> Controls;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere) float ActiveOpacity;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) float InactiveOpacity;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere) float TimeUntilDeactive;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) float TimeUntilReset;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere) float ActivationDelay;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) bool bPreventRecenter;  // 0x004C, size 0x1
    UPROPERTY(EditAnywhere) float StartupDelay;  // 0x0050, size 0x4

    // Virtual functions that start here:
    //   Activate
};
