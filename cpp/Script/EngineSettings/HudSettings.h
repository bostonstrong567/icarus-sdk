// /Script/EngineSettings.HudSettings
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/EngineSettings/Classes/HudSettings.h

UCLASS(Config=Game)
class UHudSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) uint8 bShowHUD : 1;  // 0x0028, mask 0x01
    UPROPERTY(EditAnywhere, Config) TArray<FName> DebugDisplay;  // 0x0030, size 0x10
};
