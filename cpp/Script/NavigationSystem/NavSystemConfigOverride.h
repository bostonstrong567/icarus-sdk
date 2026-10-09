// /Script/NavigationSystem.NavSystemConfigOverride
// Derives from: AActor > UObject
// size 0x230, declared in Engine/Source/Runtime/NavigationSystem/Public/NavSystemConfigOverride.h

UCLASS(Config=Engine)
class ANavSystemConfigOverride : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UNavigationSystemConfig* NavigationSystemConfig;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ENavSystemOverridePolicy OverridePolicy;  // 0x0228, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bLoadOnClient : 1;  // 0x0229, mask 0x01

    // Virtual functions that start here:
    //   AppendToNavSystem, OverrideNavSystem
};
