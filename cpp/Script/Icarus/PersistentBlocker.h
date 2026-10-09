// /Script/Icarus.PersistentBlocker
// Derives from: AIcarusActor > AActor > UObject
// size 0x2D0, declared in Icarus/Source/Icarus/Systems/Blockers/PersistentBlocker.h

UCLASS(Config=Engine)
class APersistentBlocker : public AIcarusActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UIcarusNavigationDirtier* NavigationDirtier;  // 0x02C0, size 0x8
private:
    UPROPERTY() bool bHasUpdatedDestroyedState;  // 0x02C8, size 0x1
public:
    UFUNCTION() void OnStatContainerUpdated_Internal();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void TriggerBlockerDestroy();
    UFUNCTION(BlueprintImplementableEvent) void UpdateDestroyedState();
};
