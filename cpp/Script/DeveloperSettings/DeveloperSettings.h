// /Script/DeveloperSettings.DeveloperSettings
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/DeveloperSettings/Public/Engine/DeveloperSettings.h

UCLASS(Abstract)
class UDeveloperSettings : public UObject
{
protected:
    FName CategoryName;  // 0x0028, not reflected
    FName SectionName;  // 0x0030, not reflected

    // Virtual functions that start here:
    //   GetCategoryName, GetContainerName, GetCustomSettingsWidget, GetSectionName
};
