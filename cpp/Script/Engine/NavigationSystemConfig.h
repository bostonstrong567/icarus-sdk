// /Script/Engine.NavigationSystemConfig
// Derives from: UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/AI/NavigationSystemConfig.h

UCLASS(EditInlineNew, Config=Engine)
class UNavigationSystemConfig : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) FSoftClassPath NavigationSystemClass;  // 0x0028, size 0x18
    UPROPERTY(EditAnywhere) FNavAgentSelector SupportedAgentsMask;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) FName DefaultAgentName;  // 0x0044, size 0x8
protected:
    UPROPERTY(EditAnywhere) uint8 bIsOverriden : 1;  // 0x004C, mask 0x01

    // Virtual functions that start here:
    //   CreateAndConfigureNavigationSystem
};
