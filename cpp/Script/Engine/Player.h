// /Script/Engine.Player
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Engine/Player.h

UCLASS(Transient, MinimalAPI, Config=Engine)
class UPlayer : public UObject
{
public:
    UPROPERTY(Transient) APlayerController* PlayerController;  // 0x0030, size 0x8
    UPROPERTY() int32 CurrentNetSpeed;  // 0x0038, size 0x4
    UPROPERTY(Config) int32 ConfiguredInternetSpeed;  // 0x003C, size 0x4
    UPROPERTY(Config) int32 ConfiguredLanSpeed;  // 0x0040, size 0x4

    // Virtual functions that start here:
    //   SwitchController
};
