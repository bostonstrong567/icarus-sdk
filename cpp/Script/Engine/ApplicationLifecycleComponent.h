// /Script/Engine.ApplicationLifecycleComponent
// Derives from: UActorComponent > UObject
// size 0x140, declared in Engine/Source/Runtime/Engine/Classes/Components/ApplicationLifecycleComponent.h

UCLASS(Config=Engine)
class UApplicationLifecycleComponent : public UActorComponent
{
public:
    UPROPERTY(BlueprintAssignable) FApplicationLifetimeDelegate ApplicationWillDeactivateDelegate;  // 0x00B0, size 0x10
    UPROPERTY(BlueprintAssignable) FApplicationLifetimeDelegate ApplicationHasReactivatedDelegate;  // 0x00C0, size 0x10
    UPROPERTY(BlueprintAssignable) FApplicationLifetimeDelegate ApplicationWillEnterBackgroundDelegate;  // 0x00D0, size 0x10
    UPROPERTY(BlueprintAssignable) FApplicationLifetimeDelegate ApplicationHasEnteredForegroundDelegate;  // 0x00E0, size 0x10
    UPROPERTY(BlueprintAssignable) FApplicationLifetimeDelegate ApplicationWillTerminateDelegate;  // 0x00F0, size 0x10
    UPROPERTY(BlueprintAssignable) FApplicationLifetimeDelegate ApplicationShouldUnloadResourcesDelegate;  // 0x0100, size 0x10
    UPROPERTY(BlueprintAssignable) FApplicationStartupArgumentsDelegate ApplicationReceivedStartupArgumentsDelegate;  // 0x0110, size 0x10
    UPROPERTY(BlueprintAssignable) FOnTemperatureChangeDelegate OnTemperatureChangeDelegate;  // 0x0120, size 0x10
    UPROPERTY(BlueprintAssignable) FOnLowPowerModeDelegate OnLowPowerModeDelegate;  // 0x0130, size 0x10
};
