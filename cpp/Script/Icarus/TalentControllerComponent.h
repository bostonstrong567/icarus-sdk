// /Script/Icarus.TalentControllerComponent
// Derives from: UActorComponent > UObject
// size 0xF8, declared in Icarus/Source/Icarus/Talents/Controller/TalentControllerComponent.h

UCLASS(Abstract, Config=Engine)
class UTalentControllerComponent : public UActorComponent, public ITalentControllerInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FOnModelViewChanged OnModelViewChangedEvent;  // 0x00B8, size 0x10
protected:
    UPROPERTY() UTalentModelInterface* Model;  // 0x00C8, size 0x8
    UPROPERTY(Instanced) UTalentViewInterface* View;  // 0x00D0, size 0x8
    FTalentModelViewsRowHandle ModelView;  // 0x00D8, not reflected
    bool bIsInteractionEnabled;  // 0x00F0, not reflected
    bool bUsesFlags;  // 0x00F1, not reflected
    bool bRequiresCharacter;  // 0x00F2, not reflected
public:
    UFUNCTION(BlueprintCallable) void BP_ForceRefresh();
    UFUNCTION() void NativeModelStateChanged(UTalentModelInterface_Const* InModel);  // parameters 0x8
    UFUNCTION() void OnAccountFlagsUpdated();
    UFUNCTION() void OnCharacterFlagsUpdated();
    UFUNCTION() void OnLevelUp();
    UFUNCTION(BlueprintImplementableEvent) void OnModelViewChanged(UTalentModelInterface* InModel, UTalentViewInterface* InView);  // parameters 0x10
    UFUNCTION() void OnSessionFlagsUpdated();
    UFUNCTION() void Setup();
    UFUNCTION() void TriggerModelStateRefresh();

    // Virtual functions that start here:
    //   GetControllerLevel, GetControllerName, GetModelStorageType, GetModelViewEnum, GetTalentHandler
    //   HasAuthority, IsLocalPlayer, Setup, UpdateRewards
};
