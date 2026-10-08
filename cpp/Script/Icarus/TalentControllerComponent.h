// /Script/Icarus.TalentControllerComponent
// Derives from: UActorComponent > UObject
// size 0xF8, declared in Icarus/Source/Icarus/Talents/Controller/TalentControllerComponent.h

UCLASS(Abstract, Config=Engine)
class UTalentControllerComponent : public UActorComponent, public ITalentControllerInterface
{
public:
    UPROPERTY(BlueprintAssignable) FOnModelViewChanged OnModelViewChangedEvent;  // 0x00B8, size 0x10
    UPROPERTY() UTalentModelInterface* Model;  // 0x00C8, size 0x8
    UPROPERTY(Instanced) UTalentViewInterface* View;  // 0x00D0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FTalentModelViewsRowHandle ModelView;  // 0x00D8, protected
    bool bIsInteractionEnabled;  // 0x00F0, protected
    bool bUsesFlags;  // 0x00F1, protected
    bool bRequiresCharacter;  // 0x00F2, protected

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
