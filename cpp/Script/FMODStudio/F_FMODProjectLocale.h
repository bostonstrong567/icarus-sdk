// /Script/FMODStudio.FMODProjectLocale
// size 0x28, declared in Icarus/Plugins/FMODStudio/Source/FMODStudio/Classes/FMODSettings.h

USTRUCT()
struct FFMODProjectLocale
{
    UPROPERTY(EditAnywhere, Config) FString LocaleName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, Config) FString LocaleCode;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, Config) bool bDefault;  // 0x0020, size 0x1
};
