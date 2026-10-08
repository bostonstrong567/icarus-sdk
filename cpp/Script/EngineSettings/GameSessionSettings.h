// /Script/EngineSettings.GameSessionSettings
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/EngineSettings/Classes/GameSessionSettings.h

UCLASS(Config=Game)
class UGameSessionSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) int32 MaxSpectators;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 MaxPlayers;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, Config) uint8 bRequiresPushToTalk : 1;  // 0x0030, mask 0x01
};
