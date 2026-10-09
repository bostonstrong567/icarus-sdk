// /Script/NavigationSystem.NavigationInvokerComponent
// Derives from: UActorComponent > UObject
// size 0xB8, declared in Engine/Source/Runtime/NavigationSystem/Public/NavigationInvokerComponent.h

UCLASS(Config=Engine)
class UNavigationInvokerComponent : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) float TileGenerationRadius;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere) float TileRemovalRadius;  // 0x00B4, size 0x4
};
