// /Game/BP/Systems/BP_IcarusPlayerState.BP_IcarusPlayerState_C
// Derives from: AIcarusPlayerState > APlayerState > AInfo > AActor > UObject
// size 0x559, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Engine)
class ABP_IcarusPlayerState_C : public AIcarusPlayerState
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x04F8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 PlayerIdentityVisual;  // 0x0500, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 PlayerMapColorIndex;  // 0x0504, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AIcarusWaypointActor* PersonalWaypoint;  // 0x0508, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlayerHealth;  // 0x0510, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugDeployablePlacement;  // 0x0514, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AIcarusWaypointActor> IcarusWaypointClass;  // 0x0518, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UObject> WaypointClass;  // 0x0540, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FPlayerColorSelected PlayerColorSelected;  // 0x0548, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool DebugDeployableCollisionDisabled;  // 0x0558, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_IcarusPlayerState(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetPlayerVisualIdentity() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasValidPlayerColor(bool& HasValidColor) const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void InitialisePlayerColor();
    UFUNCTION(BlueprintCallable) void OnConnectedPlayerInitialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void OnLoaded_A3EAECF7499A23B0349644B397036FC7(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_DEC21D7041DA4135F51EAE8C5F4694B4(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_PlayerIdentityVisual();
    UFUNCTION(BlueprintCallable) void PlayerColorSelected__DelegateSignature();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerDestroyWaypoint();
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerMovePersonalWaypoint(FVector Location, AController* OwningController);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_ToggleDeployableCollision(bool DisableCollision);  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast) void Server_UpdateHealthValue(float NewHealth);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDeployableDebugEnabled(bool Enabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TryInitialisePlayerColor();
};
