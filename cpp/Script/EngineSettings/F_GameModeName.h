// /Script/EngineSettings.GameModeName
// size 0x28, declared in Engine/Source/Runtime/EngineSettings/Classes/GameMapsSettings.h

USTRUCT()
struct FGameModeName
{
public:
    UPROPERTY(EditAnywhere) FString Name;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FSoftClassPath GameMode;  // 0x0010, size 0x18
};
