// /Script/CinematicCamera.NamedLensPreset
// size 0x28, declared in Engine/Source/Runtime/CinematicCamera/Public/CineCameraComponent.h

USTRUCT()
struct FNamedLensPreset
{
    UPROPERTY(BlueprintReadWrite) FString Name;  // 0x0000, size 0x10
    UPROPERTY(BlueprintReadWrite) FCameraLensSettings LensSettings;  // 0x0010, size 0x18
};
