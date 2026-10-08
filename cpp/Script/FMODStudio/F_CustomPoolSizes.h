// /Script/FMODStudio.CustomPoolSizes
// size 0x14, declared in Icarus/Plugins/FMODStudio/Source/FMODStudio/Classes/FMODSettings.h

USTRUCT()
struct FCustomPoolSizes
{
    UPROPERTY(EditAnywhere, Config) int32 Desktop;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 Mobile;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 PS4;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 Switch;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 XboxOne;  // 0x0010, size 0x4
};
