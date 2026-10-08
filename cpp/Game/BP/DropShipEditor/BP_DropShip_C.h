// /Game/BP/DropShipEditor/BP_DropShip.BP_DropShip_C
// Derives from: AIcarusRocket > AIcarusActor > AActor > UObject
// size 0x4D1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DropShip_C : public AIcarusRocket
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioContextComponent* AudioContext;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioOcclusionDropshipComponent* AudioOcclusionDropship;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* IcarusNavigationDirtier;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusCameraSpringArm* IcarusCameraSpringArm;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* PlayerName;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0378, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_PartBase_C*> HighlightComponents;  // 0x0380, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DescentTime;  // 0x0390, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentTime;  // 0x0394, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AscentTime;  // 0x0398, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDropShipEvent> DecentActions;  // 0x03A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDropShipEvent> AscentActions;  // 0x03B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDropShipSequencesRowHandle DecentSequence;  // 0x03C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDropShipSequencesRowHandle AscentSequence;  // 0x03D8, size 0x18
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ShipInteractionEnabled;  // 0x03F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ClientReady;  // 0x03F1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ServerShipBuilt;  // 0x03F2, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FText Name;  // 0x03F8, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_DropshipSeat_C* Seat;  // 0x0410, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool CollisionEnabled;  // 0x0418, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PlayerIndex;  // 0x041C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool PartsAttached;  // 0x0420, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_PartBase_C* TopPart;  // 0x0428, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_PartBase_C* MidPart;  // 0x0430, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_PartBase_C* BtmPart;  // 0x0438, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FVector ReplicatedLocation;  // 0x0440, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugDropshipSequence;  // 0x044C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString LogName;  // 0x0450, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Dropship_Initialised;  // 0x0460, size 0x1, named "Dropship Initialised"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugWithoutBackend;  // 0x0461, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) EDropshipDescentStateFMODParam FMODAudioDescentState;  // 0x0462, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EDropshipAssignedPlayerType> AssignedPlayerType;  // 0x0463, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDatabaseReloaded;  // 0x0464, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PlayLandingAudio;  // 0x0465, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemData> GrantedLoadoutItems;  // 0x0468, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsUnattendedLaunch;  // 0x0478, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RelocationTarget;  // 0x047C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastFoliageLocationCheck;  // 0x0488, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DestroyFoliageRadius;  // 0x0494, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText CachedPlayerName;  // 0x0498, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SeatSpringArmLengthOffset;  // 0x04B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPlayerCharacterID LocalPlayerID;  // 0x04B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PreventDamage;  // 0x04D0, size 0x1

    UFUNCTION(BlueprintCallable) void BeginRelocation(FVector NewTargetLocation, bool PreventDamage);  // parameters 0xD
    UFUNCTION() void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable, BlueprintPure) void CheckClientPartsReady(bool& PartsReady);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckForAtomiseFoliage(FVector CurrentLocation, FVector TargetLocation);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void DebugSequence(float SequenceTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void DoRelocation();
    UFUNCTION(BlueprintCallable) void DropshipLog(FString Log);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BP_DropShip(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FixDropshipLayout();
    UFUNCTION(BlueprintCallable) void FixPartsLocation(ABP_PartBase_C* Parent, ABP_PartBase_C* NewPart, FName ParentSocket, FName NewPartSocket);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void FixSeat(ABP_PartBase_C* Parent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetCommandPart(ABP_RP_Command_Base_C*& Command);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetDropshipLoadoutItems(FItemData& TopPart, FItemData& MidPart, FItemData& BottomPart);  // parameters 0x5D0
    UFUNCTION(BlueprintCallable) void Grant_Loadout_Items();  // named "Grant Loadout Items"
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasProspectExpired(bool& IsExpired);  // parameters 0x1
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void InitLandedState();
    UFUNCTION(BlueprintCallable) void InitialiseActions();
    UFUNCTION(BlueprintCallable) void InitialiseMapIcon();
    UFUNCTION(BlueprintCallable) void InitialisePosition(FVector InitialPositionOverride);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnConnectedPlayerInitialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintImplementableEvent) void OnDatabaseReload();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnDropshipSpawnPlayerInit();
    UFUNCTION(BlueprintCallable) void OnProspectSessionEnded(EEndProspectSessionContext Context);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnRep_AssignedPlayerCharacterID();
    UFUNCTION(BlueprintCallable) void OnRep_FMODAudioDescentState();
    UFUNCTION(BlueprintCallable) void OnRep_Name();
    UFUNCTION(BlueprintImplementableEvent) void OnRep_RocketState();
    UFUNCTION(BlueprintCallable) void OnRep_ShipInteractionEnabled();
    UFUNCTION(BlueprintCallable) void OnRocketAssembled();
    UFUNCTION(BlueprintCallable) void OnServer_ClientReady();
    UFUNCTION(BlueprintCallable) void OnWorldInteraction(UInteractableComponent* Interactable, AActor* Instigator, const FHitResult& HitResult);  // parameters 0x98
    UFUNCTION(BlueprintCallable) void ProcessActions(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ReadyCheck(bool& Ready);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ResetDropshipActions();
    UFUNCTION(BlueprintCallable) void SetAssignedPlayerType(TEnumAsByte<EDropshipAssignedPlayerType> PlayerType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetInteraction(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SpawnParts(FItemData TOP_Item, FItemData MID_Item, FItemData BTM_Item);  // parameters 0x5D0
    UFUNCTION(BlueprintCallable) void SpawnShipParts();
    UFUNCTION(BlueprintCallable) void StateUpdated();
    UFUNCTION(BlueprintCallable) void TriggerActions(TArray<FDropShipEvent>& Actions, float& Time);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void TriggerLaunch(bool UnattendedLaunch);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void TriggerLeaveProspectLaunch();
    UFUNCTION(BlueprintCallable) void TriggerPartEvent(FDropShipActionsEnum Action);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void TriggerShipEvent(FDropShipActionsEnum Action, bool& Success);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void TryAssignDebugDropship();
    UFUNCTION(BlueprintCallable) void TryInitialiseDropship();
    UFUNCTION(BlueprintCallable) void UpdateAudioState();
    UFUNCTION(BlueprintCallable) void UpdateFMODState(FDropShipActionsEnum Action);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateFmodPlayerPerspective(bool bIsThirdPerson);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateGlobalAudioParameters();
    UFUNCTION(BlueprintCallable) void UpdateHighlight(ABP_PartBase_C* Part, bool State);  // parameters 0x9
};
