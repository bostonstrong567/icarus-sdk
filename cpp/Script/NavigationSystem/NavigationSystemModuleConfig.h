// /Script/NavigationSystem.NavigationSystemModuleConfig
// Derives from: UNavigationSystemConfig > UObject
// size 0x58, declared in Engine/Source/Runtime/NavigationSystem/Public/NavigationSystem.h

UCLASS(EditInlineNew)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
    UPROPERTY(EditAnywhere) uint8 bStrictlyStatic : 1;  // 0x0050, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bCreateOnClient : 1;  // 0x0050, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bAutoSpawnMissingNavData : 1;  // 0x0050, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bSpawnNavDataInNavBoundsLevel : 1;  // 0x0050, mask 0x08
};
