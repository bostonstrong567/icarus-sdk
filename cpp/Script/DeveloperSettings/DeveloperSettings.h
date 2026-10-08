// /Script/DeveloperSettings.DeveloperSettings
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/DeveloperSettings/Public/Engine/DeveloperSettings.h

UCLASS(Abstract)
class UDeveloperSettings : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FName CategoryName;  // 0x0028, protected
    FName SectionName;  // 0x0030, protected

    // Virtual functions that start here:
    //   GetCategoryName, GetContainerName, GetCustomSettingsWidget, GetSectionName
};
