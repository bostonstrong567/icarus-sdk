// /Game/BP/Objects/World/Items/Deployables/LandingPad/BP_LandingPad_Player.BP_LandingPad_Player_C
// Derives from: ABP_Light_Electric_Base_C > ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x87B, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_LandingPad_Player_C : public ABP_Light_Electric_Base_C, public IPlayerLandingPadSnapInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_B;  // 0x07D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_A;  // 0x07E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight_D;  // 0x07E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight_C;  // 0x07F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight_B;  // 0x07F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_H;  // 0x0800, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_G;  // 0x0808, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_E;  // 0x0810, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_F;  // 0x0818, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_D;  // 0x0820, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_C;  // 0x0828, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight_A;  // 0x0830, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0838, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) ULandingPadComponent* LandingPad;  // 0x0840, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* LandingLocator;  // 0x0848, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPlayerCharacterID SelectedPlayerID;  // 0x0850, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_DropShip_C* Dropship;  // 0x0868, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABuildingBase* CachedDestroyedFoundation;  // 0x0870, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EBuildingDestroyReason CachedDestoryedFounddataionReason;  // 0x0878, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool bInteractionBlocked;  // 0x0879, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bStarted;  // 0x087A, size 0x1

    UFUNCTION(BlueprintCallable) void ClaimLandingPad(AIcarusPlayerCharacterSurvival* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void EventFoundationDestroyed(ABuildingBase* Building, EBuildingDestroyReason DestroyReason);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BP_LandingPad_Player(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetSnapPoint() const;  // parameters 0xC
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsEdenPad() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnEQSComplete(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UnClaimLandingPad();
};
