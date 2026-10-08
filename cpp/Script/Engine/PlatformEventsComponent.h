// /Script/Engine.PlatformEventsComponent
// Derives from: UActorComponent > UObject
// size 0xD0, declared in Engine/Source/Runtime/Engine/Classes/Components/PlatformEventsComponent.h

UCLASS(Config=Engine)
class UPlatformEventsComponent : public UActorComponent
{
public:
    UPROPERTY(BlueprintAssignable) FPlatformEventDelegate PlatformChangedToLaptopModeDelegate;  // 0x00B0, size 0x10
    UPROPERTY(BlueprintAssignable) FPlatformEventDelegate PlatformChangedToTabletModeDelegate;  // 0x00C0, size 0x10

    UFUNCTION(BlueprintCallable) bool IsInLaptopMode();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool IsInTabletMode();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool SupportsConvertibleLaptops();  // parameters 0x1
};
