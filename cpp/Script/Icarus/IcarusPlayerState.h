// /Script/Icarus.IcarusPlayerState
// Derives from: APlayerState > AInfo > AActor > UObject
// size 0x510, declared in Icarus/Source/Icarus/Systems/IcarusPlayerState.h

UCLASS(NotPlaceable, Config=Engine)
class AIcarusPlayerState : public APlayerState, public ITalentHandler
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FOnFlagsChanged OnCharacterFlagsChanged;  // 0x0328, size 0x10
    UPROPERTY(BlueprintAssignable) FOnFlagsChanged OnAccountFlagsChanged;  // 0x0338, size 0x10
    FOnTalentControllersSetup OnTalentControllersSetup;  // 0x0348, not reflected
    UPROPERTY(Replicated) ACheatController* CheatController;  // 0x04B8, size 0x8
    UPROPERTY(BlueprintAssignable) FOnTalentsChanged OnCharacterTalentsChanged;  // 0x04C0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnTalentsChanged OnAccountTalentsChanged;  // 0x04D0, size 0x10
protected:
    UPROPERTY(Replicated, ReplicatedUsing) FOnlineProfileUser ActiveUserProfile;  // 0x0358, size 0x48
    UPROPERTY(Replicated, ReplicatedUsing) FOnlineProfileCharacter ActiveCharacter;  // 0x03A0, size 0xF0
    UPROPERTY(Instanced) UPlayerCharacterState* ActivePlayerCharacterState;  // 0x0490, size 0x8
    UPROPERTY(Replicated) FPlayerCharacterID PlayerCharacterID;  // 0x0498, size 0x18
    UPROPERTY(Replicated, BlueprintReadOnly) bool bIsHost;  // 0x04B0, size 0x1
    bool bHaveTalentControllersBeenSetup;  // 0x04B1, not reflected
    UPROPERTY(Instanced, BlueprintReadOnly) UPlayerTalentControllerComponent* PlayerTalentController;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadOnly) UBlueprintTalentControllerComponent* BlueprintTalentController;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadOnly) UWorkshopTalentControllerComponent* WorkshopTalentController;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadOnly) UProspectTalentControllerComponent* ProspectTalentController;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadOnly) UOutpostTalentControllerComponent* OutpostTalentControllerComponent;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadOnly) USoloTalentControllerComponent* SoloTalentControllerComponent;  // 0x0508, size 0x8
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FOnlineProfileCharacter GetActiveCharacter() const;  // parameters 0xF0
    UFUNCTION(BlueprintCallable, BlueprintPure) UPlayerCharacterState* GetActivePlayerCharacterState() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FOnlineProfileUser GetActiveUserProfile() const;  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) FPlayerCharacterID GetPlayerCharacterID() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetPlayerVisualIdentity() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) UTalentControllerComponent* GetTalentControllerForTalent(const FTalentsRowHandle& Talent) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UTalentControllerComponent*> GetTalentControllers() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetUserID() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasActiveCharacter() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasActiveUserProfile() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool HasCharacterFlag(const FCharacterFlagsRowHandle& Flag);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasValidPlayerCharacterID() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasValidUserID() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HaveTalentControllersBeenSetup() const;  // parameters 0x1
    UFUNCTION() void OnActiveCharacterAliveStateChanged(UActorState* ActorState);  // parameters 0x8
    UFUNCTION() void OnActiveCharacterExperienceChanged();
    UFUNCTION() void OnActiveCharacterExperienceDebtChanged();
    UFUNCTION() void OnRep_ActiveCharacter(const FOnlineProfileCharacter& PreviousCharacter);  // parameters 0xF0
    UFUNCTION() void OnRep_ActiveUserProfile(const FOnlineProfileUser& PreviousUserProfile);  // parameters 0x48
    UFUNCTION() void OnTalentControllerModelViewChanged(UTalentControllerComponent* Controller);  // parameters 0x8
    UFUNCTION() void OnUnlockedAccountTalent(UTalentModelInterface_Const* Model, const FTalentsRowHandle& Talent, const FTalentModelData& TalentData);  // parameters 0x30
    UFUNCTION() void OnUnlockedCharacterTalent(UTalentModelInterface_Const* Model, const FTalentsRowHandle& Talent, const FTalentModelData& TalentData);  // parameters 0x30
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerSetUnlockedAccountTalents(TArray<FBackendTalent> BackendTalents);  // parameters 0x10
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerSyncAccountTalent(FTalentsRowHandle Talent, FTalentModelData TalentData);  // parameters 0x28
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerSyncCharacterTalent(FTalentsRowHandle Talent, FTalentModelData TalentData);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void SetAccountFlag(const FAccountFlagsRowHandle& Flag, bool State);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void SetAccountFlags(const TMap<FAccountFlagsRowHandle, bool>& FlagMap);  // parameters 0x50
    UFUNCTION() void SetActiveCharacter(const FOnlineProfileCharacter& InActiveCharacter);  // parameters 0xF0
    UFUNCTION() void SetActiveUserProfile(const FOnlineProfileUser& InProfileUser);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void SetCharacterFlag(const FCharacterFlagsRowHandle& Flag, bool State);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void SetCharacterFlags(const TMap<FCharacterFlagsRowHandle, bool>& FlagMap);  // parameters 0x50

    // Virtual functions that start here:
    //   ServerSetUnlockedAccountTalents_Implementation, ServerSyncAccountTalent_Implementation
    //   ServerSyncCharacterTalent_Implementation
};
