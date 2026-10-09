// /Script/CinematicCamera.NamedFilmbackPreset
// size 0x20, declared in Engine/Source/Runtime/CinematicCamera/Public/CineCameraComponent.h

USTRUCT()
struct FNamedFilmbackPreset
{
public:
    UPROPERTY(BlueprintReadWrite) FString Name;  // 0x0000, size 0x10
    UPROPERTY(BlueprintReadWrite) FCameraFilmbackSettings FilmbackSettings;  // 0x0010, size 0xC
};
